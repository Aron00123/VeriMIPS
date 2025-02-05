`timescale 1ns / 1ps

module W_REG (
    input clk,
    input reset,
    input [31:0] M_PC,
    input [31:0] M_inStr,
    input [31:0] M_PC8,
    input [4:0] M_writeReg_NUM,
    input [31:0] M_dataOUT,
    input [31:0] M_aluResult,
    output [31:0] W_PC,
    output [31:0] W_inStr,
    output [31:0] W_PC8,
    output [4:0] W_writeReg_NUM,
    output [31:0] W_dataOUT,
    output [31:0] W_aluResult
);

    reg [31:0] temp_PC, temp_inStr, temp_PC8, temp_dataOUT, temp_aluResult;
    reg [4:0] temp_writeReg_NUM;

    always @(posedge clk) begin
        if (reset) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_dataOUT <= 0;
            temp_aluResult <= 0;
        end else begin
            temp_PC <= M_PC;
            temp_inStr <= M_inStr;
            temp_PC8 <= M_PC8;
            temp_writeReg_NUM <= M_writeReg_NUM;
            temp_dataOUT <= M_dataOUT;
            temp_aluResult <= M_aluResult;
        end
    end

    assign W_PC = temp_PC;
    assign W_inStr = temp_inStr;
    assign W_PC8 = temp_PC8;
    assign W_writeReg_NUM = temp_writeReg_NUM;
    assign W_dataOUT = temp_dataOUT;
    assign W_aluResult = temp_aluResult;


endmodule
