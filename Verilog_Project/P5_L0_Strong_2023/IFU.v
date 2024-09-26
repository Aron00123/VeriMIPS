`timescale 1ns / 1ps

module IFU (
    input clk,
    input reset,
    input [31:0] nextPC,
    input IFU_STALL,
    output [31:0] F_PC,
    output [31:0] F_inStr
);

    reg [31:0] romRegister [0:4095];
    reg [31:0] F_PC_reg;
    reg [31:0] F_inStr_reg;
    reg [31:0] realAddr;

    initial begin
        F_PC_reg <= 32'h00003000;
        $readmemh("code.txt", romRegister);
    end

    always @(*) begin
        realAddr = F_PC_reg - 32'h00003000;
        F_inStr_reg = romRegister[realAddr[31:2]];
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

    assign F_PC = F_PC_reg;
    assign F_inStr = F_inStr_reg;


endmodule
