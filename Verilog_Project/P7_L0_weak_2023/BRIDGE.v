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

    wire TC0_isHit, TC1_isHit, DM_isHit, Int_isHit;
    assign TC0_isHit = (PrAddr[15:4] == 12'h7f0);
    assign TC1_isHit = (PrAddr[15:4] == 12'h7f1);
    assign Int_isHit = (PrAddr[15:4] == 12'h7f2); // 这些都按照合法地址来考虑,如果不合法那么在cpu内部M级就会被处理(给字节使能赋0)
    assign DM_isHit = (PrAddr[15:12] == 4'h2 || PrAddr[15:12] == 4'h1 || PrAddr[15:12] == 4'h0);

    assign PrWD_OUT = PrWD;
    assign PrAddr_OUT = PrAddr;


    assign IntByteEn_OUT = Int_isHit ? PrByteEn : 32'h0;
    assign DMByteEn_OUT = DM_isHit ? PrByteEn : 32'h0; // 这两行是要区分cpu给的字节使能信号到底是给DM的还是给Int的
    assign TC0_WE = TC0_isHit && (&(PrByteEn));
    assign TC1_WE = TC1_isHit && (&(PrByteEn));

    assign PrRD = TC0_isHit ? TC0_RD : TC1_isHit ? TC1_RD : DM_isHit ? DM_RD : Int_isHit ? Int_RD : 32'h0;

endmodule
