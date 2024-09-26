`include "instr_def_h.v"
`include "cpuex_def_h.v"
module CTRLStop(
    input [31:0] D_instr, // 包含D级指令要用的两个寄存器编�
    //input [31:0] E_instr,
    input [4:0] E_writeReg,
    input E_RegWriteEn,
    //input [31:0] M_instr,
    input [4:0] M_writeReg,
    input M_RegWriteEn,
    input [1:0] D_TuseRs,
    input [1:0] D_TuseRt,
    input [1:0] E_Tnew,
    input [1:0] M_Tnew, // W 级Tnew一定为0,不需要考虑
    input [31:0] E_MD_Tnew,
    input [9:0] D_instrType,
    input [9:0] E_instrType,
    output F_pc_en,
    output D_reg_en,
    output E_reg_clr
);
wire isStop,isStopRs,isStopRt,isStopEpc;
wire [4:0] D_rs,D_rt;
assign {D_rs,D_rt} = {D_instr[25:21],D_instr[20:16]}; // 如果rs / rt 部分是不需要读�那么在传进来Tuse时即将其设置为较大的数以确保不会因为不需要读的东西而引起暂�

assign isStopRs = (D_TuseRs < E_Tnew && E_writeReg && E_writeReg == D_rs && E_RegWriteEn) || // E 来不�&& 读写(确定能写)同一 && 不写$0
                  (D_TuseRs < M_Tnew && M_writeReg && M_writeReg == D_rs && M_RegWriteEn);   // M

assign isStopRt = (D_TuseRt < E_Tnew && E_writeReg && E_writeReg == D_rt && E_RegWriteEn) || // E 
                  (D_TuseRt < M_Tnew && M_writeReg && M_writeReg == D_rt && M_RegWriteEn);   // M

assign isStopEpc = (D_instrType == `eret && ((E_instrType == `mtc0 && E_writeReg == 5'd14))); // M级是mtc0的时候不阻塞,cp0内部实现内部转发
// 这时候mtc0想写的值可能都还不知道,所以等一个周期
//assign isStop = isStopRs | isStopRt | (E_isbusy || (E_instrType == `mult || E_instrType == `multu || E_instrType == `div || E_instrType == `divu));
assign isStop = isStopEpc | isStopRs | isStopRt | ((E_MD_Tnew > 1 || (E_instrType == `mult || E_instrType == `multu || E_instrType == `div || E_instrType == `divu)) && (D_instrType == `mfhi || D_instrType == `mflo || D_instrType == `mtlo || D_instrType == `mthi));
// 前面正忙,后面嗷嗷待哺,就需要暂停
assign F_pc_en = !isStop;
assign D_reg_en = !isStop;
assign E_reg_clr = isStop;

endmodule