`include "InStrType.v"
`timescale 1ns / 1ps

// Rtype
`define RTYPE 6'b000000
`define ADD 6'b100000
`define SUB 6'b100010
`define JR 6'b001000
`define AND 6'b100100
`define OR 6'b100101
`define SLT 6'b101010
`define SLTU 6'b101011
`define MULT 6'b011000
`define MULTU 6'b011001
`define DIV 6'b011010
`define DIVU 6'b011011
`define MFHI 6'b010000
`define MFLO 6'b010010
`define MTHI 6'b010001
`define MTLO 6'b010011
// else opcode-only
`define ORI 6'b001101
`define LW 6'b100011
`define LH 6'b100001
`define LB 6'b100000
`define SW 6'b101011
`define SH 6'b101001
`define SB 6'b101000
`define BEQ 6'b000100
`define BNE 6'b000101
`define LUI 6'b001111
`define JAL 6'b000011
`define ADDI 6'b001000
`define ANDI 6'b001100

module Controller (
    input [31:0] inStr,
    output [9:0] inStrType,
    output [1:0] regDst,
    output aluSrC,
    output writeMem_EN,
    output [1:0] memToReg,
    output writeReg_EN,
    output [2:0] aluOp,
    output [2:0] mudiOp,
    output [1:0] extOp,
    output MUDI_sel,
    output ALU_or_MUDI,
    output isStart,
    output [1:0] D_TuseRs,
    output [1:0] D_TuseRt,
    output [1:0] E_Tnew,
    output [1:0] M_Tnew
);

    wire [5:0] opcode, funct;
    assign opcode = inStr[31:26];
    assign funct  = inStr[5:0];

    wire rType, add, sub, jr, And, Or, slt, sltu, mult, multu, div, divu, mfhi, mflo, mthi, mtlo,
            ori, lw, lh, lb, sw, sh, sb, beq, bne, lui, jal, addi, andi, nop;
    assign nop = (opcode == 6'b000000) & (funct == 6'b000000);
    assign rType = (opcode == `RTYPE);
    assign add = rType & (funct == `ADD);
    assign sub = rType & (funct == `SUB);
    assign jr = rType & (funct == `JR);
    assign And = rType & (funct == `AND);
    assign Or = rType & (funct == `OR);
    assign slt = rType & (funct == `SLT);
    assign sltu = rType & (funct == `SLTU);
    assign mult = rType & (funct == `MULT);
    assign multu = rType & (funct == `MULTU);
    assign div = rType & (funct == `DIV);
    assign divu = rType & (funct == `DIVU);
    assign mfhi = rType & (funct == `MFHI);
    assign mflo = rType & (funct == `MFLO);
    assign mthi = rType & (funct == `MTHI);
    assign mtlo = rType & (funct == `MTLO);
    assign ori = opcode == `ORI;
    assign lw = opcode == `LW;
    assign lh = opcode == `LH;
    assign lb = opcode == `LB;
    assign sw = opcode == `SW;
    assign sh = opcode == `SH;
    assign sb = opcode == `SB;
    assign beq = opcode == `BEQ;
    assign bne = opcode == `BNE;
    assign lui = opcode == `LUI;
    assign jal = opcode == `JAL;
    assign addi = opcode == `ADDI;
    assign andi = opcode == `ANDI;

    // inStrType
    assign inStrType = nop ? `nop : add ? `add : sub ? `sub : jr ? `jr : 
                        And ? `And : Or ? `Or : slt ? `slt : sltu ? `sltu :
                        mult ? `mult : multu ? `multu : div ? `div : divu ? `divu :
                        mfhi ? `mfhi : mflo ? `mflo : mthi ? `mthi : mtlo ? `mtlo : ori ? `ori : 
                        lw ? `lw : lh ? `lh : lb ? `lb : sw ? `sw : sh ? `sh : sb ? `sb :
                        beq ? `beq : bne ? `bne : lui ? `lui : jal ? `jal : addi ? `addi : andi ? `andi : `nop;

    // control
    assign regDst[0] = add | sub | And | Or | slt | sltu | mfhi | mflo;  // 0: rt, 1: rd, 2: ra;
    assign regDst[1] = jal;
    assign aluSrC = ori | lw | lh | lb | sw | sh | sb | lui | addi | andi;  // 0: rt, 1: imm;
    assign writeMem_EN = sw | sh | sb;  // 0: no, 1: yes;
    assign memToReg[0] = lw | lh | lb;  // 0: alu, 1: mem, 2: PC + 8
    assign memToReg[1] = jal;
    assign writeReg_EN = add | sub | And | Or | slt | sltu | mfhi | mflo | ori | lw | lh | lb | lui | jal | addi | andi;  // 0: no, 1: yes;
    assign aluOp[0] = add | slt | lui | lw | lh | lb | sw | sh | sb | lui | addi;  // 000 -, 001 +, 010 |, 011 lui, 100 &, 101 slt, 110 sltu
    assign aluOp[1] = Or | sltu | ori | lui;
    assign aluOp[2] = And | slt | sltu | andi;
    assign mudiOp[0] = multu | divu | mtlo;  // 00 mult, 01 multu, 10 div, 11 divu, 100 mthi, 101 mtlo
    assign mudiOp[1] = div | divu;
    assign mudiOp[2] = mthi | mtlo;
    assign extOp[0] = lw | lh | lb | sw | sh | sb | addi;  // 0: zero ext, 1: sign ext;
    assign extOp[1] = 0;
    assign MUDI_sel = mfhi;  // 0 LO, 1 HI
    assign ALU_or_MUDI = mfhi | mflo;  // 0 ALU, 1 MUDI
    assign isStart = mult | multu | div | divu | mthi | mtlo;


    // STOP
    assign D_TuseRs[0] = nop | add | sub | And | Or | slt | sltu | mult | multu | 
                         div | divu | mfhi | mflo | mthi | mtlo | ori | lw | lh | 
                         lb | sw | sh | sb | lui | jal | addi | andi;
    assign D_TuseRs[1] = nop | mfhi | mflo | lui | jal;
    assign D_TuseRt[0] = nop | add | sub | jr | And | Or | slt | sltu | mult | multu | 
                         div | divu | mfhi | mflo | mthi | mtlo | ori | lw | lh | 
                         lb | lui | jal | addi | andi;
    assign D_TuseRt[1] = nop | jr | mfhi | mflo | mthi | mtlo | ori | lw | lh | lb | 
                         sw | sh | sb | lui | jal | addi | andi;
    assign E_Tnew[0] = add | sub | And | Or | slt | sltu | mfhi | mflo | ori | lui | addi | andi;
    assign E_Tnew[1] = lw | lh | lb;
    assign M_Tnew[0] = lw | lh | lb;
    assign M_Tnew[1] = 0;


endmodule
