`include "instr_def_h.v"
`include "cpuex_def_h.v"
module IFU(
    input intReq,
    input [31:0] next_pc,
    input clk,
    input reset,
    input pcWE,
    //output [31:0] getInstruction,
    output [31:0] pc_out,
    
    output [4:0] F_exCode
);

reg [31:0] pc;

assign pc_out = pc;
assign F_exCode = ((pc[1:0] == 2'b0) && (pc <= 32'h0000_6ffc && pc >= 32'h0000_3000)) ? 5'b0 : 5'h4;

always @(posedge clk) begin
    if(reset) begin
        pc <= 32'h00003000;
    end
    else if(intReq) begin
        pc <= 32'h0000_4180;
    end
    else begin
        if (pcWE) begin
            pc <= next_pc;
        end
    end
end
endmodule
