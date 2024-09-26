`include "InStrType.v"
`timescale 1ns / 1ps

module mips (
    input clk,
    input reset,
    input [31:0] i_inst_rdata,  // F级对应指令
    input [31:0] m_data_rdata,  // DM到空壳数据
    output [31:0] i_inst_addr,  // F级PC
    output [31:0] m_data_addr,  // DM写入地址
    output [31:0] m_data_wdata,  // DM写入数据
    output [3:0] m_data_byteen,  // DM写使能
    output [31:0] m_inst_addr,  // M级PC
    output w_grf_we,  // GRF写使能
    output [4:0] w_grf_addr,  // GRF写寄存器编号
    output [31:0] w_grf_wdata,  // GRF写入数据
    output [31:0] w_inst_addr  // W级PC
);


    // I/O DEFINATION

    // trash
    wire [1:0] D_trash1, D_trash2, E_trash1, E_trash2, E_trash3, M_trash1, M_trash2, M_trash3, W_trash1, W_trash2, W_trash3, W_trash4;

    // F-level
    wire [31:0] F_PC, F_inStr, F_nextPC;
    wire IFU_STALL;

    // D-level
    wire [31:0] D_PC, D_inStr, D_RD1, D_RD2, D_extResult, GRF_RD1, GRF_RD2, D_PC8;
    wire [9:0] D_inStrType;
    wire [4:0] D_writeReg_NUM;
    wire [2:0] D_aluOp, D_mudiOp;
    wire [1:0] D_regDst, D_TuseRs, D_TuseRt, D_memToReg, D_extOp;
    wire D_REG_STALL, D_aluSrc, D_writeMem_EN, D_writeReg_EN, D_isBranch, D_isStart, D_MUDI_sel, D_ALU_or_MUDI;

    // E-level
    wire [31:0] E_PC, E_inStr, E_PC8, E_RD1, E_RD2, E_extResult, ALU_src1, ALU_src2, E_ALU_src2_temp, E_aluResult, 
                MUDI_HI, MUDI_LO, MUDI_result, ALU_result;
    wire [9:0] E_inStrType;
    wire [4:0] E_writeReg_NUM;
    wire [2:0] E_aluOp, E_mudiOp;
    wire [1:0] E_regDst, E_memToReg, E_Tnew, E_extOp;
    wire E_REG_STALL, E_aluSrc, E_writeMem_EN, E_writeReg_EN, E_isBranch, E_isByte, E_isBusy, E_isStart, E_MUDI_sel, E_ALU_or_MUDI;

    // M-level
    wire [31:0] M_PC, M_inStr, M_PC8, M_aluResult, M_ALU_src2_temp, DM_dataIN, M_dataOUT, DM_ADDR;
    wire [9:0] M_inStrType;
    wire [4:0] M_writeReg_NUM;
    wire [2:0] M_aluOp, M_mudiOp;
    wire [1:0] M_regDst, M_memToReg, M_Tnew, M_extOp;
    wire M_aluSrc, M_writeMem_EN, M_writeReg_EN, M_isBranch, M_isStart, M_MUDI_sel, M_ALU_or_MUDI;

    // W_level
    wire [31:0] W_PC, W_inStr, W_PC8, W_ALU_src2_temp, W_writeReg_DATA, W_dataOUT, W_aluResult;
    wire [9:0] W_inStrType;
    wire [4:0] W_writeReg_NUM;
    wire [2:0] W_aluOp, W_mudiOp;
    wire [1:0] W_regDst, W_memToReg, W_extOp;
    wire W_writeReg_EN, W_aluSrc, W_writeMem_EN, W_isBranch, W_isStart, W_MUDI_sel, W_ALU_or_MUDI;


    // extra I/O
    assign m_inst_addr = M_PC;
    assign w_grf_we = W_writeReg_EN;
    assign w_grf_addr = W_writeReg_NUM;
    assign w_grf_wdata = W_writeReg_DATA;
    assign w_inst_addr = W_PC;


    // COMPONENTS

    /*
    module IFU (
        input clk,
        input reset,
        input IFU_STALL,
        input [31:0] nextPC,
        input [31:0] F_inStr_IM,
        output [31:0] F_PC,
        output [31:0] F_inStr,
        output [31:0] PC_IM
    );
    */

    IFU F_ifu (
        .clk(clk),
        .reset(reset),
        .IFU_STALL(IFU_STALL),
        .nextPC(F_nextPC),
        .F_inStr_IM(i_inst_rdata),
        .F_PC(F_PC),
        .F_inStr(F_inStr),
        .PC_IM(i_inst_addr)
    );

    /*
    module NPC (
        input [31:0] F_PC,  // F_PC 有初始值
        input D_isBranch,
        input [9:0] D_inStrType,
        input [25:0] D_imm,
        input [31:0] D_RD1,  // jr
        output [31:0] F_nextPC,
        output [31:0] D_PC8  // jal D_PC + 8 / F_PC + 4
    );
    */

    NPC npc (
        .F_PC(F_PC),
        .D_isBranch(D_isBranch),
        .D_inStrType(D_inStrType),
        .D_imm(D_inStr[25:0]),
        .D_RD1(D_RD1),
        .F_nextPC(F_nextPC),
        .D_PC8(D_PC8)
    );

    // F_LEVEL ---------------------------------------------- D_LEVEL

    /*
    module D_REG (
        input clk,
        input reset,
        input D_REG_STALL,  // stop the pipeline
        input [31:0] F_PC,
        input [31:0] F_inStr,
        output [31:0] D_PC,
        output [31:0] D_inStr
    );
    */

    D_REG d_reg (
        .clk(clk),
        .reset(reset),
        .D_REG_STALL(D_REG_STALL),
        .F_PC(F_PC),
        .F_inStr(F_inStr),
        .D_PC(D_PC),
        .D_inStr(D_inStr)
    );

    /*
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
    */

    Controller D_controller (
        .inStr(D_inStr),
        .inStrType(D_inStrType),
        .regDst(D_regDst),
        .aluSrC(D_aluSrc),
        .writeMem_EN(D_writeMem_EN),
        .memToReg(D_memToReg),
        .writeReg_EN(D_writeReg_EN),
        .aluOp(D_aluOp),
        .mudiOp(D_mudiOp),
        .extOp(D_extOp),
        .MUDI_sel(D_MUDI_sel),
        .ALU_or_MUDI(D_ALU_or_MUDI),
        .isStart(D_isStart),
        .D_TuseRs(D_TuseRs),
        .D_TuseRt(D_TuseRt),
        .E_Tnew(D_trash1),
        .M_Tnew(D_trash2)
    );

    /*
    module EXT (
        input  [25:0] EXT_imm,
        input  [ 2:0] EXT_extOp,
        output [31:0] D_extResult
    );
    */

    EXT D_ext (
        .EXT_imm(D_inStr[25:0]),
        .EXT_extOp(D_extOp),
        .D_extResult(D_extResult)
    );

    assign D_writeReg_NUM = (D_regDst == 2'b10) ? 5'b11111 : (D_regDst == 2'b01) ? D_inStr[15:11] : D_inStr[20:16];

    /*
    module GRF (
        input clk,
        input reset,
        input W_writeReg_EN,
        input [4:0] GRF_A1,
        input [4:0] GRF_A2,
        input [4:0] GRF_A3,
        input [31:0] GRF_WD,
        output [31:0] GRF_RD1,
        output [31:0] GRF_RD2
    ); 
    */

    GRF D_grf (
        .PC(W_PC),
        .clk(clk),
        .reset(reset),
        .W_writeReg_EN(W_writeReg_EN),
        .GRF_A1(D_inStr[25:21]),
        .GRF_A2(D_inStr[20:16]),
        .GRF_A3(W_writeReg_NUM),
        .GRF_WD(W_writeReg_DATA),
        .GRF_RD1(GRF_RD1),
        .GRF_RD2(GRF_RD2)
    );

    /*
    module CMP (
        input [31:0] D_RD1,
        input [31:0] D_RD2,
        input [31:0] D_inStrType,
        output isBranch
    );
    */

    CMP D_cmp (
        .D_RD1(D_RD1),
        .D_RD2(D_RD2),
        .D_inStrType(D_inStrType),
        .isBranch(D_isBranch)
    );

    // D_LEVEL ---------------------------------------------- E_LEVEL

    /*
        module E_REG (
        input clk,
        input reset,
        input E_REG_STALL,  // stop the pipeline
        input [31:0] D_PC,
        input [31:0] D_inStr,
        input [31:0] D_PC8,
        input [4:0] D_writeReg_NUM,
        input [31:0] D_RD1,
        input [31:0] D_RD2,
        input [31:0] D_extResult,
        input D_isBranch,
        output [31:0] E_PC,
        output [31:0] E_inStr,
        output [31:0] E_PC8,
        output [4:0] E_writeReg_NUM,
        output [31:0] E_RD1,
        output [31:0] E_RD2,
        output [31:0] E_extResult,
        output E_isBranch
    );
    */

    E_REG e_reg (
        .clk(clk),
        .reset(reset),
        .E_REG_STALL(E_REG_STALL),
        .D_PC(D_PC),
        .D_inStr(D_inStr),
        .D_PC8(D_PC8),
        .D_writeReg_NUM(D_writeReg_NUM),
        .D_RD1(D_RD1),
        .D_RD2(D_RD2),
        .D_extResult(D_extResult),
        .D_isBranch(D_isBranch),
        .E_PC(E_PC),
        .E_inStr(E_inStr),
        .E_PC8(E_PC8),
        .E_writeReg_NUM(E_writeReg_NUM),
        .E_RD1(E_RD1),
        .E_RD2(E_RD2),
        .E_extResult(E_extResult),
        .E_isBranch(E_isBranch)
    );

    /*
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
    */

    Controller E_controller (
        .inStr(E_inStr),
        .inStrType(E_inStrType),
        .regDst(E_regDst),
        .aluSrC(E_aluSrc),
        .writeMem_EN(E_writeMem_EN),
        .memToReg(E_memToReg),
        .writeReg_EN(E_writeReg_EN),
        .aluOp(E_aluOp),
        .mudiOp(E_mudiOp),
        .extOp(E_extOp),
        .MUDI_sel(E_MUDI_sel),
        .ALU_or_MUDI(E_ALU_or_MUDI),
        .isStart(E_isStart),
        .D_TuseRs(E_trash1),
        .D_TuseRt(E_trash2),
        .E_Tnew(E_Tnew),
        .M_Tnew(E_trash3)
    );

    /*
    module ALU (
        input  [31:0] ALU_src1,
        input  [31:0] ALU_src2,
        input  [ 2:0] ALU_aluOp,
        output [31:0] E_ALU_result
    );
    */

    assign ALU_src2 = (E_aluSrc == 1) ? E_extResult : E_ALU_src2_temp;

    ALU E_alu (
        .ALU_src1(ALU_src1),
        .ALU_src2(ALU_src2),
        .ALU_aluOp(E_aluOp),
        .E_ALU_result(ALU_result)
    );

    /*
    module MUDI (
        input clk,
        input reset,
        input E_isStart,
        input [2:0] MUDI_mudiOp,
        input [9:0] E_inStrType,
        input [31:0] MUDI_src1,
        input [31:0] MUDI_src2,
        output isBusy,
        output [31:0] MUDI_HI,
        output [31:0] MUDI_LO
    );
    */

    MUDI E_mudi (
        .clk(clk),
        .reset(reset),
        .E_isStart(E_isStart),
        .MUDI_mudiOp(E_mudiOp),
        .E_inStrType(E_inStrType),
        .MUDI_src1(ALU_src1),
        .MUDI_src2(E_ALU_src2_temp),
        .isBusy(E_isBusy),
        .MUDI_HI(MUDI_HI),
        .MUDI_LO(MUDI_LO)
    );

    assign MUDI_result = E_MUDI_sel ? MUDI_HI : MUDI_LO;

    assign E_aluResult = E_ALU_or_MUDI ? MUDI_result : ALU_result;

    // E_LEVEL ---------------------------------------------- M_LEVEL

    /*
    module M_REG (
        input clk,
        input reset,
        input [31:0] E_PC,
        input [31:0] E_inStr,
        input [31:0] E_PC8,
        input [4:0] E_writeReg_NUM,
        input [31:0] E_aluResult,
        input [31:0] E_ALU_src2_temp,
        input E_isBranch,
        output [31:0] M_PC,
        output [31:0] M_inStr,
        output [31:0] M_PC8,
        output [4:0] M_writeReg_NUM,
        output [31:0] M_aluResult,
        output [31:0] M_ALU_src2_temp,
        output M_isBranch
    );
    */

    M_REG m_reg (
        .clk(clk),
        .reset(reset),
        .E_PC(E_PC),
        .E_inStr(E_inStr),
        .E_PC8(E_PC8),
        .E_writeReg_NUM(E_writeReg_NUM),
        .E_aluResult(E_aluResult),
        .E_ALU_src2_temp(E_ALU_src2_temp),
        .E_isBranch(E_isBranch),
        .M_PC(M_PC),
        .M_inStr(M_inStr),
        .M_PC8(M_PC8),
        .M_writeReg_NUM(M_writeReg_NUM),
        .M_aluResult(M_aluResult),
        .M_ALU_src2_temp(M_ALU_src2_temp),
        .M_isBranch(M_isBranch)
    );

    /*
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
    */

    Controller M_controller (
        .inStr(M_inStr),
        .inStrType(M_inStrType),
        .regDst(M_regDst),
        .aluSrC(M_aluSrc),
        .writeMem_EN(M_writeMem_EN),
        .memToReg(M_memToReg),
        .writeReg_EN(M_writeReg_EN),
        .aluOp(M_aluOp),
        .mudiOp(M_mudiOp),
        .extOp(M_extOp),
        .MUDI_sel(M_MUDI_sel),
        .ALU_or_MUDI(M_ALU_or_MUDI),
        .isStart(M_isStart),
        .D_TuseRs(M_trash1),
        .D_TuseRt(M_trash2),
        .E_Tnew(M_trash3),
        .M_Tnew(M_Tnew)
    );

    /*
    module DM (
        input DM_writeMem_EN,
        input [9:0] M_inStrType,
        input [31:0] DM_ADDR,
        input [31:0] DM_dataIN,
        input [31:0] M_dataOUT_DM,
        output [31:0] M_dataOUT,
        output [31:0] DM_ADDR_DM,
        output [31:0] DM_dataIN_DM,
        output [3:0] DM_byteen_DM
    );
    */

    assign DM_ADDR = M_aluResult;

    DM M_dm (
        .DM_writeMem_EN(M_writeMem_EN),
        .M_inStrType(M_inStrType),
        .DM_ADDR(DM_ADDR),
        .DM_dataIN(DM_dataIN),
        .M_dataOUT_DM(m_data_rdata),
        .M_dataOUT(M_dataOUT),
        .DM_ADDR_DM(m_data_addr),
        .DM_dataIN_DM(m_data_wdata),
        .DM_byteen_DM(m_data_byteen)
    );

    /*
    module W_REG (
        input clk,
        input reset,
        input [31:0] M_PC,
        input [31:0] M_inStr,
        input [31:0] M_PC8,
        input [4:0] M_writeReg_NUM,
        input [31:0] M_dataOUT,
        input [31:0] M_aluResult,
        input M_isBranch,
        output [31:0] W_PC,
        output [31:0] W_inStr,
        output [31:0] W_PC8,
        output [4:0] W_writeReg_NUM,
        output [31:0] W_dataOUT,
        output [31:0] W_aluResult,
        output W_isBranch
    );
    */

    W_REG w_reg (
        .clk(clk),
        .reset(reset),
        .M_PC(M_PC),
        .M_inStr(M_inStr),
        .M_PC8(M_PC8),
        .M_writeReg_NUM(M_writeReg_NUM),
        .M_dataOUT(M_dataOUT),
        .M_aluResult(M_aluResult),
        .M_isBranch(M_isBranch),
        .W_PC(W_PC),
        .W_inStr(W_inStr),
        .W_PC8(W_PC8),
        .W_writeReg_NUM(W_writeReg_NUM),
        .W_dataOUT(W_dataOUT),
        .W_aluResult(W_aluResult),
        .W_isBranch(W_isBranch)
    );

    /*
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
    */

    Controller W_controller (
        .inStr(W_inStr),
        .inStrType(W_inStrType),
        .regDst(W_regDst),
        .aluSrC(W_aluSrc),
        .writeMem_EN(W_writeMem_EN),
        .memToReg(W_memToReg),
        .writeReg_EN(W_writeReg_EN),
        .aluOp(W_aluOp),
        .mudiOp(W_mudiOp),
        .extOp(W_extOp),
        .MUDI_sel(W_MUDI_sel),
        .ALU_or_MUDI(W_ALU_or_MUDI),
        .isStart(W_isStart),
        .D_TuseRs(W_trash1),
        .D_TuseRt(W_trash2),
        .E_Tnew(W_trash3),
        .M_Tnew(W_trash4)
    );

    assign W_writeReg_DATA = (W_memToReg == 2'b10) ? W_PC8 : (W_memToReg == 2'b01) ? W_dataOUT : W_aluResult;

    /*
    module STALL (
        input E_busy,
        input E_start,
        input E_writeReg_EN,
        input M_writeReg_EN,
        input [1:0] D_TuseRs,
        input [1:0] D_TuseRt,
        input [1:0] E_Tnew,
        input [1:0] M_Tnew,
        input [4:0] E_writeReg_NUM,  // register number
        input [4:0] M_writeReg_NUM,  // register number
        input [9:0] D_inStrType,
        input [9:0] E_inStrType,
        input [9:0] M_inStrType,
        input [31:0] D_inStr,  // 包含D级指令要用的两个寄存器编号
        output IFU_STALL,
        output D_REG_STALL,
        output E_REG_STALL
    );
    */

    STALL stall (
        .E_busy(E_isBusy),
        .E_start(E_isStart),
        .E_writeReg_EN(E_writeReg_EN),
        .M_writeReg_EN(M_writeReg_EN),
        .D_TuseRs(D_TuseRs),
        .D_TuseRt(D_TuseRt),
        .E_Tnew(E_Tnew),
        .M_Tnew(M_Tnew),
        .E_writeReg_NUM(E_writeReg_NUM),
        .M_writeReg_NUM(M_writeReg_NUM),
        .D_inStrType(D_inStrType),
        .E_inStrType(E_inStrType),
        .M_inStrType(M_inStrType),
        .D_inStr(D_inStr),
        .IFU_STALL(IFU_STALL),
        .D_REG_STALL(D_REG_STALL),
        .E_REG_STALL(E_REG_STALL)
    );

    // transition
    assign D_RD1 =  (M_inStrType == `jal && D_inStr[25:21] == 5'b11111) ? M_PC8 : 
                    (M_writeReg_NUM == D_inStr[25:21] && D_inStr[25:21] != 0 && M_writeReg_EN) ? M_aluResult :
                    GRF_RD1;
    assign D_RD2 =  (M_inStrType == `jal && D_inStr[20:16] == 5'b11111) ? M_PC8 : 
                    (M_writeReg_NUM == D_inStr[20:16] && D_inStr[20:16] != 0 && M_writeReg_EN) ? M_aluResult : 
                    GRF_RD2;

    assign ALU_src1 =   (M_inStrType == `jal && E_inStr[25:21] == 5'b11111) ? M_PC8 :
                        (M_writeReg_NUM == E_inStr[25:21] && E_inStr[25:21] != 0 && M_writeReg_EN) ? M_aluResult :
                        (W_writeReg_NUM == E_inStr[25:21] && E_inStr[25:21] != 0 && W_writeReg_EN) ? W_writeReg_DATA :
                        E_RD1;

    assign E_ALU_src2_temp = (M_inStrType == `jal && E_inStr[20:16] == 5'b11111) ? M_PC8 :
                             (M_writeReg_NUM == E_inStr[20:16] && E_inStr[20:16] != 0 && M_writeReg_EN) ? M_aluResult :
                             (W_writeReg_NUM == E_inStr[20:16] && E_inStr[20:16] != 0 && W_writeReg_EN) ? W_writeReg_DATA :
                             E_RD2;

    assign DM_dataIN = (W_writeReg_NUM == M_inStr[20:16] && M_inStr[20:16] != 0 && W_writeReg_EN) ? W_writeReg_DATA : M_ALU_src2_temp;

endmodule
