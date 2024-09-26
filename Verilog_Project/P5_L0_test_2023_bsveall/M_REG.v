`timescale 1ns / 1ps

module M_REG (
    input clk,
    input reset,
    input [31:0] E_PC,
    input [31:0] E_inStr,
    input [31:0] E_PC8,
    input [4:0] E_writeReg_NUM,
    input [31:0] E_aluResult,
    input [31:0] E_ALU_src2_temp,
    output [31:0] M_PC,
    output [31:0] M_inStr,
    output [31:0] M_PC8,
    output [4:0] M_writeReg_NUM,
    output [31:0] M_aluResult,
    output [31:0] M_ALU_src2_temp
);

    reg [31:0] temp_PC, temp_inStr, temp_PC8, temp_aluResult, temp_ALU_src2_temp;
    reg [4:0] temp_writeReg_NUM;

    always @(posedge clk) begin
        if (reset) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_aluResult <= 0;
            temp_ALU_src2_temp <= 0;
        end else begin
            temp_PC <= E_PC;
            temp_inStr <= E_inStr;
            temp_PC8 <= E_PC8;
            temp_writeReg_NUM <= E_writeReg_NUM;
            temp_aluResult <= E_aluResult;
            temp_ALU_src2_temp <= E_ALU_src2_temp;
        end
    end

    assign M_PC = temp_PC;
    assign M_inStr = temp_inStr;
    assign M_PC8 = temp_PC8;
    assign M_writeReg_NUM = temp_writeReg_NUM;
    assign M_aluResult = temp_aluResult;
    assign M_ALU_src2_temp = temp_ALU_src2_temp;


endmodule
