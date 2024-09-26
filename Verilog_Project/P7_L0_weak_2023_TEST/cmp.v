`include "cpuex_def_h.v"
`include "instr_def_h.v"
module cmp(
    input [31:0] rsD,
    input [31:0] rtD,
    input [9:0] instrType,
    output isBranch
);

reg [31:0] tempisBranch;
assign isBranch = tempisBranch;

always @(*) begin
    case(instrType)
        `beq: begin
            tempisBranch = (rsD == rtD) ? 1 : 0;
        end
        `bne: begin
            tempisBranch = (rsD != rtD) ? 1 : 0;
        end
        default: begin
            tempisBranch = 0;
        end
    endcase
end
endmodule


