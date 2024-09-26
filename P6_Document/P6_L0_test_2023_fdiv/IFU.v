`timescale 1ns / 1ps

module IFU (
    input clk,
    input reset,
    input IFU_STALL,
    input [31:0] nextPC,
    input [31:0] F_inStr_IM,
    output [31:0] F_PC,
    output [31:0] F_inStr,
    output [31:0] PC_IM
);

    reg [31:0] F_PC_reg;

    initial begin
        F_PC_reg <= 32'h00003000;
    end

    always @(posedge clk) begin
        if (reset) begin
            F_PC_reg <= 32'h00003000;
        end else begin
            if (!IFU_STALL) begin
                F_PC_reg <= nextPC;
            end
        end
    end

    assign PC_IM = F_PC_reg;
    assign F_PC = F_PC_reg;
    assign F_inStr = F_inStr_IM;


endmodule
