`timescale 1ns / 1ps

module D_REG (
    input clk,
    input reset,
    input D_regWE,  // write enable
    input [31:0] F_inStr,
    input [31:0] F_PC,
    output [31:0] D_PC,
    output [31:0] D_inStr
);

    reg [31:0] temp_PC, temp_inStr;  // 中间变量

    always @(posedge clk) begin
        if (reset) begin
            temp_PC <= 0;
            temp_inStr <= 0;
        end else if (D_regWE) begin
            temp_PC <= F_PC;
            temp_inStr <= F_inStr;
        end else;
    end

    assign D_PC = temp_PC;
    assign D_inStr = temp_inStr;


endmodule
