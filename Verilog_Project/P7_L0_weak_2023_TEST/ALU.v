`include "instr_def_h.v"
`include "cpuex_def_h.v"
/*
sub     5'h0
add     5'h1
Or      5'h2
<<16    5'h3
And     5'h4
slt     5'h5
sltu    5'h6

*/
module ALU(
    input [31:0] digit1,
    input [31:0] digit2,
    input [4:0] aluOp,
    output isEqual,
    output [31:0] calcu_result,

    input [9:0] E_instrType,
    output [4:0] E_exCode1   
);
reg [4:0] temp_exCode;
reg [31:0] calcu_temp;
assign isEqual = (digit1 == digit1) ? 1 : 0;
assign calcu_result = calcu_temp;

assign E_exCode1 = temp_exCode;
//.. 实现下面的中间信号
wire isLoad,isStore; // 是否存取类指令
wire isAddOver,isSubOver;
wire isAdd,isSub;
wire [32:0] extendAdd,extendSub;

assign extendAdd = {digit1[31],digit1} + {digit2[31],digit2};
assign extendSub = {digit1[31],digit1} - {digit2[31],digit2};
assign isLoad = (E_instrType == `lw || E_instrType == `lh ||E_instrType == `lb);
assign isStore = (E_instrType == `sw || E_instrType == `sh ||E_instrType == `sb);

assign isAdd = (E_instrType == `add || E_instrType == `addi);
assign isSub = (E_instrType == `sub);
assign isAddOver = (extendAdd[32] != extendAdd[31]);
assign isSubOver = (extendSub[32] != extendSub[31]);

always @(*) begin // get E_exCode1
    if (isAddOver && isLoad) begin
        temp_exCode = `L_adEx;
    end
    else if (isAddOver && isStore) begin
        temp_exCode = `S_adEx;
    end
    else if ((isAddOver && isAdd) || (isSubOver && isSub)) begin
        temp_exCode = `Ov;
    end
    else begin
       temp_exCode = 5'h0; 
    end
end



always @(*) begin
    case(aluOp) // verilog中的case的语法?
        5'h0: calcu_temp = digit1 - digit2;
        5'h1: calcu_temp = digit1 + digit2;
        5'h2: calcu_temp = digit1 | digit2;
        5'h3: calcu_temp = digit2 << 16; // 用逻辑左移即可
        5'h4: calcu_temp = digit1 & digit2;
        5'h5: calcu_temp = ($signed(digit1) < $signed(digit2)) ? 1 : 0;
        5'h6: calcu_temp = (digit1 < digit2) ? 1 : 0;
    endcase
end

endmodule