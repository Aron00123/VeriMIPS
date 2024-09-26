`include "instr_def_h.v"
`include "cpuex_def_h.v"
module transMUX_rd(
    input [31:0] grfOut,
    input [31:0] M_aluResult,
    input [4:0] D_readReg,
    input M_RegWriteEn,
    input [4:0] M_writeReg,
    output [31:0] rightData
);
assign rightData = (M_writeReg != 0 && M_writeReg == D_readReg && M_RegWriteEn) ? M_aluResult : grfOut;
endmodule

module transMUX_aluSrc(
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
// M 转发优先级最�
assign rightData = (M_writeReg != 0 && M_writeReg == E_readReg && M_RegWriteEn) ? (M_aluResult) :
                   (W_writeReg != 0 && W_writeReg == E_readReg && W_RegWriteEn) ? (W_writeData) :
                   (rd);
endmodule

module transMUX_memWriteData(
    input [31:0] M_rd2,
    input [31:0] W_writeData,
    input [4:0] M_readReg,
    input W_RegWriteEn,
    input [4:0] W_writeReg,
    output [31:0] rightData
);
assign rightData = (W_writeReg != 0 && W_writeReg == M_readReg && W_RegWriteEn) ? W_writeData : M_rd2;
endmodule


module mux32bit_2(
    input op,
    input [31:0] in0,
    input [31:0] in1,
    output [31:0] out
);
reg [31:0] temp;
assign out = temp;
always @(*) begin
    case (op) 
        0: temp = in0;
        1: temp = in1;
    endcase
end
endmodule

module mux32bit_8(
    input [2:0] op,
    input [31:0] in0,
    input [31:0] in1,
    input [31:0] in2,
    input [31:0] in3,
    input [31:0] in4,
    input [31:0] in5,
    input [31:0] in6,
    input [31:0] in7,
    output [31:0] out
);
reg [31:0] temp;
assign out = temp;
always @(*) begin
    case (op) 
        0: temp = in0;
        1: temp = in1;
        2: temp = in2;
        3: temp = in3;
        4: temp = in4;
        5: temp = in5;
        6: temp = in6;
        7: temp = in7;
    endcase
end
endmodule


module mux5bit_2(
    input op,
    input [4:0] in0,
    input [4:0] in1,
    output [4:0] out
);
reg [4:0] temp;
assign out = temp;
always @(*) begin
    case (op) 
        0: temp = in0;
        1: temp = in1;
    endcase
end
endmodule

module mux3bit_2(
    input op,
    input [2:0] in0,
    input [2:0] in1,
    output [2:0] out
);
reg [2:0] temp;
assign out = temp;
always @(*) begin
    case (op) 
        0: temp = in0;
        1: temp = in1;
    endcase
end
endmodule


module mux1bit_2(
    input op,
    input in0,
    input in1,
    output out
);
reg temp;
assign out = temp;
always @(*) begin
    case (op) 
        0: temp = in0;
        1: temp = in1;
    endcase
end
endmodule



