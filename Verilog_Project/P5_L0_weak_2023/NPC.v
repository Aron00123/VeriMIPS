`include "inStrType.v"
`timescale 1ns / 1ps

module NPC (
    input [31:0] PC,
    input [31:0] raGPR,
    input [1:0] NPCOp,  // 00 不跳转, 01 beq, 10 jal, 11 jr
    input [25:0] imm,
    input isBranch,
    input [9:0] inStrType,
    output [31:0] PC4,
    output [31:0] nextPC
);

    wire isNotSkip;
    reg [31:0] nextPC_reg;

    assign nextPC = nextPC_reg;
    assign PC4 = PC + 4;
    assign isNotSkip = (inStrType != `beq && inStrType != `jal && inStrType != `jr);

    always @(*) begin
        if (isNotSkip || ((inStrType == `beq || inStrType == `bne) && !isBranch)) begin
            nextPC_reg = PC + 8; // 如果不满足条件的话,由于跳转指令pc+4已经进入流水线了,因此要执行pc+8
        end else begin
            case (inStrType)
                `beq: begin
                    nextPC_reg = PC + 4 + {{14{imm[15]}}, {imm[15:0]}, {2'b00}};
                end
                `jr: begin
                    nextPC_reg = raGPR;
                end
                `jal: begin
                    nextPC_reg = {{PC[31:28]}, {imm[25:0]}, {2'b00}};
                end
            endcase
        end
    end


endmodule
