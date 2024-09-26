`include "instr_def_h.v"
`include "cpuex_def_h.v"
/*
`define L_adEx 5'h4
`define S_adEx 5'h5
`define Syscall 5'h8
`define undefinstr 5'ha
`define Ov 5'hc
*/
module MExCheck(
    input [9:0] M_instrType,
    input [4:0] M_writeReg, // 不需要写使能,因为会通过M_instrType判断指令类型,这里包含写使�
    input [31:0] M_aluResult,
    output [4:0] M_exCode // 异常码用5位记�
);
// 按照之前无异常处�因为如果�输出端口输出什么都不重要了
reg [4:0] temp_exCode;

wire islw,islh,islb,issw,issh,issb;
wire hitTC,hitCount,isaddrOv; // 是否以TC为存取地址、是否以count为存取地址
wire [1:0] byte;
assign byte = M_aluResult[1:0];

assign M_exCode = temp_exCode;

assign islw = (M_instrType == `lw);
assign islh = (M_instrType == `lh);
assign islb = (M_instrType == `lb);
assign issw = (M_instrType == `sw);
assign issh = (M_instrType == `sh);
assign issb = (M_instrType == `sb);

assign isaddrOv = !(M_aluResult < 32'h0000_3000 ||
                    (M_aluResult <= 32'h0000_7f0b && M_aluResult >= 32'h0000_7f00) ||
                    (M_aluResult <= 32'h0000_7f1b && M_aluResult >= 32'h0000_7f10) || 
                    (M_aluResult <= 32'h0000_7f23 && M_aluResult >= 32'h0000_7f20));
assign hitTC = (M_aluResult[15:4] == 12'h7f0 || M_aluResult[15:4] == 12'h7f1);
assign hitCount = (hitTC && (M_aluResult[3:0] == 4'h8));

always @(*) begin
    if ((islw && byte != 2'b0) || // lw未对�
        (islh && (byte == 2'b01 || byte == 2'b11)) || // lh未对�
        ((islb || islh) && hitTC) || // 残字存TC
        ((islw || islh || islb) && isaddrOv)) // 存数据地址越界 
        begin 
        temp_exCode = 5'h4;
    end
    else if ((issw && byte != 2'b0) || 
             (issh && (byte == 2'b01 || byte == 2'b11)) ||
             ((issb || issh) && hitTC) || 
             ((issw || issh || issb) && isaddrOv) ||
             (issw && hitCount)) begin // 想写TC的count寄存�
        temp_exCode = 5'h5;
    end
    else begin
        temp_exCode = 5'h0;
    end
end
















endmodule


