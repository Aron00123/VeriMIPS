`include "InStrType.v"
`timescale 1ns / 1ps

module D_REG (
    input clk,
    input reset,
    input D_REG_STALL,  // stop the pipeline
    input [31:0] F_PC,
    input [31:0] F_inStr,
    input D_flush,
    output [31:0] D_PC,
    output [31:0] D_inStr
);

    reg [31:0] temp_PC, temp_inStr;

    always @(posedge clk) begin
        if (reset || (D_flush && !D_REG_STALL)) begin
            temp_PC <= 0;
            temp_inStr <= 0;
        end else if (!D_REG_STALL) begin
            temp_PC <= F_PC;
            temp_inStr <= F_inStr;
        end else;
    end

    assign D_PC = temp_PC;
    assign D_inStr = temp_inStr;


endmodule