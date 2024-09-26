`include "instr_def_h.v"
`include "cpuex_def_h.v"
`define intAccept SR[15:10] // 是否允许接受外部中断
`define isInExc SR[1] // 是否正处于异常处理中
`define wholeExcEn SR[0] // 全局外部中断使能
`define isBD cause[31] // (是否为延迟槽指令)�时epc指向受害指令前一�
`define intReq cause[15:10] // 6个外部中断请�
`define exCode cause[6:2] // 异常的编�

module CP0 (
    input clk,  // 时钟
    input reset,  // 复位信号
    input en,  // CP0写使�
    input [4:0] CP0Add,  // 访存的CP0寄存器地址
    input [31:0] CP0In,  // 要写入CP0的数�
    output [31:0] CP0Out,  // 访存的CP0寄存器的值的输出
    input [31:0] VPC,  // 受害pc
    input BDIn,  // 是否为延迟槽指令
    input [4:0] ExcCodeIn,  // 异常编码  
    input [5:0] HWInt,  // 6个外部中断请�
    input isInExcClr, // 用来复位isInExc, 当退出异常处理程序时(eret指令)会对isInExc进行清空
    output [31:0] EPCOut,  // epc寄存器输出�
    output Req  // 进去异常处理程序的请�
);  //.. 可能还没写好
    /*module CP0(
    input en, // CP0写使�
    input [31:0] CP0In, // 要写入CP0的数�

    input [31:0] VPC, // 受害pc
    input BDIn, // 是否为延迟槽指令
    input [4:0] ExcCodeIn, // 异常编码  
    input isInExcClr, // 用来复位isInExc
);*/

    reg [31:0] SR, cause, epc;  // 三个cp0的寄存器,编号分别�12/13/14
    wire isReq, isExc;

    assign EPCOut = (en && CP0Add == 5'd14) ? CP0In : epc;  // epc值的内部转发
    assign Req = isReq | isExc; // 外部中断请求和异� 都会引发中断, 当异常指令刚进入到M级寄存器或者外部中断刚发出的时�CP0的输出端已经告诉cpu下个上升沿开始进行中断处�在中断处理的第一个上升沿到来之前,中断信号便已准备�
    assign CP0Out = (CP0Add == 5'd12) ? SR : 
                (CP0Add == 5'd13) ? cause :
                (CP0Add == 5'd14) ? epc : 32'h0;

    assign isReq = (|(HWInt & `intAccept)) && `wholeExcEn && !`isInExc; //有外部中断请�isReq随外部中断请求的改变即时改变) �全局中断使能有效 �未在异常�
    assign isExc = (ExcCodeIn != 5'h0 && !`isInExc); // 随输入端口的异常码的改变即时改变

    // ((|(HWInt &IM)) & (!EXL) &(IE))]1((]ExcCodeIn) & (!'EXL))
    /*
`define intAccept SR[15:10] // 是否允许接受外部中断

`define isInExc SR[1] // 是否正处于异常处理中

`define wholeExcEn SR[0] // 全局外部中断使能

`define isBD cause[31] // (是否为延迟槽指令)�时epc指向受害指令前一�
`define intReq cause[15:10] // 6个外部中断请�
`define exCode cause[6:2] // 异常的编�
epc
*/
    always @(posedge clk) begin
        if (reset) begin
            SR <= 32'h0;
            cause <= 32'h0;
            epc <= 32'h0;
        end else begin
            `intReq <= HWInt;  // 每周期将外部中断请求都写入casue
            if (isReq) begin  // 如果中断,这个上升沿前就已经准备好了中断信�
                `isInExc <= 1'b1;  // 表明正处理中�
                epc <= BDIn ? (VPC - 4) : VPC; // 这时候虽然M_isBD还没有写入CP0,但是CP0的端口已经传进来这个信号�
                `isBD <= BDIn;
                `exCode <= 5'h0;
            end else if (isExc) begin
                `isInExc <= 1'b1;
                epc <= BDIn ? (VPC - 4) : VPC;
                `isBD <= BDIn;
                `exCode <= ExcCodeIn;
            end
            // else if () begin

            // end

            if (isInExcClr) begin  //
                `isInExc <= 1'b0;
            end

            // 写入功能
            if (en && !Req) begin // 如果这个if成立�在该上升沿到来时的M级指令是受害指令,受害指令不应该得到执�因此写使能要屏蔽
                case (CP0Add)
                    5'd12: begin
                        `intAccept <= CP0In[15:10];
                        `isInExc <= CP0In[1];
                        `wholeExcEn <= CP0In[0];
                    end  //只写入有效位
                    5'd13: begin  // 官方评测保证不会有写入cause的情况发�
                        //
                    end
                    5'd14: begin
                        epc <= CP0In;
                    end
                endcase
            end
        end

    end
endmodule


