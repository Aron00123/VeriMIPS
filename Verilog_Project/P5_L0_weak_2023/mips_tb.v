`timescale 1ns / 1ps


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
        clk   = 1;
        reset = 1;
        #1 reset = 0;

        // Wait 100 ns for global reset to finish
        #100;

        // Add stimulus here

    end
    always #5 clk = ~clk;

endmodule

