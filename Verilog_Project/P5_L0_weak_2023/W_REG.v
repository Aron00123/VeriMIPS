`timescale 1ns / 1ps

module W_REG (
    input clk,
    input reset,
    input [31:0] M_inStr,
    input [31:0] M_PC,
    input [4:0] M_writeReg,  // writeReg 写寄存器编号
    input [31:0] M_dataOut,  // DM输出
    input [31:0] M_result,
    output [31:0] W_inStr,
    output [31:0] W_PC,
    output [4:0] W_writeReg,
    output [31:0] W_dataOut,  // DM输出
    output [31:0] W_result
);
    reg [31:0] temp_inStr, temp_PC, temp_dataOut, temp_result;
    reg [4:0] temp_writeReg;

    always @(posedge clk) begin
        if (reset) begin
            temp_inStr <= 0;
            temp_PC <= 0;
            temp_writeReg <= 0;
            temp_dataOut <= 0;
            temp_result <= 0;
        end else begin
            temp_inStr <= M_inStr;
            temp_PC <= M_PC;
            temp_writeReg <= M_writeReg;
            temp_dataOut <= M_dataOut;
            temp_result <= M_result;
        end
    end

    assign W_inStr = temp_inStr;
    assign W_PC = temp_PC;
    assign W_writeReg = temp_writeReg;
    assign W_dataOut = temp_dataOut;
    assign W_result = temp_result;


endmodule
