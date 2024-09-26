`include "instr_def_h.v"
`include "cpuex_def_h.v"
module W_Reg(
    input intReq,
    input clk,
    input reset,
    input [31:0] M_instr,
    input [31:0] M_pc,
    input [4:0] M_writeReg,
    input [31:0] M_memData,
    input [31:0] M_aluResult,
    input [31:0] M_valueMDwrite,
    output [31:0] W_instr,
    output [31:0] W_pc,
    output [4:0] W_writeReg,
    output [31:0] W_memData,
    output [31:0] W_aluResult,
    output [31:0] W_valueMDwrite,
    
    input [31:0] M_cp0Out,
    output [31:0] W_cp0Out
);
    // define temp used to pass value
    reg [31:0] temp_cp0Out,temp_instr,temp_pc,temp_memData,temp_aluResult,temp_valueMDwrite;
    reg [4:0] temp_writeReg;
    // define temp used to pass value

    assign W_instr = temp_instr;
    assign W_pc = temp_pc;
    assign W_writeReg = temp_writeReg;
    assign W_memData = temp_memData;
    assign W_aluResult = temp_aluResult;
    assign W_valueMDwrite = temp_valueMDwrite;
    assign W_cp0Out = temp_cp0Out;

    always @(posedge clk) begin
        if(reset | intReq) begin // W 级清空不需要保持pc
            temp_instr <= 0;
            temp_pc <= 0;
            temp_writeReg <= 0;
            temp_memData <= 0;
            temp_aluResult <= 0;
            temp_valueMDwrite <= 0;
            temp_cp0Out <= 0;
        end
        else begin
            temp_instr <= M_instr;
            temp_pc <= M_pc;
            temp_writeReg <= M_writeReg;
            temp_memData <= M_memData;
            temp_aluResult <= M_aluResult;
            temp_valueMDwrite <= M_valueMDwrite;
            temp_cp0Out <= M_cp0Out;
        end
    end
endmodule