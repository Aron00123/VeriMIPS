`include "InStrType.v"
`timescale 1ns / 1ps

module D_REG (
    input intReq,
    input clk,
    input reset,
    input D_REG_STALL,  // stop the pipeline
    input F_isBD,
    input [4:0] F_excCode,
    input [31:0] F_PC,
    input [31:0] F_inStr,
    output D_isBD,
    output [4:0] D_excCode,
    output [31:0] D_PC,
    output [31:0] D_inStr
);

    reg [31:0] temp_PC, temp_inStr;
    reg [4:0] temp_excCode;
    reg temp_isBD;

    always @(posedge clk) begin
        if (reset) begin
            temp_PC <= 0;
            temp_inStr <= 0;
            temp_excCode <= 0;
            temp_isBD <= 0;
        end else if (intReq) begin
            temp_PC <= 32'h0000_4180;
            temp_inStr <= 0;
            temp_excCode <= 0;
            temp_isBD <= 0;
        end else if (!D_REG_STALL) begin
            temp_PC <= F_PC;
            temp_inStr <= F_inStr;
            temp_excCode <= F_excCode;
            temp_isBD <= F_isBD;
        end else;
    end

    assign D_PC = temp_PC;
    assign D_inStr = temp_inStr;
    assign D_excCode = temp_excCode;
    assign D_isBD = temp_isBD;


endmodule
