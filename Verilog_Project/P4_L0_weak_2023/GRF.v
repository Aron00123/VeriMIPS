`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:04 11/02/2023 
// Design Name: 
// Module Name:    GRF 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module GRF (
    input [31:0] PC,
    input clk,
    input reset,
    input regWrite,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
);

    reg [31:0] register[31:0];
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
            if (regWrite) begin
                if (A3 != 0) begin
                    $display("@%h: $%d <= %h", PC, A3, WD);
                    register[A3] <= WD;
                end
            end
        end
    end

    assign RD1 = register[A1];
    assign RD2 = register[A2];

endmodule
