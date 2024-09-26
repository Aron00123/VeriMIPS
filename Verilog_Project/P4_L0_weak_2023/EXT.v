`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:55 11/02/2023 
// Design Name: 
// Module Name:    EXT 
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
module EXT (
    input [15:0] imm,
    input extOp,  // 0 0_extend, 1 sign_extend
    output [31:0] extResult
);

    reg [31:0] extResult_reg;
    assign extResult = extResult_reg;

    always @(*) begin
        case (extOp)
            0: extResult_reg = {{16{0}}, imm};
            1: extResult_reg = {{16{imm[15]}}, imm};
            default: extResult_reg = 0;
        endcase
    end

endmodule
