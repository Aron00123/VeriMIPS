`timescale 1ns / 1ps

module E_REG (
    input intReq,
    input clk,
    input reset,
    input E_REG_STALL,  // stop the pipeline
    input D_isBD,
    input D_isBranch,
    input [4:0] D_realExcCode,
    input [31:0] D_PC,
    input [31:0] D_inStr,
    input [31:0] D_PC8,
    input [4:0] D_writeReg_NUM,
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [31:0] D_extResult,
    output E_isBD,
    output E_isBranch,
    output [4:0] E_excCode0,
    output [31:0] E_PC,
    output [31:0] E_inStr,
    output [31:0] E_PC8,
    output [4:0] E_writeReg_NUM,
    output [31:0] E_RD1,
    output [31:0] E_RD2,
    output [31:0] E_extResult
);

    reg [31:0] temp_PC, temp_inStr, temp_PC8, temp_RD1, temp_RD2, temp_extResult, temp_isBranch;
    reg [4:0] temp_writeReg_NUM, temp_realExcCode;
    reg temp_isBD;

    always @(posedge clk) begin
        if (reset) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_RD1 <= 0;
            temp_RD2 <= 0;
            temp_extResult <= 0;
            temp_isBranch <= 0;
            temp_realExcCode <= 0;
            temp_isBD <= 0;
        end else if (intReq) begin
            temp_PC <= 32'h0000_4180;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_RD1 <= 0;
            temp_RD2 <= 0;
            temp_extResult <= 0;
            temp_isBranch <= 0;
            temp_realExcCode <= 0;
            temp_isBD <= 0;
        end else if (E_REG_STALL) begin
            temp_PC <= D_PC;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_RD1 <= 0;
            temp_RD2 <= 0;
            temp_extResult <= 0;
            temp_isBranch <= 0;
            temp_realExcCode <= 0;
            temp_isBD <= D_isBD;
        end else begin
            temp_PC <= D_PC;
            temp_inStr <= D_inStr;
            temp_PC8 <= D_PC8;
            temp_writeReg_NUM <= D_writeReg_NUM;
            temp_RD1 <= D_RD1;
            temp_RD2 <= D_RD2;
            temp_extResult <= D_extResult;
            temp_isBranch <= D_isBranch;
            temp_realExcCode <= D_realExcCode;
            temp_isBD <= D_isBD;
        end
    end

    assign E_PC = temp_PC;
    assign E_inStr = temp_inStr;
    assign E_PC8 = temp_PC8;
    assign E_writeReg_NUM = temp_writeReg_NUM;
    assign E_RD1 = temp_RD1;
    assign E_RD2 = temp_RD2;
    assign E_extResult = temp_extResult;
    assign E_isBranch = temp_isBranch;
    assign E_excCode0 = temp_realExcCode;
    assign E_isBD = temp_isBD;


endmodule
