`timescale 1ns / 1ps

module ALU (
    input [31:0] Src1,
    input [31:0] Src2,
    input [2:0] aluOp,
    output isEqual,
    output [31:0] result
);

    reg [31:0] result_reg;
    assign result  = result_reg;
    assign isEqual = Src1 == Src2;

    always @(*) begin
        case (aluOp)
            0: result_reg = Src1 - Src2;
            1: result_reg = Src1 + Src2;
            2: result_reg = Src1 | Src2;
            3: result_reg = Src2 << 16;
        endcase
    end


endmodule
