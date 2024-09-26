`include "InStrType.v"
`timescale 1ns / 1ps

module CMP (
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [9:0] D_inStrType,
    output isBranch,
    output flush
);

    reg isBranch_reg;
    reg [31:0] temp;

    always @(*) begin
        case (D_inStrType)
            `beq: begin
                isBranch_reg = (D_RD1 == D_RD2) ? 1 : 0;
            end
            `bsveall: begin
                temp = ($signed(D_RD1) < $signed(D_RD2)) ? D_RD1 : D_RD2;
                isBranch_reg = (temp[0] == 0) ? 1 : 0;
            end
            default: begin
                isBranch_reg = 0;
            end
        endcase
    end

    assign isBranch = isBranch_reg;
    assign flush = (D_inStrType == `bsveall) && !isBranch;

endmodule
