`timescale 1ns / 1ps

module IFU (
    input [31:0] nextPC,
    input clk,
    input reset,
    input pcWE,
    output [31:0] inStr,
    output [31:0] PC
);

    reg [31:0] romRegister[0:4095];
    reg [31:0] inStr_reg;
    reg [31:0] realAddr;
    reg [31:0] PC_reg;

    initial begin
        PC_reg <= 32'h00003000;
        $readmemh("code.txt", romRegister);
    end

    always @(*) begin
        realAddr  = PC_reg - 32'h00003000;
        inStr_reg = romRegister[realAddr[31:2]];
    end

    always @(posedge clk) begin
        if (reset) begin
            PC_reg <= 32'h00003000;
        end else begin
            if (pcWE) begin
                PC_reg <= nextPC;
            end
        end
    end

    assign inStr = inStr_reg;
    assign PC = PC_reg;

endmodule
