`include "instr_def_h.v"
`include "cpuex_def_h.v"
module mips (
    input         clk,            // 时钟信号
    input         reset,          // 同步复位信号
    input         interrupt,      // 外部中断信号                     NEW
    output [31:0] macroscopic_pc, // 宏观 PC                         NEW

    output [31:0] i_inst_addr,  // IM 读取地址（取�PC�
    input  [31:0] i_inst_rdata, // IM 读取数据

    output [31:0] m_data_addr,  // DM 读写地址
    input [31:0] m_data_rdata,  // DM 读取数据 , DM传进微系�在内部直接连到bridge�
    output [31:0] m_data_wdata,  // DM 待写入数�
    output [3 : 0] m_data_byteen,  // DM 字节使能信号

    output [ 31:0] m_int_addr,   // 中断发生器待写入地址             NEW
    output [3 : 0] m_int_byteen, // 中断发生器字节使能信�          NEW

    output [31:0] m_inst_addr,  // M �PC

    output         w_grf_we,    // GRF 写使能信�
    output [4 : 0] w_grf_addr,  // GRF 待写入寄存器编号
    output [ 31:0] w_grf_wdata, // GRF 待写入数�

    output [31:0] w_inst_addr  // W �PC
);

    wire [31:0] PrAddr, PrAddr_out, PrWD, PrWD_out, TC0_data, TC1_data, PrRD;
    wire [31:0] single_pc;
    wire [ 5:0] intReq;
    wire [ 3:0] PrByteEn;
    wire TC0_WE, TC1_WE;
    wire TC0_req, TC1_req;

    assign m_data_wdata = PrWD_out;
    assign macroscopic_pc = single_pc;
    assign m_int_addr = PrAddr_out;
    assign m_data_addr = PrAddr_out;

    assign intReq = {1'b0, 1'b0, 1'b0, interrupt, TC1_req, TC0_req};

    CPU cpu (
        intReq,
        clk,
        reset,
        i_inst_rdata,
        PrRD,
        i_inst_addr,
        PrAddr,
        PrWD,
        PrByteEn,
        m_inst_addr,
        w_grf_we,
        w_grf_addr,
        w_grf_wdata,
        w_inst_addr,
        single_pc
    );

    Bridge bridge (
        PrAddr,
        PrWD,
        PrByteEn,
        TC0_data,
        TC1_data,
        m_data_rdata,
        32'h0,
        PrRD,
        m_int_byteen,
        m_data_byteen,
        TC0_WE,
        TC1_WE,
        PrWD_out,
        PrAddr_out
    );

    TC TC0 (
        clk,
        reset,
        PrAddr_out[31:2],
        TC0_WE,
        PrWD_out,
        TC0_data,
        TC0_req
    );
    TC TC1 (
        clk,
        reset,
        PrAddr_out[31:2],
        TC1_WE,
        PrWD_out,
        TC1_data,
        TC1_req
    );

endmodule
