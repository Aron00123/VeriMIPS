`timescale 1ns / 1ps

module E_REG (
    input clk,
    input reset,
    input E_REG_STALL,  // stop the pipeline
    input [31:0] D_PC,
    input [31:0] D_inStr,
    input [31:0] D_PC8,
    input [4:0] D_writeReg_NUM,
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [31:0] D_extResult,
    output [31:0] E_PC,
    output [31:0] E_inStr,
    output [31:0] E_PC8,
    output [4:0] E_writeReg_NUM,
    output [31:0] E_RD1,
    output [31:0] E_RD2,
    output [31:0] E_extResult
);

    reg [31:0] temp_PC, temp_inStr, temp_PC8, temp_RD1, temp_RD2, temp_extResult;
    reg [4:0] temp_writeReg_NUM;

    always @(posedge clk) begin
        if (reset | E_REG_STALL) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_PC8 <= 0;
            temp_writeReg_NUM <= 0;
            temp_RD1 <= 0;
            temp_RD2 <= 0;
            temp_extResult <= 0;
        end else begin
            temp_PC <= D_PC;
            temp_inStr <= D_inStr;
            temp_PC8 <= D_PC8;
            temp_writeReg_NUM <= D_writeReg_NUM;
            temp_RD1 <= D_RD1;
            temp_RD2 <= D_RD2;
            temp_extResult <= D_extResult;
        end
    end

    assign E_PC = temp_PC;
    assign E_inStr = temp_inStr;
    assign E_PC8 = temp_PC8;
    assign E_writeReg_NUM = temp_writeReg_NUM;
    assign E_RD1 = temp_RD1;
    assign E_RD2 = temp_RD2;
    assign E_extResult = temp_extResult;


endmodule
