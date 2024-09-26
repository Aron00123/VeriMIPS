`include "InStrType.v"
`include "ExcType.v"
`timescale 1ns / 1ps
`define intAccept SR[15:10] // 是否允许外部中断
`define isInExc SR[1] // 是否正处于异常处理中
`define wholeExcEn SR[0] // 全局外部中断使能
`define isBD cause[31] // (是否为延迟槽指令)是时epc指向受害指令前一条
`define intReqReg cause[15:10] // 外部中断请求寄存器
`define excCodeReg cause[6:2] // 异常的编码寄存器

module CP0 (
    input clk,
    input reset,
    input M_writeCP0_EN,
    input BD_IN,  // 是否为延迟槽指令
    input [4:0] excCode_IN,  // 异常编码
    input [4:0] CP0_regNUM,  // 访问的CP0寄存器地址
    input [5:0] intReq,  // 6个外部中断请求
    input [9:0] M_inStrType,  // M级指令类型
    input [31:0] CP0_IN,
    input [31:0] VPC,  // 受害PC
    output [31:0] CP0_OUT,
    output [31:0] EPC_OUT,  // 传递EPC
    output isIntExc  // 是否为中断或异常
);

    reg [31:0] SR, cause, EPC;  // 三个cp0的寄存器,编号分别为12/13/14
    wire isInt, isExc;  // 是否为外部中断，是否为内部异常

    assign isInt = (|(intReq & `intAccept)) && `wholeExcEn && !`isInExc; // 有外部中断请求(isInt随外部中断请求的改变即时改变) 
                                                                         // 全局中断使能有效 
                                                                         // 未在异常处理中
    assign isExc = (excCode_IN != 5'h0 && !`isInExc); // 随输入端口的异常码的改变即时改变

    assign CP0_OUT = (CP0_regNUM == 5'd12) ? SR :
                    (CP0_regNUM == 5'd13) ? cause :
                    (CP0_regNUM == 5'd14) ? EPC : 32'h0;
    assign EPC_OUT = (M_writeCP0_EN && CP0_regNUM == 5'd14) ? CP0_IN : EPC; // epc值的内部转发
    assign isIntExc = isInt | isExc;  // 外部中断请求和内部异常都会引发中断, 
                                      // 当异常指令刚进入到M级寄存器或者外部
                                      // 中断刚发出的时候CP0的输出端已经告诉
                                      // cpu下个上升沿开始进行中断处理, 在中
                                      // 断处理的第一个上升沿到来之前,中断信号便已准备好

    always @(posedge clk) begin
        if (reset) begin
            SR <= 0;
            cause <= 0;
            EPC <= 0;
        end else begin
            `intReqReg <= intReq;
            if (isInt) begin
                `isInExc <= 1'b1;
                EPC <= BD_IN ? (VPC - 4) : VPC; // 这时候虽然M_isBD还没有写入CP0,但是CP0的端口已经传进来这个信号
                `isBD <= BD_IN;
                `excCodeReg <= 5'h0;
            end else if (isExc) begin
                `isInExc <= 1'b1;
                EPC <= BD_IN ? (VPC - 4) : VPC;
                `isBD <= BD_IN;
                `excCodeReg <= excCode_IN;
            end

            if (M_inStrType == `eret) begin
                `isInExc <= 1'b0;
            end

            if (M_writeCP0_EN & !isIntExc) begin
                case (CP0_regNUM)
                    5'd12: begin
                        `intAccept <= CP0_IN[15:10];
                        `isInExc <= CP0_IN[1];
                        `wholeExcEn <= CP0_IN[0];
                    end
                    5'd13: begin
                        // 保证不写cause
                    end
                    5'd14: begin
                        EPC <= CP0_IN;
                    end
                endcase
            end
        end
    end

endmodule
