`include "instr_def_h.v"
`include "cpuex_def_h.v"
module EXT(
    input [15:0] in,
    input extend_signal,
    output [31:0] out
);

reg [31:0] result;
assign out = result;
//assign out = re;
always @(*) begin
    case(extend_signal)
        0: begin
            result = {16'b0,in};
        end
        1: begin
            result = {{16{in[15]}},in};
        end
    endcase
end
endmodule


