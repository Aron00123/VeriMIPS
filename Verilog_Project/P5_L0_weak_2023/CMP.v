`include "inStrType.v"
`timescale 1ns / 1ps

module CMP (
    input [31:0] D_rs,
    input [31:0] D_rt,
    input [9:0] inStrType,
    output isBranch  // B-type branch
);

    reg [31:0] tempisBranch;
    assign isBranch = tempisBranch;

    always @(*) begin
        case (inStrType)
            `beq: begin
                tempisBranch = (D_rs == D_rt) ? 1 : 0;
            end
            `bne: begin
                tempisBranch = (D_rs != D_rt) ? 1 : 0;
            end
            default: begin
                tempisBranch = 0;
            end
        endcase
    end
endmodule
