`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:46 11/02/2023 
// Design Name: 
// Module Name:    NPC 
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
module NPC (
    input [31:0] PC,
    input [31:0] raGPR,
    input equal,
    input [1:0] NPCOp,  // 00 不跳转, 01 beq, 10 jal, 11 jr
    input [25:0] imm,
    output [31:0] PC4,
    output [31:0] nextPC
);

    reg [31:0] nextPC_reg;

    assign nextPC = nextPC_reg;
    assign PC4 = PC + 4;

    always @(*) begin
        case (NPCOp)
            0: nextPC_reg = PC + 4;
            1: nextPC_reg = PC + 4 + {{14{imm[15]}}, {imm[15:0]}, {2'b00}};
            2: nextPC_reg = {{PC[31:28]}, {imm[25:0]}, {2'b00}};
            3: nextPC_reg = raGPR;
        endcase
    end


endmodule
