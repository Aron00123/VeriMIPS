`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:28:47 10/12/2023 
// Design Name: 
// Module Name:    gray 
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
module gray (
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
);

    always @(posedge Clk) begin
        if (Reset) begin
            Output   <= 3'b0;
            Overflow <= 1'b0;
        end else if (En) begin
            if (Output == 3'b100) begin
                Overflow <= 1;
                Output   <= 0;
            end else begin
                case (Output)
                    3'b000: Output <= 3'b001;
                    3'b001: Output <= 3'b011;
                    3'b011: Output <= 3'b010;
                    3'b010: Output <= 3'b110;
                    3'b110: Output <= 3'b111;
                    3'b111: Output <= 3'b101;
                    3'b101: Output <= 3'b100;
                endcase
            end
        end
    end


endmodule
