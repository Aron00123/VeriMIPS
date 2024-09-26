`include "InStrType.v"
`include "ExcType.v"
`timescale 1ns / 1ps
 
module MCHECK(
    input [9:0] M_inStrType,
    input [31:0] M_aluResult,
    output [4:0] M_excCode // 异常码用5位记�
);

    reg [4:0] temp_excCode;

    wire islw,islh,islb,issw,issh,issb;
    wire hitTC,hitCount,isaddrOv; // 是否以TC为存取地址、是否以count为存取地址
    wire [1:0] byte;
    assign byte = M_aluResult[1:0];

    assign M_excCode = temp_excCode;

    assign islw = (M_inStrType == `lw);
    assign islh = (M_inStrType == `lh);
    assign islb = (M_inStrType == `lb);
    assign issw = (M_inStrType == `sw);
    assign issh = (M_inStrType == `sh);
    assign issb = (M_inStrType == `sb);

    assign isaddrOv = !(M_aluResult < 32'h0000_3000 ||
                        (M_aluResult <= 32'h0000_7f0b && M_aluResult >= 32'h0000_7f00) ||
                        (M_aluResult <= 32'h0000_7f1b && M_aluResult >= 32'h0000_7f10) || 
                        (M_aluResult <= 32'h0000_7f23 && M_aluResult >= 32'h0000_7f20));
    assign hitTC = (M_aluResult[15:4] == 12'h7f0 || M_aluResult[15:4] == 12'h7f1);
    assign hitCount = (hitTC && (M_aluResult[3:0] == 4'h8));

    always @(*) begin
        if ((islw && byte != 2'b0) || // lw未对齐
            (islh && (byte == 2'b01 || byte == 2'b11)) || // lh未对齐
            ((islb || islh) && hitTC) || // 残字存TC
            ((islw || islh || islb) && isaddrOv)) // 存数据地址越界 
            begin 
            temp_excCode = 5'h4;
        end
        else if ((issw && byte != 2'b0) || 
                (issh && (byte == 2'b01 || byte == 2'b11)) ||
                ((issb || issh) && hitTC) || 
                ((issw || issh || issb) && isaddrOv) ||
                (issw && hitCount)) begin // 想写TC的count寄存器
            temp_excCode = 5'h5;
        end
        else begin
            temp_excCode = 5'h0;
        end
    end

endmodule