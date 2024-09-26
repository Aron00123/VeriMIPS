`timescale 1ns / 1ps

module M_REG (
    input clk,
    input reset,
    input [31:0] E_inStr,
    input [31:0] E_PC,
    input [4:0] E_writeReg,  // writeReg 写寄存器编号
    input [31:0] E_result,
    input [31:0] E_RD2,
    output [31:0] M_inStr,
    output [31:0] M_PC,
    output [4:0] M_writeReg,  // register 写寄存器编号
    output [31:0] M_result,
    output [31:0] M_RD2
);

    reg [31:0] temp_inStr, temp_PC, temp_result, temp_RD2;
    reg [4:0] temp_writeReg;

    always @(posedge clk) begin
        if (reset) begin
            temp_inStr <= 0;
            temp_PC <= 0;
            temp_writeReg <= 0;
            temp_result <= 0;
            temp_RD2 <= 0;
        end else begin
            temp_inStr <= E_inStr;
            temp_PC <= E_PC;
            temp_writeReg <= E_writeReg;
            temp_result <= E_result;
            temp_RD2 <= E_RD2;
        end
    end

    assign M_inStr = temp_inStr;
    assign M_PC = temp_PC;
    assign M_writeReg = temp_writeReg;
    assign M_result = temp_result;
    assign M_RD2 = temp_RD2;

endmodule
