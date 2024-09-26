`include "instr_def_h.v"
`include "cpuex_def_h.v"
module RAM(
    input [31:0] now_pc,
    input [31:0] addr,
    input [31:0] data,
    input clk,
    input reset,
    input isWD,
    output [31:0] ram_out
);

reg [31:0] datas[0:4095]; // 定义1024个32位寄存器,数据存储在pc初始地址之前,计算下来就是能存2的12次方个位,除以4就是2的10次方个字，就是1024个数据
integer i;

initial begin
    for(i = 0;i < 4096;i = i + 1) begin
        datas[i] = 0;
    end
end

always @(posedge clk) begin
    if (reset) begin
        // clear all datas
        for(i = 0;i < 4096;i = i + 1) begin
            datas[i] <= 0;
        end
    end
    else begin
        if (isWD) begin
            // $display("%d@%h: *%h <= %h",$time,now_pc,addr,data);
            datas[addr[31:2]] <= data;
        end
        else begin
            // null
        end
    end
end

assign ram_out = datas[addr[31:2]];
endmodule