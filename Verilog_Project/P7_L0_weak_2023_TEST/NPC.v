`include "instr_def_h.v"
`include "cpuex_def_h.v"
module NPC(
    input [31:0] M_cp0_epc,
    input [31:0] pc,
    input [31:0] skip_key_value,
    input [9:0] instrType, // 根据指令计算下一个地址
    input isBranch,
    output [31:0] next_pc
);
// NPC中列举出所有跳转类型,至于精确判断哪个是应该用的跳转类型的工作,则由外层模块完成并作为参数传递进来
reg [31:0] result;
assign next_pc = result;
assign isNotSkip = (instrType != `eret && instrType != `beq && instrType != `bne &&  instrType != `jal && instrType != `jr);

always @(*) begin
    if (isNotSkip || ((instrType == `beq || instrType == `bne) && !isBranch)) begin // 顺序执行的情况
        result = pc + 8; // 如果不满足条件的话,由于跳转指令pc+4已经进入流水线了,因此要执行pc+8
    end
    else begin // 跳
        case(instrType)
            `beq: begin
                result = pc + 4 + skip_key_value * 4;
            end
            `bne: begin
                result = pc + 4 + skip_key_value * 4;
            end
            `jr: begin
                result = skip_key_value;
            end
            `jal: begin
                result = {pc[31:28],skip_key_value[25:0],2'b0};
            end
            `eret: begin
                result = M_cp0_epc;
            end
    endcase
    end
end

endmodule


