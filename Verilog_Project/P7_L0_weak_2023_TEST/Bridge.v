`include "cpuex_def_h.v"
`include "instr_def_h.v"
module Bridge(
    input [31:0] PrAddr, //pr - processer 处理器
    input [31:0] PrWD, // cpu 要写的数据
    input [3:0] PrByteEn,
    
    input [31:0] TC0_RD,
    input [31:0] TC1_RD,
    input [31:0] DM_RD,
    input [31:0] Int_RD, // 恒为0,装个样子

    output [31:0] PrRD, // cpu 要读的数据 //
    
    output [3:0] IntByteEn_out, //
    output [3:0] DMByteEn_out, //
    output WE_TC0, //
    output WE_TC1, //
    
    output [31:0] PrWD_out, //
    output [31:0] PrAddr_out //
);

wire hitTC0,hitTC1,hitDM,hitInt;
assign hitTC0 = (PrAddr[15:4] == 12'h7f0);
assign hitTC1 = (PrAddr[15:4] == 12'h7f1);
assign hitInt = (PrAddr[15:4] == 12'h7f2); // 这些都按照合法地址来考虑,如果不合法那么在cpu内部M级就会被处理(给字节使能赋0)
assign hitDM = (PrAddr[15:12] == 4'h2 || PrAddr[15:12] == 4'h1 || PrAddr[15:12] == 4'h0);

assign PrWD_out = PrWD;
assign PrAddr_out = PrAddr;


assign IntByteEn_out = hitInt ? PrByteEn : 32'h0;
assign DMByteEn_out = hitDM ? PrByteEn : 32'h0; // 这两行是要区分cpu给的字节使能信号到底是给DM的还是给Int的
assign WE_TC0 = hitTC0 && (&(PrByteEn));
assign WE_TC1 = hitTC1 && (&(PrByteEn));

assign PrRD = hitTC0 ? TC0_RD : 
              hitTC1 ? TC1_RD :
              hitDM ? DM_RD : 
              hitInt ? Int_RD : 32'h0;
endmodule