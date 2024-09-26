`timescale 1ns / 1ps

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

    wire isStall;
    wire E_Stall_RS, E_Stall_RT, M_Stall_RS, M_Stall_RT;
    wire [4:0] D_rs, D_rt;

    assign D_rs = D_inStr[25:21];
    assign D_rt = D_inStr[20:16];

    assign E_Stall_RS = (E_writeReg_NUM == D_rs && D_rs != 0) && (D_TuseRs < E_Tnew) && E_writeReg_EN;
    assign E_Stall_RT = (E_writeReg_NUM == D_rt && D_rt != 0) && (D_TuseRt < E_Tnew) && E_writeReg_EN;

    assign M_Stall_RS = (M_writeReg_NUM == D_rs && D_rs != 0) && (D_TuseRs < M_Tnew) && M_writeReg_EN;
    assign M_Stall_RT = (M_writeReg_NUM == D_rt && D_rt != 0) && (D_TuseRt < M_Tnew) && M_writeReg_EN;

    assign Stall_MUDI = E_start || E_busy;

    assign isStall = E_Stall_RS | E_Stall_RT | M_Stall_RS | M_Stall_RT | Stall_MUDI;

    assign IFU_STALL = isStall;
    assign D_REG_STALL = isStall;
    assign E_REG_STALL = isStall;

endmodule
