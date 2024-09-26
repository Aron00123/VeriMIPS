`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:10:32 11/04/2023
// Design Name:   mips
// Module Name:   C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P4_L0_weak_2023/mips_tb.v
// Project Name:  P4_L0_weak_2023
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

    // Inputs
    reg clk;
    reg reset;

    // Instantiate the Unit Under Test (UUT)
    mips uut (
        .clk  (clk),
        .reset(reset)
    );

    initial begin
        // Initialize Inputs
        clk   = 0;
        reset = 1;
        #1 reset = 0;

        // Wait 100 ns for global reset to finish
        #100;

        // Add stimulus here

    end
    always #5 clk = ~clk;

endmodule

