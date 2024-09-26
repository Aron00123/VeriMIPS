`include "InStrType.v"
`timescale 1ns / 1ps

module mips (
    input clk,
    input reset,
    input interrupt,  // 外部中断信号
    output [31:0] macroscopic_pc,  // 宏观 PC 

    output [31:0] i_inst_addr,  // F级PC
    input  [31:0] i_inst_rdata, // F级对应指令

    output [31:0] m_data_addr,   // DM写入地址
    input  [31:0] m_data_rdata,  // DM到空壳数据
    output [31:0] m_data_wdata,  // DM写入数据
    output [ 3:0] m_data_byteen, // DM写使能

    output [31:0] m_int_addr,   // 中断发生器待写入地址
    output [ 3:0] m_int_byteen, // 中断发生器字节使能信号

    output [31:0] m_inst_addr,  // M级PC

    output w_grf_we,  // GRF写使能
    output [4:0] w_grf_addr,  // GRF写寄存器编号
    output [31:0] w_grf_wdata,  // GRF写入数据

    output [31:0] w_inst_addr  // W级PC
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

    /*
    module CPU (
        input clk,
        input reset,
        input [5:0] intReq,
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
        output [31:0] w_inst_addr,  // W级PC
        output [31:0] macro_PC
    );
    */

    CPU cpu (
        .clk(clk),
        .reset(reset),
        .intReq(intReq),
        .i_inst_rdata(i_inst_rdata),
        .m_data_rdata(PrRD),
        .i_inst_addr(i_inst_addr),
        .m_data_addr(PrAddr),
        .m_data_wdata(PrWD),
        .m_data_byteen(PrByteEn),
        .m_inst_addr(m_inst_addr),
        .w_grf_we(w_grf_we),
        .w_grf_addr(w_grf_addr),
        .w_grf_wdata(w_grf_wdata),
        .w_inst_addr(w_inst_addr),
        .macro_PC(single_pc)
    );

    /*
    module BRIDGE (
        input [31:0] PrAddr,  // processer
        input [31:0] PrWD,  // cpu 要写的数据
        input [3:0] PrByteEn,

        input [31:0] TC0_RD,
        input [31:0] TC1_RD,
        input [31:0] DM_RD,
        input [31:0] Int_RD,  // 恒为0

        output [31:0] PrRD,  // cpu 要读的数据

        output [3:0] IntByteEn_OUT,
        output [3:0] DMByteEn_OUT,
        
        output TC0_WE,
        output TC1_WE,

        output [31:0] PrWD_OUT,
        output [31:0] PrAddr_OUT
    );
    */

    BRIDGE bridge (
        .PrAddr(PrAddr),
        .PrWD(PrWD),
        .PrByteEn(PrByteEn),
        .TC0_RD(TC0_data),
        .TC1_RD(TC1_data),
        .DM_RD(m_data_rdata),
        .Int_RD(32'h0),
        .PrRD(PrRD),
        .IntByteEn_OUT(m_int_byteen),
        .DMByteEn_OUT(m_data_byteen),
        .TC0_WE(TC0_WE),
        .TC1_WE(TC1_WE),
        .PrWD_OUT(PrWD_out),
        .PrAddr_OUT(PrAddr_out)
    );

    /*
    module TC (
        input clk,
        input reset,
        input [31:2] Addr,
        input WE,
        input [31:0] Din,
        output [31:0] Dout,
        output IRQ
    );
    */

    TC TC0 (
        .clk(clk),
        .reset(reset),
        .Addr(PrAddr_out[31:2]),
        .WE(TC0_WE),
        .Din(PrWD_out),
        .Dout(TC0_data),
        .IRQ(TC0_req)
    );

    TC TC1 (
        .clk(clk),
        .reset(reset),
        .Addr(PrAddr_out[31:2]),
        .WE(TC1_WE),
        .Din(PrWD_out),
        .Dout(TC1_data),
        .IRQ(TC1_req)
    );



endmodule
