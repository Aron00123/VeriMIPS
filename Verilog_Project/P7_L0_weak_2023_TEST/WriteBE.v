`include "instr_def_h.v"
`include "cpuex_def_h.v"
module WriteBE( // 给我32位原始寄存器的数据并告诉我需要写入字节，半字还是全字我给你你想要的数
    input [31:0] M_writeData,
    input [9:0] M_instrType,
    output [31:0] realWD
);

reg [31:0] temp_realWD;
assign realWD = temp_realWD;
always @(*) begin
    case(M_instrType) 
    `sw:begin
        temp_realWD = M_writeData;
    end
    `sh:begin
        temp_realWD = {M_writeData[15:0],M_writeData[15:0]};
    end
    `sb:begin
        temp_realWD = {M_writeData[7:0],M_writeData[7:0],M_writeData[7:0],M_writeData[7:0]};
    end
    default:begin
        temp_realWD = M_writeData;
    end
    endcase
end
endmodule


