`include "instr_def_h.v"
`include "cpuex_def_h.v"
module getByteEn( // 给我32位原始寄存器的数据并告诉我需要写入字节，半字还是全字我给你你想要的数
    input [31:0] M_writeAddr,
    input [9:0] M_instrType,
    input M_memWriteEn,
    output [3:0] byteEnOut
);

reg [3:0] tempByteEnOut;
assign byteEnOut = tempByteEnOut;


always @(*) begin
    if (M_memWriteEn == 0) begin
        tempByteEnOut = 0; // 写使能就是0,啥都不写直接4位全给0
    end
    else begin // 可以写,然后具体看看写哪些位上
        case(M_instrType) 
        `sw : begin
            tempByteEnOut = 4'b1111;
        end
        `sh : begin
            tempByteEnOut = (M_writeAddr[1] == 1) ? 4'b1100 : 4'b0011;
        end
        `sb : begin
            tempByteEnOut = (M_writeAddr[1:0] == 3) ? 4'b1000 : 
                            (M_writeAddr[1:0] == 2) ? 4'b0100 : 
                            (M_writeAddr[1:0] == 1) ? 4'b0010 : 
                            (M_writeAddr[1:0] == 0) ? 4'b0001 : 
                            0 ;// 凑个数
        end
        endcase
    end
end
endmodule


