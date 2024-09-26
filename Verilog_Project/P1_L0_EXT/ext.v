`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:10:06 10/12/2023 
// Design Name: 
// Module Name:    ext 
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
module ext (
    input  [15:0] imm,
    input  [ 1:0] EOp,
    output [31:0] ext
);
    reg [31:0] O1;
    always @(*) begin
        case (EOp)
            2'b00: O1 = {{16{imm[15]}}, imm[15:0]};
            2'b01: O1 = {{16{1'b0}}, imm[15:0]};
            2'b10: O1 = {imm[15:0], {16{1'b0}}};
            2'b11: O1 = {{16{imm[15]}}, imm[15:0]} << 2;
        endcase
    end

    assign ext = O1;


endmodule
