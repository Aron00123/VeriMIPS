`include "instr_def_h.v"
`include "cpuex_def_h.v"
module E_Reg(
    input intReq,
    input clk,
    input reset,
    input clr,
    input [31:0] D_instr,
    input [31:0] D_pc,
    input [4:0] D_writeReg,
    input [31:0] D_rd1,
    input [31:0] D_rd2,
    input [31:0] D_15to0immExtender,
    output [31:0] E_instr,
    output [31:0] E_pc,
    output [4:0] E_writeReg,
    output [31:0] E_rd1,
    output [31:0] E_rd2,
    output [31:0] E_15to0immExtender,

    input [4:0] D_realExCode,
    output [4:0] E_exCode0,

    input D_isBD,
    output E_isBD

);
    // define temp used to pass value
    reg [31:0] temp_instr,temp_pc,temp_rd1,temp_rd2,temp_15to0immExtender;
    reg [4:0] temp_writeReg,temp_exCode;
    reg temp_isBD;
	 // define temp used to pass value

    assign E_instr = temp_instr;
    assign E_pc = temp_pc;
    assign E_writeReg = temp_writeReg;
    assign E_rd1 = temp_rd1;
    assign E_rd2 = temp_rd2;
    assign E_15to0immExtender = temp_15to0immExtender;
    assign E_exCode0 = temp_exCode;
    assign E_isBD = temp_isBD;

    always @(posedge clk) begin
        if(reset) begin // reset全清空,intReq指定pc,clr指定pc/BD
            temp_instr <= 0;
            temp_pc <= 0;
            temp_writeReg <= 0;
            temp_rd1 <= 0;
            temp_rd2 <= 0;
            temp_15to0immExtender <= 0;
            temp_exCode <= 0;
            temp_isBD <= 0;
        end
        else if (intReq) begin // 中断来了,则pc换为4180
            temp_instr <= 0;
            temp_pc <= 32'h0000_4180;
            temp_writeReg <= 0;
            temp_rd1 <= 0;
            temp_rd2 <= 0;
            temp_15to0immExtender <= 0;
            temp_exCode <= 0;
            temp_isBD <= 0;
        end
        else if (clr) begin
            temp_instr <= 0;
            temp_pc <= D_pc;
            temp_writeReg <= 0;
            temp_rd1 <= 0;
            temp_rd2 <= 0;
            temp_15to0immExtender <= 0;
            temp_exCode <= 0;
            temp_isBD <= D_isBD;
        end
        else begin
            temp_instr <= D_instr;
            temp_pc <= D_pc;
            temp_writeReg <= D_writeReg;
            temp_rd1 <= D_rd1;
            temp_rd2 <= D_rd2;
            temp_15to0immExtender <= D_15to0immExtender;
            temp_exCode <= D_realExCode;
            temp_isBD <= D_isBD;
        end
    end

endmodule