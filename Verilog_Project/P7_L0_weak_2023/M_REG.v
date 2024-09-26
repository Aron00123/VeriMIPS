`timescale 1ns / 1ps

module M_REG (
    input intReq,
    input clk,
    input reset,
    input E_isBranch,
    input E_isBD,
    input [4:0] E_writeReg_NUM,
    input [4:0] E_realExcCode,
    input [31:0] E_PC,
    input [31:0] E_inStr,
    input [31:0] E_PC8,
    input [31:0] E_aluResult,
    input [31:0] E_ALU_src2_temp,
    output M_isBranch,
    output M_isBD,
    output [4:0] M_writeReg_NUM,
    output [4:0] M_excCode0,
    output [31:0] M_PC,
    output [31:0] M_inStr,
    output [31:0] M_PC8,
    output [31:0] M_aluResult,
    output [31:0] M_ALU_src2_temp
);

    reg [31:0] temp_PC, temp_inStr, temp_PC8, temp_aluResult, temp_ALU_src2_temp, temp_isBranch;
    reg [4:0] temp_writeReg_NUM, temp_realExcCode;
    reg temp_isBD;

    always @(posedge clk) begin
        if (reset) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_aluResult <= 0;
            temp_ALU_src2_temp <= 0;
            temp_isBranch <= 0;
            temp_realExcCode <= 0;
            temp_isBD <= 0;
        end else if (intReq) begin
            temp_PC <= 32'h0000_4180;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_aluResult <= 0;
            temp_ALU_src2_temp <= 0;
            temp_isBranch <= 0;
            temp_realExcCode <= 0;
            temp_isBD <= 0;
        end else begin
            temp_PC <= E_PC;
            temp_inStr <= E_inStr;
            temp_PC8 <= E_PC8;
            temp_writeReg_NUM <= E_writeReg_NUM;
            temp_aluResult <= E_aluResult;
            temp_ALU_src2_temp <= E_ALU_src2_temp;
            temp_isBranch <= E_isBranch;
            temp_realExcCode <= E_realExcCode;
            temp_isBD <= E_isBD;
        end
    end

    assign M_PC = temp_PC;
    assign M_inStr = temp_inStr;
    assign M_PC8 = temp_PC8;
    assign M_writeReg_NUM = temp_writeReg_NUM;
    assign M_aluResult = temp_aluResult;
    assign M_ALU_src2_temp = temp_ALU_src2_temp;
    assign M_isBranch = temp_isBranch;
    assign M_excCode0 = temp_realExcCode;
    assign M_isBD = temp_isBD;


endmodule
