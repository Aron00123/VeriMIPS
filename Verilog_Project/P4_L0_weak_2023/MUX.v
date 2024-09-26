`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:49:08 11/04/2023 
// Design Name: 
// Module Name:    MUX 
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
module mux32Bit_2 (
    input [31:0] mux32b2Src1,
    input [31:0] mux32b2Src2,
    input sel32bit2,
    output [31:0] mux32b2Result
);

    reg [31:0] mux32b2_tmp;

    always @(*) begin
        case (sel32bit2)
            0: mux32b2_tmp = mux32b2Src1;
            1: mux32b2_tmp = mux32b2Src2;
        endcase
    end

    assign mux32b2Result = mux32b2_tmp;

endmodule

module mux5Bit_3 (
    input  [4:0] mux5b3Src1,
    input  [4:0] mux5b3Src2,
    input  [4:0] mux5b3Src3,
    input  [1:0] sel5bit3,
    output [4:0] mux5b3Result
);

    reg [4:0] mux5b3_tmp;

    always @(*) begin
        case (sel5bit3)
            0: mux5b3_tmp = mux5b3Src1;
            1: mux5b3_tmp = mux5b3Src2;
            2: mux5b3_tmp = mux5b3Src3;
        endcase
    end

    assign mux5b3Result = mux5b3_tmp;

endmodule

module mux32Bit_3 (
    input  [31:0] mux32b3Src1,
    input  [31:0] mux32b3Src2,
    input  [31:0] mux32b3Src3,
    input  [ 1:0] sel32bit3,
    output [31:0] mux32b3Result
);

    reg [31:0] mux32b3_tmp;

    always @(*) begin
        case (sel32bit3)
            0: mux32b3_tmp = mux32b3Src1;
            1: mux32b3_tmp = mux32b3Src2;
            2: mux32b3_tmp = mux32b3Src3;
        endcase
    end

    assign mux32b3Result = mux32b3_tmp;

endmodule
