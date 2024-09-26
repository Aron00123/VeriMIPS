`timescale 1ns / 1ps

module E_REG (
    input clk,
    input reset,
    input clr,
    input [31:0] D_inStr,
    input [31:0] D_PC,
    input [4:0] D_writeReg,  // writeReg 写寄存器编号
    input [31:0] D_RD1,
    input [31:0] D_RD2,
    input [31:0] D_extResult,
    output [31:0] E_inStr,
    output [31:0] E_PC,
    output [4:0] E_writeReg,  // register 写寄存器编号
    output [31:0] E_RD1,
    output [31:0] E_RD2,
    output [31:0] E_extResult
);

    reg [31:0] temp_inStr, temp_PC, temp_RD1, temp_RD2, temp_extResult;
    reg [4:0] temp_writeReg;

    always @(posedge clk) begin
        if (reset | clr) begin
            temp_inStr <= 0;
            temp_PC <= 0;
            temp_writeReg <= 0;
            temp_RD1 <= 0;
            temp_RD2 <= 0;
            temp_extResult <= 0;
        end else begin
            temp_inStr <= D_inStr;
            temp_PC <= D_PC;
            temp_writeReg <= D_writeReg;
            temp_RD1 <= D_RD1;
            temp_RD2 <= D_RD2;
            temp_extResult <= D_extResult;
        end
    end

    assign E_inStr = temp_inStr;
    assign E_PC = temp_PC;
    assign E_writeReg = temp_writeReg;
    assign E_RD1 = temp_RD1;
    assign E_RD2 = temp_RD2;
    assign E_extResult = temp_extResult;

endmodule
