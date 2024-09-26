`include "instr_def_h.v"
`include "cpuex_def_h.v"
module MULDIV(
    input clk,
    input reset,
    input [9:0] E_instrType, // 告诉MULDIV应该进行哪种计算,以及mtlo这种应该取用哪个
    input [31:0] E_rd1,    
    input [31:0] E_rd2,
    input [4:0] E_rs,
    output [31:0] HI_out,
    output [31:0] LO_out,
    output isbusy_out,
    output [31:0] MD_Tnew_out,

    input M_cp0_req
);
// mflo  mtlo  mult
// mtlo  mflo  mult
// mflo  mult  mtlo
// mtlo  mult  mflo
// mult  mtlo  mflo
// mult  mflo  mtlo
reg [31:0] MD_Tnew; // 乘除产生新数据还需要的时间
reg [31:0] src1,src2;// 两个运算数需要用寄存器存下来
reg [31:0] HI,LO;
reg isbusy;
wire [4:0] start;
reg [4:0] storeStart; // 开5�容纳32种情�避免后面多加
reg [4:0] cn; // 数停滞的周期�

assign MD_Tnew_out = MD_Tnew;
assign isbusy_out = isbusy;
assign HI_out = HI;
assign LO_out = LO;
//MULDIV内部实现start,避免为控制器增加负担
assign start = (E_instrType == `mult) ? 1 :
               (E_instrType == `multu) ? 2 :
               (E_instrType == `div) ? 3 :
               (E_instrType == `divu) ? 4 :
               (E_instrType == `mfhi) ? 5 :
               (E_instrType == `mflo) ? 6 :
               (E_instrType == `mthi) ? 7 :
               (E_instrType == `mtlo) ? 8 : 
               0;
initial begin
    storeStart = 0;
    src1 = 0;
    src2 = 0;
    cn = 0;
    HI = 0;
    LO = 0;
    isbusy = 0;
    MD_Tnew = 0;
end

always @(posedge clk) begin
    if(reset) begin
        storeStart <= 0;
        src1 <= 0;
        src2 <= 0;
        cn <= 0;
        HI <= 0;
        LO <= 0;
        isbusy <= 0;
        MD_Tnew <= 0;
    end
    else if (M_cp0_req) begin
        // none
    end
    else if (start != 0) begin
        case (start) // 乘法5个clk,除法10个clk
            1:begin
                cn <= 0;
                isbusy <= 1;
                MD_Tnew <= 5;
                storeStart <= start;
                src1 <= E_rd1;
                src2 <= E_rd2; // 趁着E指令还没只因赶紧存下�
                // start = 0; // start 不需要主动赋值为0,下个上升沿到来的时候会阻塞,这时候会自动对E级指令进行清空从而自动将start清空
            end
            2:begin
                cn <= 0;
                isbusy <= 1;
                MD_Tnew <= 5;
                storeStart <= start;
                src1 <= E_rd1;
                src2 <= E_rd2;
            end
            3:begin
                cn <= 0;
                isbusy <= 1;
                MD_Tnew <= 10;
                storeStart <= start;
                src1 <= E_rd1;
                src2 <= E_rd2;
            end
            4:begin
                cn <= 0;
                isbusy <= 1;
                MD_Tnew <= 10;
                storeStart <= start;
                src1 <= E_rd1;
                src2 <= E_rd2;
            end
            7:begin // mthi 写入[rs]至hi寄存�
                // MD_Tnew <= 0;
                // isbusy <= 0; // 下次isbusy再开启的时候会给storeStart赋值的,因此此处不用清空storeStart
                HI <= E_rd1;
            end
            8:begin // mtlo
                // MD_Tnew <= 0;
                /// isbusy <= 0; // E级是mtlo时直接向lo写入并关掉isbusy,乘除指令没机会再向lo写入了
                LO <= E_rd1;
            end
            default:begin // 读hi,lo指令不会对内部寄存器进行任何修改
                //none
            end
        endcase
    end
    else if (isbusy) begin
        case (storeStart)
            1: begin // 符号�
                if (cn < 4) begin
                    MD_Tnew <= MD_Tnew - 1;
                    cn <= cn + 1;
                end // cn == 4 , MD_Tnew == 0 MD_Tnew变为0后,再来一个上升沿,将会把HI、LO写入
                else if (cn == 4) begin // isbusy置高后的第五个clk执行这里,执行这里时MD_Tnew应该是0
                    {HI,LO} <= $signed({{32{src1[31]}},src1[31:0]}) * $signed({{32{src2[31]}},src2[31:0]});
                    isbusy <= 0;
                    cn <= 0;
                    MD_Tnew <= 0;
                end
                else begin
                    //none
                end
            end
            2: begin // 无符号乘
                if (cn < 4) begin
                    MD_Tnew <= MD_Tnew - 1;
                    cn <= cn + 1;
                end
                else if (cn == 4) begin
                    {HI,LO} <= {32'h0,src1[31:0]} * {32'h0,src2[31:0]};
                    isbusy <= 0;
                    cn <= 0;
                    MD_Tnew <= 0;
                end
                else begin
                    //none
                end
            end
            3: begin // 符号�
                if (cn < 9) begin
                    MD_Tnew <= MD_Tnew - 1;
                    cn <= cn + 1;
                end
                else if (cn == 9) begin
                    HI <= $signed(src1) % $signed(src2); // 高位是余�
                    LO <= $signed(src1) / $signed(src2);// 低位是商
                    isbusy <= 0;
                    cn <= 0;
                    MD_Tnew <= 0;
                end
                else begin
                    //none
                end
            end
            4: begin // 无符号除
                if (cn < 9) begin
                    MD_Tnew <= MD_Tnew - 1;
                    cn <= cn + 1;
                end
                else if (cn == 9) begin
                    HI <= src1 % src2; // 高位是余�
                    LO <= src1 / src2;  // 低位是商
                    isbusy <= 0;
                    cn <= 0;
                    MD_Tnew <= 0;
                end
                else begin
                    //none
                end
            end
        endcase
    end
end

endmodule