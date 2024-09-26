`include "instr_def_h.v"
`include "cpuex_def_h.v"
module ReadBE( // 给我32位原始寄存器的数据并告诉我需要写入字节，半字还是全字我给你你想要的数
    input [31:0] M_readData,
    input [31:0] M_readAddr,
    input [9:0] M_instrType,
    output [31:0] realRD
);
reg [31:0] temp_realRD;
assign realRD = temp_realRD;

always @(*) begin
    case (M_instrType)
    `lw:begin
        temp_realRD = M_readData;
    end
    `lh:begin
        temp_realRD = (M_readAddr[1] == 0) ? {{16{M_readData[15]}},M_readData[15:0]} : {{16{M_readData[31]}},M_readData[31:16]};
    end
    `lb:begin
        temp_realRD = (M_readAddr[1:0] == 0) ? {{24{M_readData[7]}},M_readData[7:0]} : 
                      (M_readAddr[1:0] == 1) ? {{24{M_readData[15]}},M_readData[15:8]} : 
                      (M_readAddr[1:0] == 2) ? {{24{M_readData[23]}},M_readData[23:16]} : 
                      (M_readAddr[1:0] == 3) ? {{24{M_readData[31]}},M_readData[31:24]} : 32'h0;
    end
    default:begin
        if (M_readAddr < 32'h0000_3000) begin
            temp_realRD = M_readData;
        end
        else begin
            temp_realRD = 0;
        end
    end
    endcase
end
endmodule
