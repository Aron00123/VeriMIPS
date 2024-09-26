`timescale 1ns / 1ps

module GRF (
    input [31:0] PC,
    input clk,
    input reset,
    input W_writeReg_EN,
    input [4:0] GRF_A1,
    input [4:0] GRF_A2,
    input [4:0] GRF_A3,
    input [31:0] GRF_WD,
    output [31:0] GRF_RD1,
    output [31:0] GRF_RD2
);

    reg [31:0] register[31:0];  // registers
    integer i;

    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            register[i] <= 0;
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                register[i] <= 0;
            end
        end else begin
            if (W_writeReg_EN) begin
                if (GRF_A3 != 0) begin
                    register[GRF_A3] <= GRF_WD;
                end
            end
        end
    end

    assign GRF_RD1 = (GRF_A3 && W_writeReg_EN && GRF_A3 == GRF_A1) ? GRF_WD : register[GRF_A1];
    assign GRF_RD2 = (GRF_A3 && W_writeReg_EN && GRF_A3 == GRF_A2) ? GRF_WD : register[GRF_A2];


endmodule
