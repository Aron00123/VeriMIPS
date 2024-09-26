`include "instr_def_h.v"
`include "cpuex_def_h.v"
module GRF(
    input [31:0] now_pc,
    input clk,
    input reset,
    input WE,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
);
//
reg [31:0] registers[31:0]; // 寄存器数组的定义�
assign RD1 = (A3 && WE && A3 == A1) ? WD : registers[A1];
assign RD2 = (A3 && WE && A3 == A2) ? WD : registers[A2];

integer i;

initial begin
    for (i = 0;i < 32;i = i + 1) begin
        registers[i] <= 0;
    end
end 

// assign RD1 = (A3 && (A3 == A1)) ? WD : registers[A1]; // 写入非零寄存�&& 要写进去的和


always @(posedge clk) begin
    if (reset) begin
        // 复位
        for (i = 0;i < 32;i = i + 1) begin
            registers[i] <= 0;
        end
    end
    else begin
        if (WE) begin
            if (A3 != 0) begin
                // $display("%d@%h: $%d <= %h",$time,now_pc,A3,WD);
                registers[A3] <= WD;
            end
        end
    end
end
endmodule