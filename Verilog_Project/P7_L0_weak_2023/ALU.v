`include "InStrType.v"
`include "ExcType.v"
`timescale 1ns / 1ps

module ALU (
    input  [ 2:0] ALU_aluOp,
    input  [ 9:0] E_inStrType,
    input  [31:0] ALU_src1,
    input  [31:0] ALU_src2,
    output [31:0] E_ALU_result,
    output [ 4:0] E_excCode1
);

    reg [31:0] E_ALU_result_reg;
    wire isLoad, isStore;  // 是否存取类指令
    wire isAddOver, isSubOver;
    wire isAdd, isSub;
    wire [32:0] extendAdd, extendSub;

    assign extendAdd = {ALU_src1[31], ALU_src1} + {ALU_src2[31], ALU_src2};
    assign extendSub = {ALU_src1[31], ALU_src1} - {ALU_src2[31], ALU_src2};
    assign isLoad = (E_inStrType == `lw || E_inStrType == `lh || E_inStrType == `lb);
    assign isStore = (E_inStrType == `sw || E_inStrType == `sh || E_inStrType == `sb);

    assign isAdd = (E_inStrType == `add || E_inStrType == `addi);
    assign isSub = (E_inStrType == `sub);
    assign isAddOver = (extendAdd[32] != extendAdd[31]);
    assign isSubOver = (extendSub[32] != extendSub[31]);

    assign E_excCode1 = (isAddOver && isLoad) ? `L_Exc :
                       (isAddOver && isStore) ? `S_Exc :
                       ((isAddOver && isAdd) || (isSubOver && isSub)) ? `Ov :
                       5'h0;

    always @(*) begin
        case (ALU_aluOp)
            0: E_ALU_result_reg = ALU_src1 - ALU_src2;
            1: E_ALU_result_reg = ALU_src1 + ALU_src2;
            2: E_ALU_result_reg = ALU_src1 | ALU_src2;
            3: E_ALU_result_reg = ALU_src2 << 16;
            4: E_ALU_result_reg = ALU_src1 & ALU_src2;
            5: E_ALU_result_reg = ($signed(ALU_src1) < $signed(ALU_src2)) ? 1 : 0;
            6: E_ALU_result_reg = ({1'b0, ALU_src1} < {1'b0, ALU_src2}) ? 1 : 0;
        endcase
    end

    assign E_ALU_result = E_ALU_result_reg;


endmodule
