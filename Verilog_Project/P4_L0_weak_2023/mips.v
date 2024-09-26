`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:11 11/02/2023 
// Design Name: 
// Module Name:    mips 
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
module mips (
    input clk,
    input reset
);

    // Controller输出
    wire [1:0] memToReg;
    wire memWrite;
    wire [1:0] regDst;
    wire [2:0] aluOp;  // 000 -, 001 +, 010 |, 011 lui, 
    wire aluSrc;
    wire regWrite;
    wire extOp;
    wire isByte;
    wire [1:0] NPCOp;  // 00 others, 01 beq, 10 jal, 11 jr

    // IFU输出
    wire [31:0] inStr;
    wire [31:0] PC;

    // NPC输出
    wire [31:0] nextPC;
    wire [31:0] PC4;

    // GRF输出
    wire [31:0] RD1;
    wire [31:0] RD2;

    // ALU输出
    wire isEqual;
    wire [31:0] result;

    // DM输出
    wire [31:0] dataOut;

    // EXT输出
    wire [31:0] extResult;

    /*
    module Controller (
    input [5:0] funct,
    input [5:0] opcode,
    input isEqual,
    output [1:0] memToReg,  // 00 other, 01 lw lb, 10 jal
    output memWrite,
    output [1:0] regDst,  // 00 other, 01 add sub, 10 jal
    output [2:0] aluOp,  // 000 -, 001 +, 010 |, 011 lui, 
    output aluSrc,
    output regWrite,
    output extOp,
    output isByte,
    output [1:0] NPCOp  // 00 others, 01 beq, 10 jal, 11 jr
    );
    */
    Controller controller (
        inStr[5:0],
        inStr[31:26],
        isEqual,
        memToReg,
        memWrite,
        regDst,
        aluOp,
        aluSrc,
        regWrite,
        extOp,
        isByte,
        NPCOp
    );

    /*
    module EXT (
        input [15:0] imm,
        input extOp,  // 0 0_extend, 1 sign_extend
        output [31:0] extResult
    );
    */
    EXT ext (
        inStr[15:0],
        extOp,
        extResult
    );

    /*
    module IFU (
    input [31:0] nextPC,
    input clk,
    input reset,
    output [31:0] inStr,
    output [31:0] PC
    );
    */
    IFU ifu (
        nextPC,
        clk,
        reset,
        inStr,
        PC
    );

    /*
    module ALU (
    input [31:0] Src1,
    input [31:0] Src2,
    input [2:0] AluOp,
    output isEqual,
    output [31:0] result
    );
    */
    wire [31:0] Src2_alu;
    mux32Bit_2 mux1 (
        RD2,
        extResult,
        aluSrc,
        Src2_alu
    );
    ALU alu (
        RD1,
        Src2_alu,
        aluOp,
        isEqual,
        result
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
    // 需要MUX
    wire [4:0] A3_grf;
    mux5Bit_3 mux2 (
        inStr[20:16],
        inStr[15:11],
        5'b11111,
        regDst,
        A3_grf
    );
    wire [31:0] WD_grf;
    mux32Bit_3 mux3 (
        result,
        dataOut,
        PC4,
        memToReg,
        WD_grf
    );
    GRF grf (
        PC,
        clk,
        reset,
        regWrite,
        inStr[25:21],
        inStr[20:16],
        A3_grf,
        WD_grf,
        RD1,
        RD2
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
    DM dm (
        PC,
        result,
        RD2,
        clk,
        reset,
        memWrite,
        isByte,
        dataOut
    );

    /*
    module NPC (
    input [31:0] PC,
    input [31:0] raGPR,
    input equal,
    input [1:0] NPCOp,  // 00 不跳转, 01 beq, 10 jal, 11 jr
    input [25:0] imm,
    output [31:0] PC4,
    output [31:0] nextPC
    );
    */
    NPC npc (
        PC,
        RD1,
        isEqual,
        NPCOp,
        inStr[25:0],
        PC4,
        nextPC
    );






endmodule
