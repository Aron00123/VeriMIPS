`include "inStrType.v"
`timescale 1ns / 1ps

module mips (
    input clk,
    input reset
);

    // trash
    wire [1:0] D_laji1,D_laji2,E_laji1,E_laji2,E_laji3,M_laji1,M_laji2,M_laji3,W_laji1,W_laji2,W_laji3,W_laji4; // 接到无用的端口上补个人头

    // F level register
    wire [31:0] F_nextPC, F_PC, F_inStr, F_npcOut, F_nextPC_true;
    wire [9:0] F_inStrType;
    wire F_pcWE;

    // D level register
    wire [31:0] D_PC, D_raGPR, D_inStr, D_PC4, D_extResult, D_RD1, D_RD2, D_RD1_temp, D_RD2_temp;
    wire [9:0] D_inStrType;
    wire [4:0] D_writeReg;
    wire [2:0] D_aluOp;
    wire [1:0] D_NPCOp, D_memToReg, D_regDst, D_TuseRs, D_TuseRt;
    wire D_isBranch, D_regWE, D_isEqual, D_memWrite, D_aluSrc, D_regWrite, D_extOp, D_isByte;

    // E level register
    wire [31:0] E_PC, E_inStr, E_RD1, E_RD2, E_result, E_extResult, E_Src1, E_Src2, E_rightRd1, E_rightRd2;
    wire [9:0] E_inStrType;
    wire [4:0] E_writeReg;
    wire [2:0] E_aluOp;
    wire [1:0] E_memToReg, E_RegDst, E_NPCOp, E_Tnew;
    wire E_clr, E_isEqual, E_memWrite, E_aluSrc, E_regWrite, E_extOp, E_isByte;

    //  M level register
    wire [31:0] M_result, M_PC, M_inStr, M_RD2, M_Data, M_DataOut;
    wire [9:0] M_inStrType;
    wire [4:0] M_writeReg;
    wire [2:0] M_aluOp;
    wire [1:0] M_Tnew, M_memToReg, M_regDst, M_NPCOp;
    wire M_regWrite, M_isEqual, M_memWrite, M_aluSrc, M_extOp, M_isByte;

    //  W level register
    wire [31:0] W_PC, W_writeData, W_inStr, W_DataOut, W_result;
    wire [9:0] W_inStrType;
    wire [4:0] W_writeReg;
    wire [2:0] W_aluOp;
    wire [1:0] W_memToReg, W_regDst, W_NPCOp;
    wire W_regWrite, W_isEqual, W_memWrite, W_aluSrc, W_extOp, W_isByte;


    assign F_inStrType = (F_inStr[5:0] == 0 && F_inStr[31:26] == 0) ? `nop : // 支持指令集不包括op和func均为0的指令时才能这么做
        (F_inStr[5:0] == 32 && F_inStr[31:26] == 0) ? `add :
                          (F_inStr[5:0] == 34 && F_inStr[31:26] == 0) ? `sub :
                          (F_inStr[31:26] == 6'b001101) ? `ori :
                          (F_inStr[31:26] == 6'b100011) ? `lw :
                          (F_inStr[31:26] == 6'b101011) ? `sw :
                          (F_inStr[31:26] == 6'b000100) ? `beq :
                          (F_inStr[31:26] == 6'b001111) ? `lui :
                          (F_inStr[5:0] == 6'b001000 && F_inStr[31:26] == 0) ? `jr :
                          (F_inStr[31:26] == 6'b000011) ? `jal : `nop;



    /*
    module IFU (
    input [31:0] nextPC,
    input clk,
    input reset,
    input pcWE,
    output [31:0] inStr,
    output [31:0] PC
    );
    */
    IFU ifu (
        F_nextPC_true,
        clk,
        reset,
        F_pcWE,
        F_inStr,
        F_PC
    );

    // IF------------------------------------------------------------ID

    /* NPC 放到D级和F级
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
    */
    NPC F_npc (
        D_PC,
        D_RD1,
        D_NPCOp,
        D_inStr[25:0],
        D_isBranch,
        D_inStrType,
        D_PC4,
        F_nextPC
    );
    // if(D_instrType == skip) get npc  else get pc+4
    assign F_nextPC_true = (D_inStrType == `jal || D_inStrType == `jr || D_inStrType == `beq) ? F_nextPC : (F_PC + 4);

    /*
    module D_REG (
    input clk,
    input reset,
    input D_regWE,  // write enable
    input [31:0] F_inStr,
    input [31:0] F_PC,
    output [31:0] D_PC,
    output [31:0] D_inStr
    );
    */
    D_REG d_reg (
        clk,
        reset,
        D_regWE,
        F_inStr,
        F_PC,
        D_PC,
        D_inStr
    );

    /*
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
    output [1:0] D_TuseRs,   00 beq, jr; 01 add, sub, ori, lw, lb, sw, sb;
                                    11 nop, lui, jal 
    output [1:0] D_TuseRt,   00 beq; 01 add, sub; 10 sw, sb; 
                                    11 nop, lui, jal, ori, lw, lb, jr 
    output [1:0] E_Tnew,   00 nop, sw, sb, beq, jr; 01 add, sub, ori, lui;
                                    10 lw, lb, jal 
    output [1:0] M_Tnew   00 nop, add, sub, ori, sw, sb, beq, lui, jr; 01 jal, lw, lb 
    );
    */
    Controller D_control (
        D_inStr[5:0],
        D_inStr[31:26],
        D_isEqual,
        D_memToReg,
        D_memWrite,
        D_inStrType,
        D_regDst,
        D_aluOp,
        D_aluSrc,
        D_regWrite,
        D_extOp,
        D_isByte,
        D_NPCOp,
        D_TuseRs,
        D_TuseRt,
        D_laji1,
        D_laji2
    );

    /*
    module EXT (
    input [15:0] imm,
    input extOp,  // 0 0_extend, 1 sign_extend
    output [31:0] extResult
    );
    */
    EXT D_ext (
        D_inStr[15:0],
        D_extOp,
        D_extResult
    );

    mux5Bit_3 D_mux2 (
        D_inStr[20:16],
        D_inStr[15:11],
        5'b11111,
        D_regDst,
        D_writeReg
    );
    /*
    module GRF (
    input [31:0] PC,
    input clk,
    input reset,
    input regWrite,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
    );
    */
    GRF D_grf (
        W_PC,
        clk,
        reset,
        W_regWrite,
        D_inStr[25:21],
        D_inStr[20:16],
        W_writeReg,
        W_writeData,
        D_RD1_temp,
        D_RD2_temp
    );

    // transition to get RD1, RD2

    /*
    module transMUX_rd(
    input [31:0] grfOut,
    input [31:0] M_aluResult,
    input [4:0] D_read,
    input M_RegWriteEn,
    input [4:0] M_writeReg,
    output [31:0] rightData
    );
    */

    transMUX_rd D_transMuxRd1 (
        D_RD1_temp,
        M_result,
        D_inStr[25:21],
        M_regWrite,
        M_writeReg,
        D_RD1
    );
    transMUX_rd D_transMuxRd2 (
        D_RD2_temp,
        M_result,
        D_inStr[20:16],
        M_regWrite,
        M_writeReg,
        D_RD2
    );

    /*
    module CMP (
    input [31:0] D_rs,
    input [31:0] D_rt,
    input [9:0] inStrType,
    output isBranch  // B-type branch
    );
    */
    CMP D_cmp (
        D_RD1,
        D_RD2,
        D_inStrType,
        D_isBranch
    );

    // ID------------------------------------------------------------EX

    /*
    module E_REG (
    input clk,
    input reset,
    input clr,
    input [31:0] D_inStr,
    input [31:0] D_PC,
    input [4:0] D_writeReg,  // writeReg 写寄存器编号
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [31:0] D_extResult,
    output [31:0] E_inStr,
    output [31:0] E_PC,
    output [4:0] E_writeReg,  // register 写寄存器编号
    output [31:0] E_RD1,
    output [31:0] E_RD2,
    output [31:0] E_extResult
    );
    */
    E_REG E_reg (
        clk,
        reset,
        E_clr,
        D_inStr,
        D_PC,
        D_writeReg,
        D_RD1,
        D_RD2,
        D_extResult,
        E_inStr,
        E_PC,
        E_writeReg,
        E_RD1,
        E_RD2,
        E_extResult
    );

    /*
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
    output [1:0] D_TuseRs,   00 beq, jr; 01 add, sub, ori, lw, lb, sw, sb;
                                    11 nop, lui, jal 
    output [1:0] D_TuseRt,   00 beq; 01 add, sub; 10 sw, sb; 
                                    11 nop, lui, jal, ori, lw, lb, jr 
    output [1:0] E_Tnew,   00 nop, sw, sb, beq, jr; 01 add, sub, ori, lui;
                                    10 lw, lb, jal 
    output [1:0] M_Tnew   00 nop, add, sub, ori, sw, sb, beq, lui, jr; 01 jal, lw, lb 
    );
    */

    Controller E_control (
        E_inStr[5:0],
        E_inStr[31:26],
        E_isEqual,
        E_memToReg,
        E_memWrite,
        E_inStrType,
        E_regDst,
        E_aluOp,
        E_aluSrc,
        E_regWrite,
        E_extOp,
        E_isByte,
        E_NPCOp,
        E_laji1,
        E_laji2,
        E_Tnew,
        E_laji3
    );

    // transition to get aluSrc

    /*
    module transMUX_aluSrc(
    input [31:0] rd,
    input [31:0] M_aluResult,
    input [31:0] W_writeData,
    input [4:0] E_readReg,
    input [4:0] M_writeReg,
    input [4:0] W_writeReg,
    input M_RegWriteEn,
    input W_RegWriteEn,
    output rightData
    );
    */

    transMUX_aluSrc E_transMuxAluSrc1 (
        E_RD1,
        M_result,
        W_writeData,
        E_inStr[25:21],
        M_writeReg,
        W_writeReg,
        M_regWrite,
        W_regWrite,
        E_rightRd1
    );

    transMUX_aluSrc E_transMuxAluSrc2 (
        E_RD2,
        M_result,
        W_writeData,
        E_inStr[20:16],
        M_writeReg,
        W_writeReg,
        M_regWrite,
        W_regWrite,
        E_rightRd2
    );

    assign E_Src1 = E_rightRd1;
    assign E_Src2 = (E_aluSrc == 0) ? E_rightRd2 : E_extResult;  // mux32Bit_2
    /*
    module ALU (
    input [31:0] Src1,
    input [31:0] Src2,
    input [2:0] aluOp,
    output isEqual,
    output [31:0] result
    );
    */
    ALU E_alu (
        E_Src1,
        E_Src2,
        E_aluOp,
        E_isEqual,
        E_result
    );

    // EX------------------------------------------------------------EM

    /*
    module M_REG (
    input clk,
    input reset,
    input [31:0] E_inStr,
    input [31:0] E_PC,
    input [4:0] E_writeReg,  // writeReg 写寄存器编号
    input [31:0] E_result,
    input [31:0] E_RD2,
    output [31:0] M_inStr,
    output [31:0] M_PC,
    output [4:0] M_writeReg,  // register 写寄存器编号
    output [31:0] M_result,
    output [31:0] M_RD2
    );
    */
    M_REG M_reg (
        clk,
        reset,
        E_inStr,
        E_PC,
        E_writeReg,
        E_result,
        E_rightRd2,
        M_inStr,
        M_PC,
        M_writeReg,
        M_result,
        M_RD2
    );

    /*
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
    output [1:0] D_TuseRs,   00 beq, jr; 01 add, sub, ori, lw, lb, sw, sb;
                                    11 nop, lui, jal 
    output [1:0] D_TuseRt,   00 beq; 01 add, sub; 10 sw, sb; 
                                    11 nop, lui, jal, ori, lw, lb, jr 
    output [1:0] E_Tnew,   00 nop, sw, sb, beq, jr; 01 add, sub, ori, lui;
                                    10 lw, lb, jal 
    output [1:0] M_Tnew   00 nop, add, sub, ori, sw, sb, beq, lui, jr; 01 jal, lw, lb 
    );
    */
    Controller M_control (
        M_inStr[5:0],
        M_inStr[31:26],
        M_isEqual,
        M_memToReg,
        M_memWrite,
        M_inStrType,
        M_regDst,
        M_aluOp,
        M_aluSrc,
        M_regWrite,
        M_extOp,
        M_isByte,
        M_NPCOp,
        M_laji1,
        M_laji2,
        M_laji3,
        M_Tnew
    );

    // transition to get WD

    /*
    module transMUX_memWriteData(
    input [31:0] M_rd2,
    input [31:0] W_writeData,
    input [4:0] M_readReg,
    input W_RegWriteEn,
    input [4:0] W_writeReg,
    output [31:0] rightData
    );
    */

    transMUX_memWriteData M_transMuxMemWData (
        M_RD2,
        W_writeData,
        M_inStr[20:16],
        W_regWrite,
        W_writeReg,
        M_Data
    );

    /*
    module DM (
    input [31:0] PC,
    input [31:0] Addr,
    input [31:0] Data,
    input clk,
    input reset,
    input Memwrite,
    input isByte,
    output [31:0] DataOut
    );
    */
    DM M_dm (
        M_PC,
        M_result,
        M_Data,
        clk,
        reset,
        M_memWrite,
        M_isByte,
        M_DataOut
    );

    // EM------------------------------------------------------------WB

    /*
    module W_REG (
    input clk,
    input reset,
    input [31:0] M_inStr,
    input [31:0] M_PC,
    input [4:0] M_writeReg,  // writeReg 写寄存器编号
    input [31:0] M_dataOut,  // DM输出
    input [31:0] M_result,
    output [31:0] W_inStr,
    output [31:0] W_PC,
    output [4:0] W_writeReg,
    output [31:0] W_dataOut,  // DM输出
    output [31:0] W_result
    );
    */
    W_REG W_reg (
        clk,
        reset,
        M_inStr,
        M_PC,
        M_writeReg,
        M_DataOut,
        M_result,
        W_inStr,
        W_PC,
        W_writeReg,
        W_DataOut,
        W_result
    );
    assign W_writeData = (W_inStrType == `jal) ? (W_PC + 8) :  // mux32Bit_3
                     (W_memToReg == 2'b00) ? (W_result) :
                     (W_DataOut);

    /*
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
    output [1:0] D_TuseRs,   00 beq, jr; 01 add, sub, ori, lw, lb, sw, sb;
                                    11 nop, lui, jal 
    output [1:0] D_TuseRt,   00 beq; 01 add, sub; 10 sw, sb; 
                                    11 nop, lui, jal, ori, lw, lb, jr 
    output [1:0] E_Tnew,   00 nop, sw, sb, beq, jr; 01 add, sub, ori, lui;
                                    10 lw, lb, jal 
    output [1:0] M_Tnew   00 nop, add, sub, ori, sw, sb, beq, lui, jr; 01 jal, lw, lb 
    );
    */
    Controller W_control (
        W_inStr[5:0],
        W_inStr[31:26],
        W_isEqual,
        W_memToReg,
        W_memWrite,
        W_inStrType,
        W_regDst,
        W_aluOp,
        W_aluSrc,
        W_regWrite,
        W_extOp,
        W_isByte,
        W_NPCOp,
        W_laji1,
        W_laji2,
        W_laji3,
        W_laji4
    );

    /*
    module STOP (
    input [31:0] D_inStr,  // 包含D级指令要用的两个寄存器编号
    input [4:0] E_writeReg,  // register number
    input E_regWrite,
    input [4:0] M_writeReg,  // register number
    input M_regWrite,
    input [1:0] D_TuseRs,
    input [1:0] D_TuseRt,
    input [1:0] E_Tnew,
    input [1:0] M_Tnew,  // W 级Tnew一定为0,不需要考虑
    output F_pcWE,
    output D_regWE,
    output E_regclr
    );
    */
    STOP ctrlStop (
        D_inStr,
        E_writeReg,
        E_regWrite,
        M_writeReg,
        M_regWrite,
        D_TuseRs,
        D_TuseRt,
        E_Tnew,
        M_Tnew,
        F_pcWE,
        D_regWE,
        E_clr
    );



endmodule
