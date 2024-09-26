`timescale 1ns / 1ps

// transition

module transMUX_rd (
    input [31:0] grfOut,
    input [31:0] M_result,
    input [4:0] D_readReg,
    input M_regWrite,
    input [4:0] M_writeReg,
    output [31:0] rightData
);
    assign rightData = (M_writeReg != 0 && M_writeReg == D_readReg && M_regWrite) ? M_result : grfOut;
endmodule

module transMUX_aluSrc (
    input [31:0] rd,
    input [31:0] M_aluResult,
    input [31:0] W_writeData,
    input [4:0] E_readReg,
    input [4:0] M_writeReg,
    input [4:0] W_writeReg,
    input M_RegWriteEn,
    input W_RegWriteEn,
    output [31:0] rightData
);
    // M 转发优先级最高
    assign rightData = (M_writeReg != 0 && M_writeReg == E_readReg && M_RegWriteEn) ? (M_aluResult) :
                   (W_writeReg != 0 && W_writeReg == E_readReg && W_RegWriteEn) ? (W_writeData) :
                   (rd);
endmodule

module transMUX_memWriteData (
    input [31:0] M_rd2,
    input [31:0] W_writeData,
    input [4:0] M_readReg,
    input W_RegWriteEn,
    input [4:0] W_writeReg,
    output [31:0] rightData
);
    assign rightData = (W_writeReg != 0 && W_writeReg == M_readReg && W_RegWriteEn) ? W_writeData : M_rd2;
endmodule

// normal

module mux32Bit_2 (
    input [31:0] mux32b2Src1,
    input [31:0] mux32b2Src2,
    input sel32bit2,
    output [31:0] mux32b2Result
);

    reg [31:0] mux32b2_tmp;

    always @(*) begin
        case (sel32bit2)
            0: mux32b2_tmp = mux32b2Src1;
            1: mux32b2_tmp = mux32b2Src2;
        endcase
    end

    assign mux32b2Result = mux32b2_tmp;

endmodule

module mux5Bit_3 (
    input  [4:0] mux5b3Src1,
    input  [4:0] mux5b3Src2,
    input  [4:0] mux5b3Src3,
    input  [1:0] sel5bit3,
    output [4:0] mux5b3Result
);

    reg [4:0] mux5b3_tmp;

    always @(*) begin
        case (sel5bit3)
            0: mux5b3_tmp = mux5b3Src1;
            1: mux5b3_tmp = mux5b3Src2;
            2: mux5b3_tmp = mux5b3Src3;
        endcase
    end

    assign mux5b3Result = mux5b3_tmp;

endmodule

module mux32Bit_3 (
    input  [31:0] mux32b3Src1,
    input  [31:0] mux32b3Src2,
    input  [31:0] mux32b3Src3,
    input  [ 1:0] sel32bit3,
    output [31:0] mux32b3Result
);

    reg [31:0] mux32b3_tmp;

    always @(*) begin
        case (sel32bit3)
            0: mux32b3_tmp = mux32b3Src1;
            1: mux32b3_tmp = mux32b3Src2;
            2: mux32b3_tmp = mux32b3Src3;
        endcase
    end

    assign mux32b3Result = mux32b3_tmp;

endmodule


