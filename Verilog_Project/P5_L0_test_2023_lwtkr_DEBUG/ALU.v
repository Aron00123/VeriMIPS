`timescale 1ns / 1ps

module ALU (
    input  [31:0] ALU_src1,
    input  [31:0] ALU_src2,
    input  [ 2:0] ALU_aluOp,
    output [31:0] E_ALU_result
);

    reg [31:0] E_ALU_result_reg;

    always @(*) begin
        case (ALU_aluOp)
            0: E_ALU_result_reg = ALU_src1 - ALU_src2;
            1: E_ALU_result_reg = ALU_src1 + ALU_src2;
            2: E_ALU_result_reg = ALU_src1 | ALU_src2;
            3: E_ALU_result_reg = ALU_src2 << 16;
        endcase
    end

    assign E_ALU_result = E_ALU_result_reg;


endmodule
