`timescale 1ns / 1ps

module EXT (
    input [15:0] imm,
    input extOp,  // 0 0_extend, 1 sign_extend
    output [31:0] extResult
);

    reg [31:0] extResult_reg;
    assign extResult = extResult_reg;

    always @(*) begin
        case (extOp)
            0: extResult_reg = {16'b0, imm};
            1: extResult_reg = {{16{imm[15]}}, imm};
            default: extResult_reg = 0;
        endcase
    end

endmodule
