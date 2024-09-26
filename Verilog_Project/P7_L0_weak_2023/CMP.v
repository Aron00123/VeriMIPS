`include "InStrType.v"
`timescale 1ns / 1ps

module CMP (
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [9:0] D_inStrType,
    output isBranch
);

    reg isBranch_reg;
    assign isBranch = isBranch_reg;

    always @(*) begin
        case (D_inStrType)
            `beq: begin
                isBranch_reg = (D_RD1 == D_RD2) ? 1 : 0;
            end
            `bne: begin
                isBranch_reg = (D_RD1 != D_RD2) ? 1 : 0;
            end
            default: begin
                isBranch_reg = 0;
            end
        endcase
    end

endmodule
