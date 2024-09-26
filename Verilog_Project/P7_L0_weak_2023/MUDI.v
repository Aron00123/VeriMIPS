`include "InStrType.v"
`timescale 1ns / 1ps

module MUDI (
    input intReq,
    input clk,
    input reset,
    input E_isStart,
    input [2:0] MUDI_mudiOp,
    input [9:0] E_inStrType,
    input [31:0] MUDI_src1,
    input [31:0] MUDI_src2,
    output isBusy,
    output [31:0] MUDI_HI,
    output [31:0] MUDI_LO
);

    reg [63:0] MUDI_result_reg;
    reg [31:0] MUDI_HI_reg, MUDI_LO_reg;
    integer count;

    always @(posedge clk) begin
        if (reset) begin
            count = 0;
            MUDI_HI_reg = 0;
            MUDI_LO_reg = 0;
            MUDI_result_reg = 0;
        end else if (intReq) begin
            if (count > 1) begin
                count = count - 1;
            end
            // nothing
        end else if (E_isStart) begin
            case (MUDI_mudiOp)
                0: begin
                    MUDI_result_reg = $signed(MUDI_src1) * $signed(MUDI_src2);
                    MUDI_HI_reg = MUDI_result_reg[63:32];
                    MUDI_LO_reg = MUDI_result_reg[31:0];
                    count = 5;
                end
                1: begin
                    MUDI_result_reg = {1'b0, MUDI_src1} * {1'b0, MUDI_src2};
                    MUDI_HI_reg = MUDI_result_reg[63:32];
                    MUDI_LO_reg = MUDI_result_reg[31:0];
                    count = 5;
                end
                2: begin
                    MUDI_HI_reg = $signed(MUDI_src1) % $signed(MUDI_src2);
                    MUDI_LO_reg = $signed(MUDI_src1) / $signed(MUDI_src2);
                    count = 10;
                end
                3: begin
                    MUDI_HI_reg = {1'b0, MUDI_src1} % {1'b0, MUDI_src2};
                    MUDI_LO_reg = {1'b0, MUDI_src1} / {1'b0, MUDI_src2};
                    count = 10;
                end
                4: begin
                    MUDI_HI_reg = MUDI_src1;
                end
                5: begin
                    MUDI_LO_reg = MUDI_src1;
                end
            endcase
        end else if (count > 0) begin
            count = count - 1;
        end
    end

    assign isBusy  = (count == 0) ? 0 : 1;
    assign MUDI_HI = MUDI_HI_reg;
    assign MUDI_LO = MUDI_LO_reg;


endmodule
