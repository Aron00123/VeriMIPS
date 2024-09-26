`timescale 1ns / 1ps

module W_REG (
    input intReq,
    input clk,
    input reset,
    input M_isBranch,
    input [4:0] M_writeReg_NUM,
    input [31:0] M_PC,
    input [31:0] M_inStr,
    input [31:0] M_PC8,
    input [31:0] M_dataOUT,
    input [31:0] M_aluResult,
    input [31:0] M_CP0_OUT,
    output W_isBranch,
    output [4:0] W_writeReg_NUM,
    output [31:0] W_PC,
    output [31:0] W_inStr,
    output [31:0] W_PC8,
    output [31:0] W_dataOUT,
    output [31:0] W_aluResult,
    output [31:0] W_CP0_OUT
);

    reg [31:0]
        temp_PC, temp_inStr, temp_PC8, temp_dataOUT, temp_aluResult, temp_isBranch, temp_CP0_OUT;
    reg [4:0] temp_writeReg_NUM;

    always @(posedge clk) begin
        if (reset | intReq) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_dataOUT <= 0;
            temp_aluResult <= 0;
            temp_isBranch <= 0;
            temp_CP0_OUT <= 0;
        end else begin
            temp_PC <= M_PC;
            temp_inStr <= M_inStr;
            temp_PC8 <= M_PC8;
            temp_writeReg_NUM <= M_writeReg_NUM;
            temp_dataOUT <= M_dataOUT;
            temp_aluResult <= M_aluResult;
            temp_isBranch <= M_isBranch;
            temp_CP0_OUT <= M_CP0_OUT;
        end
    end

    assign W_PC = temp_PC;
    assign W_inStr = temp_inStr;
    assign W_PC8 = temp_PC8;
    assign W_writeReg_NUM = temp_writeReg_NUM;
    assign W_dataOUT = temp_dataOUT;
    assign W_aluResult = temp_aluResult;
    assign W_isBranch = temp_isBranch;
    assign W_CP0_OUT = temp_CP0_OUT;


endmodule
