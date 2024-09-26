`include "instr_def_h.v"
`include "cpuex_def_h.v"
module ROM(
    input [31:0] addr,
    output [31:0] getInstruction
);
reg [31:0] MemInst [0:4095]; // 能存�024条指令的32位寄存器数组

reg [31:0] result;
reg [31:0] realaddr;
// 12位
initial begin
	 //addr = 0;
    $readmemh("code.txt",MemInst);
end

assign getInstruction = result;
always @(*) begin
	 //MemInst[0] = 32'h341c0000;
     realaddr = addr - 32'h0000_3000;
    result = MemInst[realaddr[31:2]];

    //result = MemInst[addr[11:2]];
	 //$display("this: %h",result);
	 //$monitor(result);
     //3fff
     //11 1111 1111 1111
end
endmodule
