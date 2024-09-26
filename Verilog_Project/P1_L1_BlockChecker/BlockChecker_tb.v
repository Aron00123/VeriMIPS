`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:57:44 10/13/2023
// Design Name:   BlockChecker
// Module Name:   C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P1_L1_BlockChecker/BlockChecker_tb.v
// Project Name:  P1_L1_BlockChecker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BlockChecker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BlockChecker_tb;


    // Inputs
    reg clk;
    reg reset;
    reg [7:0] in;

    // Outputs
    wire result;

    // Instantiate the Unit Under Test (UUT)
    BlockChecker uut (
        .clk(clk),
        .reset(reset),
        .in(in),
        .result(result)
    );

    always #50 clk = ~clk;
    initial begin
        // Initialize Inputs
        clk = 0;
        reset = 0;
        in = 0;

        // Wait 100 ns for global reset to finish
        #100;
        reset = 1;
        #100 reset = 0;
        #100 in = "a";
        #100 in = "b";
        #100 in = "E";
        #100 in = "G";
        #100 in = "I";
        #100 in = "N";
        #100 in = " ";
        #100 in = "b";
        #100 in = "E";
        #100 in = "G";
        #100 in = "I";
        #100 in = "N";
        #100 in = " ";
        #100 in = "b";
        #100 in = "E";
        #100 in = "G";
        #100 in = "I";
        #100 in = "N";
        #100 in = "E";
        #100 in = " ";
        #100 in = "a";
        #100 in = "E";
        #100 in = "N";
        #100 in = "D";
        #100 in = " ";
        #100 in = "e";
        #100 in = "n";
        #100 in = "d";
        #100 in = " ";
        #100 in = " ";
        #100 in = "E";
        #100 in = "n";
        #100 in = "d";
        #100 in = "a";
        #100 in = " ";

        // Add stimulus here

    end

endmodule
