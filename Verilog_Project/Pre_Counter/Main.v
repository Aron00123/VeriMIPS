`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:47 09/16/2023 
// Design Name: 
// Module Name:    Main 
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
// code.v
module code (
    input Clk,
    input Reset,
    input Slt,
    input En,
    output reg [63:0] Output0,
    output reg [63:0] Output1
);

    reg [1:0] interCounter = 2'b01;

    always @(posedge Clk) begin
        if (Reset == 1'b1) begin
            // If Reset, Output0 and Output1 should be set zero.
            Output0 <= 64'h0000_0000;
            Output1 <= 64'h0000_0000;
            interCounter <= 2'b01;
        end 
        else if (En == 1'b1) begin
            // If En is valid,
            if (Slt == 1'b0) begin
                // If select counter 0, Output0 increases.
                Output0 <= Output0 + 64'h0000_0001;
                Output1 <= Output1;
            end 
            else begin
                // If select conter 1, interCounter incereases.
                interCounter <= interCounter + 2'b01;
                if (interCounter == 2'b00) begin
                    // If interCounter counts 4, Output1 increases.
                    Output0 <= Output0;
                    Output1 <= Output1 + 64'h0000_0001;
                end 
                else begin
                    // If interCounter doesn't count 4, nothing changes.
                    Output0 <= Output0;
                    Output1 <= Output1;
                end
            end
        end 
        else begin
            // If En is invalid, nothing changes in this cycle.
            Output0 <= Output0;
            Output1 <= Output1;
        end
    end

endmodule

