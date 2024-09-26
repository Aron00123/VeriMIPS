`include "instr_def_h.v"
`include "cpuex_def_h.v"
//`default_nettype none
module CPU (
    input [5:0] intReq,

    input          clk,            //in-DM
    input          reset,          //in-DM
    input  [ 31:0] i_inst_rdata,   //out-IM
    input  [ 31:0] m_data_rdata,   //out-DM
    output [ 31:0] i_inst_addr,    //in-IM
    output [ 31:0] m_data_addr,    //in-DM
    output [ 31:0] m_data_wdata,   //in-DM
    output [3 : 0] m_data_byteen,  //in-DM 四位分别对应4个字节的写使�
    output [ 31:0] m_inst_addr,
    output         w_grf_we,
    output [  4:0] w_grf_addr,
    output [ 31:0] w_grf_wdata,
    output [ 31:0] w_inst_addr,

    output [31:0] single_pc
);
    // 变量在开头定�
    // wire []
    wire [1:0] D_laji1,D_laji2,E_laji1,E_laji2,E_laji3,M_laji1,M_laji2,M_laji3,W_laji1,W_laji2,W_laji3,W_laji4; // 接到无用的端口上补个人头�
    wire [4:0] ctrllaji1, ctrllaji2, ctrllaji3;
    // ------------ F ---------------
    wire [31:0] F_next_pc, F_pc, F_instr, F_npcOut;
    wire [4:0] F_exCode;
    //wire [5:0] F_func,F_opcode;
    //wire [9:0] F_instrType;
    wire F_pcWE, F_isBD;
    // ------------ D ---------------
    wire [31:0] D_imm25to0_sign_extender, D_skipKeyValue, D_pc, D_instr;
    wire [31:0] D_rd1,D_rd2,D_imm15to0_extender,D_grf_out1,D_grf_out2; // D_grf_out是直接从grf中读出的数据,D_rd是期望读出的grf数据
    wire [4:0] D_grfWriteTo1, D_grfWriteTo2, D_exCode0, D_exCode1, D_realExCode;

    wire [9:0] D_instrType;
    wire [4:0] D_ALUCtrl;
    wire [1:0] D_TuseRs, D_TuseRt;
    wire D_RegDst, D_RegWriteEn, D_isSignedExtend, D_aluOrMemWritegrf, D_memWriteEn, D_ALUSrc;

    wire D_cmp_isBranch, D_reg_en, D_isWriteRa, D_isBD;

    // ------------ E ---------------
    wire [31:0] E_instr,E_pc,E_rd1,E_rd2,E_15to0immExtender,E_outHI,E_outLO,E_valueMDwrite,E_MD_Tnew;// E_reg output signals
    wire [31:0] E_aluSrc1, E_aluSrc2, E_aluResult, E_rightRd1, E_rightRd2;
    wire [4:0] E_writeReg, E_exCode0, E_exCode1, E_realExCode;

    wire [9:0] E_instrType;
    wire [4:0] E_ALUCtrl;
    wire [1:0] E_reg_Tnew;
    wire E_clr, E_aluIsEqual, E_isbusy, E_isBD;
    wire E_RegDst, E_RegWriteEn, E_isSignedExtend, E_aluOrMemWritegrf, E_memWriteEn, E_ALUSrc;
    // ------------ M ---------------
    wire [31:0] M_instr,M_pc,M_aluResult,M_rd2,M_memData,M_realRd2,M_valueMDwrite,M_realToDM,M_cp0Out;
    wire [31:0] M_cp0_epc;
    wire [ 9:0] M_instrType;
    wire [4:0] M_writeReg, M_exCode0, M_exCode1, M_realExCode;
    wire [4:0] M_ALUCtrl;
    wire [3:0] m_data_byteen0;
    wire [1:0] M_reg_Tnew;
    wire M_cp0_req, M_isBD;
    wire M_RegDst, M_RegWriteEn, M_isSignedExtend, M_aluOrMemWritegrf, M_memWriteEn, M_ALUSrc;
    // ------------ W ---------------
    wire [31:0] W_instr, W_pc, W_aluResult, W_memData, W_writeData, W_valueMDwrite, W_cp0Out;
    wire [4:0] W_writeReg;
    wire [9:0] W_instrType;
    wire [4:0] W_ALUCtrl;
    wire W_RegDst, W_RegWriteEn, W_isSignedExtend, W_aluOrMemWritegrf, W_memWriteEn, W_ALUSrc;

    /*
assign F_func = F_instr[5:0];
assign F_opcode = F_instr[31:26];
assign F_instrType = (F_func == 0 && F_opcode == 0) ? `nop : // 注意是在支持指令集不包括op和F_func均为0的指令时才能这么�不然可能会冲�............
                    (F_func == 32 && F_opcode == 0) ? `add :
                    (F_func == 34 && F_opcode == 0) ? `sub :
                    (F_func == 6'b001000 && F_opcode == 0) ? `jr :
                    (F_func == 6'b100100 && F_opcode == 0) ? `And :
                    (F_func == 6'b100101 && F_opcode == 0) ? `Or :
                    (F_func == 6'b101010 && F_opcode == 0) ? `slt :
                    (F_func == 6'b101011 && F_opcode == 0) ? `sltu : 
                    (F_opcode == 6'b001101) ? `ori :
                    (F_opcode == 6'b001000) ? `addi :
                    (F_opcode == 6'b001101) ? `andi :
                    (F_opcode == 6'b100011) ? `lw :
                    (F_opcode == 6'b101011) ? `sw :
                    (F_opcode == 6'b000100) ? `beq :
                    (F_opcode == 6'b001111) ? `lui :
                    (F_opcode == 6'b000011) ? `jal :
                    `nop;*/

    assign w_grf_addr = W_writeReg;
    assign w_grf_wdata = W_writeData;
    assign w_grf_we = W_RegWriteEn;
    assign m_inst_addr = M_pc;
    assign w_inst_addr = W_pc;

    // ----------------------------

    NPC F_npc (
        M_cp0_epc,
        D_pc,
        D_skipKeyValue,
        D_instrType,
        D_cmp_isBranch,
        F_npcOut
    );
    assign F_next_pc = (D_instrType == `jal || D_instrType == `jr || D_instrType == `beq || D_instrType == `bne || D_instrType == `eret) ? F_npcOut : (F_pc + 4);
    // if(D_instrType == skip) get npc  else get pc+4
    IFU F_ifu (
        M_cp0_req,
        F_next_pc,
        clk,
        reset,
        F_pcWE,
        F_pc,
        F_exCode
    );
    assign i_inst_addr = (F_exCode == 5'b0) ? F_pc : 32'h00003000;
    assign F_instr = i_inst_rdata;

    assign F_isBD = (D_instrType == `jal || D_instrType == `jr || D_instrType == `beq || D_instrType == `bne)? 1 : 0; // eret的话不给BD

    // this is the seperation : IF_ID--------------------------------------------------------------------------------------------------------------next D
    D_Reg D_reg (
        M_cp0_req,
        clk,
        reset,
        D_reg_en,
        ((D_instrType == `eret || F_exCode != 5'b0) ? `nop : F_instr),
        ((D_instrType == `eret) ? M_cp0_epc : F_pc),
        D_pc,
        D_instr,
        F_exCode,
        D_exCode0,
        F_isBD,
        D_isBD
    );
    control D_control (
        D_instr,
        D_instr[25:21],
        D_instr[5:0],
        D_instr[31:26],
        D_aluOrMemWritegrf,
        D_memWriteEn,
        D_instrType,
        D_ALUCtrl,
        D_ALUSrc,
        D_RegDst,
        D_RegWriteEn,
        D_isSignedExtend,
        D_TuseRs,
        D_TuseRt,
        D_laji1,
        D_laji2,
        D_exCode1
    );

    EXT D_ext16to32 (
        D_instr[15:0],
        D_isSignedExtend,
        D_imm15to0_extender
    );
    assign D_imm25to0_sign_extender = (D_instr[25] == 1) ? {{6{1'b1}},D_instr[25:0]}:
                                                   {{6{1'b0}},D_instr[25:0]};

    mux5bit_2 D_mux_grfwriteto1 (
        D_RegDst,
        D_instr[20:16],
        D_instr[15:11],
        D_grfWriteTo1
    );
    assign D_isWriteRa = (D_instrType == `jal);
    mux5bit_2 D_mux_grfwriteto2 (
        D_isWriteRa,
        D_grfWriteTo1,
        5'h1f,
        D_grfWriteTo2
    );
    // these to select write which reg and liushui

    GRF D_grf (
        W_pc,
        clk,
        reset,
        W_RegWriteEn,
        D_instr[25:21],
        D_instr[20:16],
        W_writeReg,
        W_writeData,
        D_grf_out1,
        D_grf_out2
    );
    assign D_skipKeyValue = (D_instrType == `jal) ? D_imm25to0_sign_extender : 
                        (D_instrType == `jr) ? D_rd1 :
                         D_imm15to0_extender;
    // 转发得到rd1,rd2

    transMUX_rd D_transMuxRd1 (
        D_grf_out1,
        M_aluResult,
        D_instr[25:21],
        M_RegWriteEn,
        M_writeReg,
        D_rd1
    );
    transMUX_rd D_transMuxRd2 (
        D_grf_out2,
        M_aluResult,
        D_instr[20:16],
        M_RegWriteEn,
        M_writeReg,
        D_rd2
    );
    cmp D_cmp (
        D_rd1,
        D_rd2,
        D_instrType,
        D_cmp_isBranch
    );

    assign D_realExCode = (D_exCode0 == 5'b0) ? D_exCode1 : D_exCode0;
    // this is the seperation : ID_EX--------------------------------------------------------------------------------------------------------------next E
    E_Reg E_reg (
        M_cp0_req,
        clk,
        reset,
        E_clr,
        D_instr,
        D_pc,
        D_grfWriteTo2,
        D_rd1,
        D_rd2,
        D_imm15to0_extender,
        E_instr,
        E_pc,
        E_writeReg,
        E_rd1,
        E_rd2,
        E_15to0immExtender,
        D_realExCode,
        E_exCode0,
        D_isBD,
        E_isBD
    );
    control E_control (
        E_instr,
        E_instr[25:21],
        E_instr[5:0],
        E_instr[31:26],
        E_aluOrMemWritegrf,
        E_memWriteEn,
        E_instrType,
        E_ALUCtrl,
        E_ALUSrc,
        E_RegDst,
        E_RegWriteEn,
        E_isSignedExtend,
        E_laji1,
        E_laji2,
        E_reg_Tnew,
        E_laji3,
        ctrllaji2
    );


    // alusrc trans
    transMUX_aluSrc E_transMuxAluSrc1 (
        E_rd1,
        M_aluResult,
        W_writeData,
        E_instr[25:21],
        M_writeReg,
        W_writeReg,
        M_RegWriteEn,
        W_RegWriteEn,
        E_rightRd1
    );
    transMUX_aluSrc E_transMuxAluSrc2 (
        E_rd2,
        M_aluResult,
        W_writeData,
        E_instr[20:16],
        M_writeReg,
        W_writeReg,
        M_RegWriteEn,
        W_RegWriteEn,
        E_rightRd2
    );

    // mult and div
    MULDIV E_muldiv (
        clk,
        reset,
        E_instrType,
        E_rightRd1,
        E_rightRd2,
        E_instr[25:21],
        E_outHI,
        E_outLO,
        E_isbusy,
        E_MD_Tnew,
        M_cp0_req
    );


    assign E_aluSrc1 = E_rightRd1;
    assign E_aluSrc2 = (E_ALUSrc == 0) ? E_rightRd2 : E_15to0immExtender;
    ALU E_alu (
        E_aluSrc1,
        E_aluSrc2,
        E_ALUCtrl,
        E_aluIsEqual,
        E_aluResult,
        E_instrType,
        E_exCode1
    );


    assign E_realExCode = (E_exCode0 == 5'b0) ? E_exCode1 : E_exCode0;
    // this is the seperation : EX_MEM--------------------------------------------------------------------------------------------------------------next M
    assign E_valueMDwrite = (E_instrType == `mflo) ? E_outLO : 
                        (E_instrType == `mfhi) ? E_outHI : 
                        E_outLO; //这俩指令都不是的话随便选一个流水即�
    M_Reg M_reg (
        M_cp0_req,
        clk,
        reset,
        E_instr,
        E_pc,
        E_writeReg,
        E_aluResult,
        E_rightRd2,
        E_valueMDwrite,
        M_instr,
        M_pc,
        M_writeReg,
        M_aluResult,
        M_rd2,
        M_valueMDwrite,
        E_realExCode,
        M_exCode0,
        E_isBD,
        M_isBD
    );
    control M_control (
        M_instr,
        M_instr[25:21],
        M_instr[5:0],
        M_instr[31:26],
        M_aluOrMemWritegrf,
        M_memWriteEn,
        M_instrType,
        M_ALUCtrl,
        M_ALUSrc,
        M_RegDst,
        M_RegWriteEn,
        M_isSignedExtend,
        M_laji1,
        M_laji2,
        M_laji3,
        M_reg_Tnew,
        ctrllaji2
    );


    transMUX_memWriteData M_transMuxMemWData (
        M_rd2,
        W_writeData,
        M_instr[20:16],
        W_RegWriteEn,
        W_writeReg,
        M_realRd2
    );


    MExCheck M_exCheck (
        M_instrType,
        M_writeReg,
        M_aluResult,
        M_exCode1
    );
    assign M_realExCode = (M_exCode0 == 5'b0) ? M_exCode1 : M_exCode0;
    CP0 M_CP0 (
        clk,
        reset,
        (M_instrType == `mtc0),
        M_instr[15:11],
        M_realRd2,
        M_cp0Out,
        M_pc,
        M_isBD,
        M_realExCode,
        intReq,
        (M_instrType == `eret),
        M_cp0_epc,
        M_cp0_req
    );


    WriteBE M_writeBE (
        M_realRd2,
        M_instrType,
        M_realToDM
    );
    assign m_data_wdata = M_realToDM;
    assign m_data_addr = M_aluResult;
    assign single_pc = M_pc;

    ReadBE M_readBE (
        m_data_rdata,
        M_aluResult,
        M_instrType,
        M_memData
    );  // M_memData 即为从datamem中读出的�比如对于lb指令,这个数仅仅为8位数的符号扩�

    getByteEn M_getByteEn (
        M_aluResult,
        M_instrType,
        M_memWriteEn,
        m_data_byteen0
    );  // 实现向cpu外传递数据在这里
    assign m_data_byteen = (M_cp0_req) ? 4'b0 : m_data_byteen0; // 需要中间插进去一�表示准备中断时不向外面写东西


    // this is the seperation : MEM_WB--------------------------------------------------------------------------------------------------------------next W
    W_Reg W_reg (
        M_cp0_req,
        clk,
        reset,
        M_instr,
        M_pc,
        M_writeReg,
        M_memData,
        M_aluResult,
        M_valueMDwrite,
        W_instr,
        W_pc,
        W_writeReg,
        W_memData,
        W_aluResult,
        W_valueMDwrite,
        M_cp0Out,
        W_cp0Out
    );
    control W_control (
        W_instr,
        W_instr[25:21],
        W_instr[5:0],
        W_instr[31:26],
        W_aluOrMemWritegrf,
        W_memWriteEn,
        W_instrType,
        W_ALUCtrl,
        W_ALUSrc,
        W_RegDst,
        W_RegWriteEn,
        W_isSignedExtend,
        W_laji1,
        W_laji2,
        W_laji3,
        W_laji4,
        ctrllaji3
    );
    assign W_writeData = (W_instrType == `mfc0) ? (W_cp0Out) :
                     (W_instrType == `mflo || W_instrType == `mfhi) ? (W_valueMDwrite) :
                     (W_instrType == `jal) ? (W_pc + 8) :
                     (W_aluOrMemWritegrf == 1) ? (W_aluResult) :
                     (W_memData);

    CTRLStop ctrlStop (
        D_instr,
        E_writeReg,
        E_RegWriteEn,
        M_writeReg,
        M_RegWriteEn,
        D_TuseRs,
        D_TuseRt,
        E_reg_Tnew,
        M_reg_Tnew,
        E_MD_Tnew,
        D_instrType,
        E_instrType,
        F_pcWE,
        D_reg_en,
        E_clr
    );

endmodule
