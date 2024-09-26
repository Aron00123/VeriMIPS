`include "instr_def_h.v"
`include "cpuex_def_h.v"
module D_Reg(
    input intReq,
    input clk,
    input reset,
    input D_en, // 写使�
    input [31:0] F_instr,
    input [31:0] F_pc,
    output [31:0] D_pc,
    output [31:0] D_instr,

    input [4:0] F_exCode,
    output [4:0] D_exCode,

    input F_isBD,
    output D_isBD

);

reg [31:0] temp_pc,temp_instr; // 作为中间变量将输入赋值给输出
reg [4:0] temp_exCode;
reg temp_isBD;

assign D_pc = temp_pc;
assign D_instr = temp_instr;
assign D_exCode = temp_exCode;
assign D_isBD = temp_isBD;
// rs 只有0/1两种取�Tuse放在控制器中的好处便在于不需要重复译�因此采用此种方式
// assign D_TuseRs = () ? 1 :; 

always @(posedge clk) begin
    if (reset) begin
        temp_pc <= 0;
        temp_instr <= 0;
        temp_exCode <= 0;
        temp_isBD <= 0;
    end
    else if (intReq) begin // 中断来了,则pc换为4180
        temp_pc <= 32'h0000_4180;
        temp_instr <= 0; // 中断来的时候清空时变成nop
        temp_exCode <= 0;
        temp_isBD <= 0; // 中断清空流水线的时候
    end
    else if (D_en) begin
        temp_pc <= F_pc;
        temp_instr <= F_instr;
        temp_exCode <= F_exCode;
        temp_isBD <= F_isBD;
    end
    else begin
        // none
    end
end

endmodule