`include "instr_def_h.v"
`include "cpuex_def_h.v"
module control(
    input [31:0] F_instr,
    input [4:0] F_rs,
    input [5:0] F_func,
    input [5:0] F_opcode,
    output reg MemtoReg,
    output reg MemWrite,
    output reg [9:0] instrType,
    output reg [4:0] ALUCtrl,
    output reg ALUSrc,
    output reg RegDst, // 0:写入 20:16    1:写入   15:11
    output reg RegWriteEn,
    output reg issigned_extend,
    output reg [1:0] D_TuseRs,
    output reg [1:0] D_TuseRt,
    output reg [1:0] E_Tnew,
    output reg [1:0] M_Tnew,

    output [4:0] D_exCode
);
wire [9:0] instruction_type;
assign instruction_type = (F_instr == 32'h0) ? `nop : // 注意是在支持指令集不包括op和F_func均为0的指令时才能这么�不然可能会冲�............
                          (F_func == 32 && F_opcode == 0) ? `add :
                          (F_func == 34 && F_opcode == 0) ? `sub :
                          (F_func == 6'b001000 && F_opcode == 0) ? `jr :
                          (F_func == 6'b100100 && F_opcode == 0) ? `And :
                          (F_func == 6'b100101 && F_opcode == 0) ? `Or :
                          (F_func == 6'b101010 && F_opcode == 0) ? `slt :
                          (F_func == 6'b101011 && F_opcode == 0) ? `sltu : 
                          (F_opcode == 6'b001101) ? `ori :
                          (F_opcode == 6'b001000) ? `addi :
                          (F_opcode == 6'b001100) ? `andi :
                          (F_opcode == 6'b100011) ? `lw :
                          (F_opcode == 6'b100001) ? `lh :
                          (F_opcode == 6'b100000) ? `lb :
                          (F_opcode == 6'b101011) ? `sw :
                          (F_opcode == 6'b101001) ? `sh :
                          (F_opcode == 6'b101000) ? `sb :
                          (F_opcode == 6'b000100) ? `beq :
                          (F_opcode == 6'b000101) ? `bne :
                          (F_opcode == 6'b001111) ? `lui :
                          (F_opcode == 6'b000011) ? `jal :
                          (F_func == 6'b011000 && F_opcode == 0) ? `mult : 
                          (F_func == 6'b011001 && F_opcode == 0) ? `multu : 
                          (F_func == 6'b011010 && F_opcode == 0) ? `div : 
                          (F_func == 6'b011011 && F_opcode == 0) ? `divu : 
                          (F_func == 6'b010010 && F_opcode == 0) ? `mflo : 
                          (F_func == 6'b010000 && F_opcode == 0) ? `mfhi : 
                          (F_func == 6'b010011 && F_opcode == 0) ? `mtlo : 
                          (F_func == 6'b010001 && F_opcode == 0) ? `mthi : 
                          (F_opcode == 6'b010000 && F_rs == 5'b00000) ? `mfc0 :
                          (F_opcode == 6'b010000 && F_rs == 5'b00100) ? `mtc0 :
                          (F_func == 6'b011000 && F_opcode == 6'b010000) ? `eret : 
                          (F_func == 6'b001100 && F_opcode == 6'b000000) ? `syscall : 
                          `nop;
//syscall 首字母小写表示指令,大写表示异常
assign D_exCode = (instruction_type == `syscall) ? `Syscall : 
                  (instruction_type == `nop && F_instr != 32'h0) ? `RI : 
                  5'b0;

//reg [9:0] instruction_type;

// add sub ori lw sw beq lui jr jal //
// 1   2   3   4  5  6   7   8  9

always @(*) begin				  
    case(instruction_type)
        `nop: begin
            MemWrite = 0;
            instrType = `nop;
            RegWriteEn = 0;
            D_TuseRs = 3;
            D_TuseRt = 3;
            E_Tnew = 0;
            M_Tnew = 0; // 对于不进行写操作的指�无论其Tnew为多�由于在判断是否需要转发时我们对写使能作出了要�故其均不会引起暂停的发��任意赋�均赋值为0即可
        end
        `add: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `add;
            ALUCtrl = 1;
            ALUSrc = 0;
            RegDst = 1;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `sub: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `sub;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 1;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `And: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `And;
            ALUCtrl = 4;
            ALUSrc = 0;
            RegDst = 1;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `Or: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `Or;
            ALUCtrl = 2;
            ALUSrc = 0;
            RegDst = 1;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `slt: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `slt;
            ALUCtrl = 5;
            ALUSrc = 0;
            RegDst = 1;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `sltu: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `sltu;
            ALUCtrl = 6;
            ALUSrc = 0;
            RegDst = 1;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `ori: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `ori;
            ALUCtrl = 2;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 3;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `andi: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `andi;
            ALUCtrl = 4;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 3;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `addi: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `addi;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 3;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `lw: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `lw;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 3;
            E_Tnew = 2;
            M_Tnew = 1;
        end
        `lh: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `lh;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 3;
            E_Tnew = 2;
            M_Tnew = 1;
        end
        `lb: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `lb;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 3;
            E_Tnew = 2;
            M_Tnew = 1;
        end
        `sw: begin
            MemtoReg = 0;
            MemWrite = 1;
            instrType = `sw;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 2;
            E_Tnew = 0;
            M_Tnew = 0; // 没有写入grf的操�故其Tnew任意赋�
        end
        `sh: begin
            MemtoReg = 0;
            MemWrite = 1;
            instrType = `sh;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 2;
            E_Tnew = 0;
            M_Tnew = 0; // 没有写入grf的操�故其Tnew任意赋�
        end
        `sb: begin
            MemtoReg = 0;
            MemWrite = 1;
            instrType = `sb;
            ALUCtrl = 1;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 1;
            D_TuseRs = 1;
            D_TuseRt = 2;
            E_Tnew = 0;
            M_Tnew = 0; // 没有写入grf的操�故其Tnew任意赋�
        end
        `beq: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `beq;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 1;
            D_TuseRs = 0;
            D_TuseRt = 0;
            E_Tnew = 0;
            M_Tnew = 0; // 没有写入grf的操�故其Tnew任意赋�
        end
        `bne: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `bne;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 1;
            D_TuseRs = 0;
            D_TuseRt = 0;
            E_Tnew = 0;
            M_Tnew = 0; // 没有写入grf的操�故其Tnew任意赋�
        end
        `lui: begin
            MemtoReg = 1;
            MemWrite = 0;
            instrType = `lui;
            ALUCtrl = 3;
            ALUSrc = 1;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 3;
            D_TuseRt = 3;
            E_Tnew = 1;
            M_Tnew = 0;
        end
        `jr: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `jr;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 0;
            D_TuseRt = 3;
            E_Tnew = 0;
            M_Tnew = 0; // 没有写入grf的操�故其Tnew任意赋�
        end
        `jal: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `jal;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 3;
            D_TuseRt = 3;
            E_Tnew = 2;
            M_Tnew = 1; // 将PC+8写入$31,不过在D级的时候pc早已将jal本身的pc值运算得�
        end
        `mult: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `mult;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0; // mult不会向grf写数据因此不必考虑选择向寄存器堆中写入哪个寄存器
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 0;//不产生新值保证不会因为误判为新值产生太晚而无效暂停,其实是任意赋值,因为grf写使能是关掉的
            M_Tnew = 0;
        end
        `multu: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `multu;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0; // mult不会向grf写数据因此不必考虑选择向寄存器堆中写入哪个寄存器
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 0;//不产生新值保证不会因为误判为新值产生太晚而无效暂停,其实是任意赋值,因为grf写使能是关掉的
            M_Tnew = 0;
        end
        `div: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `div;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0; // mult不会向grf写数据因此不必考虑选择向寄存器堆中写入哪个寄存器
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 0;//不产生新值保证不会因为误判为新值产生太晚而无效暂停,其实是任意赋值,因为grf写使能是关掉的
            M_Tnew = 0;
        end
        `divu: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `divu;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0; // mult不会向grf写数据因此不必考虑选择向寄存器堆中写入哪个寄存器
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 1;
            D_TuseRt = 1;
            E_Tnew = 0;//不产生新值保证不会因为误判为新值产生太晚而无效暂停,其实是任意赋值,因为grf写使能是关掉的
            M_Tnew = 0;
        end
        `mflo: begin // 把lo寄存器值读到rd寄存器中
            MemtoReg = 0; // 不写MemData也不写aluResult,写入的数据是GPS[lo]
            MemWrite = 0;
            instrType = `mflo;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 1; // 写入15:11位表示的寄存器 
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 3;
            D_TuseRt = 3;
            E_Tnew = 2;// 会产生新的寄存器值
            M_Tnew = 1;
        end
        `mfhi: begin // 把hi寄存器值读到rd寄存器中
            MemtoReg = 0; // 不写MemData也不写aluResult,写入的数据是GPS[hi]
            MemWrite = 0;
            instrType = `mfhi;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 1; // 写入15:11位表示的寄存器 
            RegWriteEn = 1;
            issigned_extend = 0;
            D_TuseRs = 3;
            D_TuseRt = 3;
            E_Tnew = 2;// 会产生新的寄存器值
            M_Tnew = 1;
        end
        `mtlo: begin // 把rs寄存器值写入到lo寄存器中
            MemtoReg = 0; // 因为不会写grf不用关心写哪个值进去
            MemWrite = 0;
            instrType = `mtlo;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 1; // 会使用rs值
            D_TuseRt = 0; // 不使用rt值
            E_Tnew = 0;   // 不会产生新的寄存器值
            M_Tnew = 0;
        end
        `mthi: begin // 把rs寄存器值写入到lo寄存器中
            MemtoReg = 0; // 因为不会写grf不用关心写哪个值进去
            MemWrite = 0;
            instrType = `mthi;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 1; // 会使用rs值
            D_TuseRt = 0; // 不使用rt值
            E_Tnew = 0;   // 不会产生新的寄存器值
            M_Tnew = 0;
        end
        `eret: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `eret;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 3;
            D_TuseRt = 3; // ......需要转发epc,不过不需要grf转
            E_Tnew = 0;
            M_Tnew = 0;
        end
        `mfc0: begin
            MemtoReg = 0; // 直接特判mfc0写入cp0[rd]的值
            MemWrite = 0; //
            instrType = `mfc0; //
            ALUCtrl = 0; //
            ALUSrc = 0; //
            RegDst = 0; // 写入20:16位
            RegWriteEn = 1; // 
            issigned_extend = 0; // 
            D_TuseRs = 3; //
            D_TuseRt = 3; // ......需要转发epc
            E_Tnew = 2; //
            M_Tnew = 1; //
        end
        `mtc0: begin
            MemtoReg = 0; //
            MemWrite = 0; // 
            instrType = `mtc0; // 
            ALUCtrl = 0; //
            ALUSrc = 0; //
            RegDst = 1; // rd 为写入目标
            RegWriteEn = 0; // 不写grf,使能为0
            issigned_extend = 0; // 
            D_TuseRs = 3; // 
            D_TuseRt = 2; // ......需要转发epc
            E_Tnew = 0; // 
            M_Tnew = 0; // 
        end
        `syscall: begin
            MemtoReg = 0;
            MemWrite = 0;
            instrType = `syscall;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 3;
            D_TuseRt = 3;
            E_Tnew = 0;
            M_Tnew = 0;
        end
		default:begin // 哪个指令都不是的话就给他nop的信号
			MemtoReg = 0;
            MemWrite = 0;
            instrType = `nop;
            ALUCtrl = 0;
            ALUSrc = 0;
            RegDst = 0;
            RegWriteEn = 0;
            issigned_extend = 0;
            D_TuseRs = 0;
            D_TuseRt = 0;
            E_Tnew = 0;
            M_Tnew = 0;
		end
    endcase
end
endmodule


