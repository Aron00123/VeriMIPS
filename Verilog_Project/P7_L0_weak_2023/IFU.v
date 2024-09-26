`timescale 1ns / 1ps

module IFU (
    input intReq,
    input clk,
    input reset,
    input IFU_STALL,
    input [31:0] nextPC,
    input [31:0] F_inStr_IM,
    output [31:0] F_PC,
    output [31:0] F_inStr,
    output [31:0] PC_IM,
    output [4:0] F_excCode
);

    reg [31:0] F_PC_reg;

    initial begin
        F_PC_reg <= 32'h00003000;
    end

    always @(posedge clk) begin
        if (reset) begin
            F_PC_reg <= 32'h00003000;
        end else if (intReq) begin
            F_PC_reg <= 32'h0000_4180;
        end else begin
            if (!IFU_STALL) begin
                F_PC_reg <= nextPC;
            end
        end
    end

    assign PC_IM = F_PC_reg;  //
    assign F_PC = F_PC_reg;
    assign F_inStr = F_inStr_IM;
    assign F_excCode = ((F_PC_reg[1:0] == 2'b0) && (F_PC_reg <= 32'h0000_6ffc && F_PC_reg >= 32'h0000_3000)) ? 5'h0 : 5'h4;


endmodule
