`include "InStrType.v"
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
    input [31:0] inStr,
    output [9:0] inStrType,
    output [1:0] regDst,  // 00 other, 01 add sub, 10 jal
    output aluSrC,  // 0 other, 1 lw sw lb sb ori lui
    output writeMem_EN,
    output [1:0] memToReg,  // 00 other, 01 lw lb, 10 jal
    output writeReg_EN,
    output [2:0] aluOp,  // 000 -, 001 +, 010 |, 011 lui,
    output [1:0] extOp,
    output [1:0] D_TuseRs,  /* 00 beq, jr; 01 add, sub, ori, lw, lb, sw, sb;
                                    11 nop, lui, jal */
    output [1:0] D_TuseRt,  /* 00 beq; 01 add, sub; 10 sw, sb; 
                                    11 nop, lui, jal, ori, lw, lb, jr */
    output [1:0] E_Tnew,  /* 00 nop, sw, sb, beq, jr, jal; 01 add, sub, ori, lui;
                                    10 lw, lb */
    output [1:0] M_Tnew,  /* 00 nop, add, sub, ori, sw, sb, beq, lui, jr, jal;
                                01 lw, lb */
    output isByte
);

    wire [5:0] opcode, funct;
    assign opcode = inStr[31:26];
    assign funct  = inStr[5:0];

    wire rType, nop, add, sub, jr, ori, lw, sw, beq, lui, jal, lb, sb;
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

    // inStrType
    assign inStrType = nop ? `nop : add ? `add : sub ? `sub :
                        jr ? `jr : ori ? `ori : lw ? `lw : sw ? `sw : 
                        beq ? `beq : lui ? `lui : jal ? `jal : 
                        lb ? `lb : sb ? `sb : `nop;

    // control
    assign regDst[0] = add | sub;  // 0: rt, 1: rd, 2: ra;
    assign regDst[1] = jal;
    assign aluSrC = lw | sw | lb | sb | ori | lui;  // 0: rt, 1: imm;
    assign writeMem_EN = sw | sb;  // 0: no, 1: yes;
    assign memToReg[0] = lw | lb;  // 0: alu, 1: mem, 2: PC + 8
    assign memToReg[1] = jal;
    assign writeReg_EN = add | sub | ori | lui | lw | lb | jal;  // 0: no, 1: yes;
    assign aluOp[0] = add | lui | lw | sw | lb | sb;  // 0: -, 1: +, 2: |, 3: lui;
    assign aluOp[1] = ori | lui;
    assign aluOp[2] = 0;
    assign extOp[0] = lw | sw | lb | sb;  // 0: zero ext, 1: sign ext;
    assign extOp[1] = 0;
    assign isByte = lb | sb;

    // STOP
    assign D_TuseRs[0] = add | sub | ori | lw | lb | sw | sb | nop | lui | jal;
    assign D_TuseRs[1] = nop | lui | jal;
    assign D_TuseRt[0] = add | sub | nop | lui | jal | ori | lw | lb | jr;
    assign D_TuseRt[1] = sw | sb | nop | lui | jal | ori | lw | lb | jr;
    assign E_Tnew[0] = add | sub | ori | lui;
    assign E_Tnew[1] = lw | lb;
    assign M_Tnew[0] = lw | lb;
    assign M_Tnew[1] = 0;


endmodule
