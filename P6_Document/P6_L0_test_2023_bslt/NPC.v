`include "InStrType.v"
`timescale 1ns / 1ps

module NPC (
    input [31:0] F_PC,  // F_PC 有初始值
    input D_isBranch,
    input [9:0] D_inStrType,
    input [25:0] D_imm,
    input [31:0] D_RD1,  // jr
    output [31:0] F_nextPC,
    output [31:0] D_PC8  // jal D_PC + 8 / F_PC + 4
);

    wire isBskip;
    wire skip_fail;
    wire [31:0] D_PC;  // jal use it
    reg [31:0] F_nextPC_reg;

    assign skip_fail = !D_isBranch;
    assign isBskip = (D_inStrType == `beq) || (D_inStrType == `bne) || (D_inStrType == `bslt);
    assign D_PC = F_PC - 4;

    always @(*) begin
        if (skip_fail && isBskip) begin
            F_nextPC_reg = F_PC + 4;
        end else begin
            case (D_inStrType)
                `beq: begin
                    F_nextPC_reg = F_PC + {{14{D_imm[15]}}, {D_imm[15:0]}, {2'b00}};
                end
                `bne: begin
                    F_nextPC_reg = F_PC + {{14{D_imm[15]}}, {D_imm[15:0]}, {2'b00}};
                end
                `jr: begin
                    F_nextPC_reg = D_RD1;
                end
                `jal: begin
                    F_nextPC_reg = {{D_PC[31:28]}, {D_imm[25:0]}, {2'b00}};
                end
                `bslt: begin
                    F_nextPC_reg = F_PC + {{14{D_imm[15]}}, {D_imm[15:0]}, {2'b00}};
                end
                default: F_nextPC_reg = F_PC + 4;
            endcase
        end
    end

    assign F_nextPC = F_nextPC_reg;
    assign D_PC8 = D_PC + 8;



endmodule
