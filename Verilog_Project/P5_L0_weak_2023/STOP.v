`timescale 1ns / 1ps

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

    wire isStop, isStopRs, isStopRt;
    wire [4:0] D_rs, D_rt;

    assign D_rs = D_inStr[25:21];
    assign D_rt = D_inStr[20:16];

    assign isStopRs = (D_TuseRs < E_Tnew && E_writeReg && E_writeReg == D_rs && E_regWrite) || // E 来不及 && 读写(确定能写)同一 && 不写$0
        (D_TuseRs < M_Tnew && M_writeReg && M_writeReg == D_rs && M_regWrite);  // M

    assign isStopRt = (D_TuseRt < E_Tnew && E_writeReg && E_writeReg == D_rt && E_regWrite) || // E 
        (D_TuseRt < M_Tnew && M_writeReg && M_writeReg == D_rt && M_regWrite);  // M

    assign isStop = isStopRs | isStopRt;

    assign F_pcWE = !isStop;
    assign D_regWE = !isStop;
    assign E_regclr = isStop;

endmodule
