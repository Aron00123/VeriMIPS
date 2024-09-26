`timescale 1ns / 1ps

module EXT (
    input  [25:0] EXT_imm,
    input  [ 1:0] EXT_extOp,
    output [31:0] D_extResult
);

    reg [31:0] D_extResult_reg;

    always @(*) begin
        case (EXT_extOp)
            2'b00:   D_extResult_reg = {16'b0, EXT_imm[15:0]};
            2'b01:   D_extResult_reg = {{16{EXT_imm[15]}}, EXT_imm[15:0]};
            default: D_extResult_reg = 0;
        endcase
    end

    assign D_extResult = D_extResult_reg;

endmodule
