`include "inStrType.v"
`timescale 1ns / 1ps

// Rtype
`define RTYPE 6'b000000
`define ADD 6'b100000
`define SUB 6'b100010
`define JR 6'b001000
// else opcode-only
`define ORI 6'b001101
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define LUI 6'b001111
`define JAL 6'b000011
`define LB 6'b100000
`define SB 6'b101000

module Controller (
    input [5:0] funct,
    input [5:0] opcode,
    input isEqual,
    output [1:0] memToReg,  // 00 other, 01 lw lb, 10 jal
    output memWrite,  // enable
    output [9:0] inStrType,
    output [1:0] regDst,  // 00 other, 01 add sub, 10 jal
    output [2:0] aluOp,  // 000 -, 001 +, 010 |, 011 lui, 
    output aluSrc,
    output regWrite,  // enable
    output extOp,
    output isByte,
    output [1:0] NPCOp,  // 00 others, 01 beq, 10 jal, 11 jr
    output [1:0] D_TuseRs,  /* 00 beq, jr; 01 add, sub, ori, lw, lb, sw, sb;
                                    11 nop, lui, jal */
    output [1:0] D_TuseRt,  /* 00 beq; 01 add, sub; 10 sw, sb; 
                                    11 nop, lui, jal, ori, lw, lb, jr */
    output [1:0] E_Tnew,  /* 00 nop, sw, sb, beq, jr; 01 add, sub, ori, lui;
                                    10 lw, lb, jal */
    output [1:0] M_Tnew  /* 00 nop, add, sub, ori, sw, sb, beq, lui, jr;
                                01 jal, lw, lb */
);

    wire rType, nop, add, sub, jr, ori, lw, sw, beq, lui, jal;
    assign nop = (opcode == 6'b000000) & (funct == 6'b000000);
    assign rType = (opcode == `RTYPE);
    assign add = rType & (funct == `ADD);
    assign sub = rType & (funct == `SUB);
    assign jr = rType & (funct == `JR);
    assign ori = opcode == `ORI;
    assign lw = opcode == `LW;
    assign sw = opcode == `SW;
    assign beq = opcode == `BEQ;
    assign lui = opcode == `LUI;
    assign jal = opcode == `JAL;
    assign lb = opcode == `LB;
    assign sb = opcode == `SB;

    assign memToReg[0] = lw | lb;
    assign memToReg[1] = jal;
    assign memWrite = sw | sb;
    assign regDst[0] = add | sub;
    assign regDst[1] = jal;
    assign aluOp[0] = add | lui | lw | sw | lb | sb;
    assign aluOp[1] = ori | lui;
    assign aluOp[2] = 0;
    assign aluSrc = lw | sw | lui | ori | lb | sb;
    assign regWrite = add | sub | ori | lw | lb | lui | jal;
    assign extOp = lw | sw | lb | sb | beq;
    assign isByte = lb | sb;
    assign NPCOp[0] = (beq & isEqual) | jr;
    assign NPCOp[1] = jal | jr;

    // transition
    assign D_TuseRs[0] = add | sub | ori | lw | lb | sw | sb | nop | lui | jal;
    assign D_TuseRs[1] = nop | lui | jal;
    assign D_TuseRt[0] = add | sub | nop | lui | jal | ori | lw | lb | jr;
    assign D_TuseRt[1] = sw | sb | nop | lui | jal | ori | lw | lb | jr;
    assign E_Tnew[0] = add | sub | ori | lui;
    assign E_Tnew[1] = lw | lb | jal;
    assign M_Tnew[0] = jal | lw | lb;
    assign M_Tnew[1] = 0;


    // inStrType
    assign inStrType = nop ? `nop : add ? `add : sub ? `sub :
                         jr ? `jr : ori ? `ori : lw ? `lw : sw ? `sw : 
                         beq ? `beq : lui ? `lui : jal ? `jal : 
                         lb ? `lb : sb ? `sb : `nop;
endmodule
