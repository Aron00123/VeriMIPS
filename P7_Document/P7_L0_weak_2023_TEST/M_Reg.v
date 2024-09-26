`include "instr_def_h.v"
`include "cpuex_def_h.v"
module M_Reg(
    input intReq,
    input clk,
    input reset,
    input [31:0] E_instr,
    input [31:0] E_pc,
    input [4:0] E_writeReg,
    input [31:0] E_aluResult,
    input [31:0] E_rd2,
    input [31:0] E_valueMDwrite,
    output [31:0] M_instr,
    output [31:0] M_pc,
    output [4:0] M_writeReg,
    output [31:0] M_aluResult,
    output [31:0] M_rd2,
    output [31:0] M_valueMDwrite,

    input [4:0] E_realExCode,
    output [4:0] M_exCode0,

    input E_isBD,
    output M_isBD

);
    // define temp used to pass value
    reg [31:0] temp_instr,temp_pc,temp_aluResult,temp_rd2,temp_valueMDwrite;
	reg [4:0] temp_writeReg,temp_exCode;
    reg temp_isBD;
    // define temp used to pass value

    assign M_instr = temp_instr;
    assign M_pc = temp_pc;
    assign M_writeReg = temp_writeReg;
    assign M_aluResult = temp_aluResult;
    assign M_rd2 = temp_rd2;
    assign M_valueMDwrite = temp_valueMDwrite;
    assign M_exCode0 = temp_exCode;
    assign M_isBD = temp_isBD;

    always @(posedge clk) begin
        if(reset) begin 
            temp_instr <= 0;
            temp_pc <= 0;
            temp_writeReg <= 0;
            temp_aluResult <= 0;
            temp_rd2 <= 0;
            temp_valueMDwrite <= 0;
            temp_exCode <= 0;
            temp_isBD <= 0;
        end
        else if(intReq) begin
            temp_instr <= 0;
            temp_pc <= 32'h0000_4180;
            temp_writeReg <= 0;
            temp_aluResult <= 0;
            temp_rd2 <= 0;
            temp_valueMDwrite <= 0;
            temp_exCode <= 0;
            temp_isBD <= 0;
        end
        else begin
            temp_instr <= E_instr;
            temp_pc <= E_pc;
            temp_writeReg <= E_writeReg;
            temp_aluResult <= E_aluResult;
            temp_rd2 <= E_rd2;
            temp_valueMDwrite <= E_valueMDwrite;
            temp_exCode <= E_realExCode;
            temp_isBD <= E_isBD;
        end
    end
endmodule