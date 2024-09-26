`timescale 1ns / 1ps
`define IDLE 2'b00 // 空闲态(类似于P1后缀匹配的 “∅ 态” )
`define LOAD 2'b01 // 加载态
`define CNT  2'b10 // 计数态
`define INT  2'b11 // 中断态

`define ctrl   mem[0]
`define preset mem[1]
`define count  mem[2]
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:43:39 12/28/2017 
// Design Name: 
// Module Name:    TC 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module TC(
    input clk,
    input reset,
    input [31:2] Addr, // sw / lw 可以对计时器的“寄存器”进行读写操作,addr即为cpu告诉计时器的地址(类似数据存储器)
    input WE, // 计数器写使能
    input [31:0] Din, // 输入cpu想写入计数器的数据
    output [31:0] Dout, // 输出想要访问的计时器"寄存器"中的值
    output IRQ // 是否发出中断请求
    );

	reg [1:0] state; // 计数器的状态
	reg [31:0] mem [2:0]; // mem[0] 是 ctrl,  mem[1] 是 present,  mem[2] 是 count
	
	reg _IRQ; // 该变量表示计时器是否减到了0,如果减到了，就置为1,否则置为 0
	assign IRQ = `ctrl[3] & _IRQ; // 当计数器中断使能为1 而且 计数器减到了0(state变为了INT态)
	
	assign Dout = mem[Addr[3:2]]; // addr[3:2]就是0/1/2,分别访存mem[0/1/2]
	
	wire [31:0] load = Addr[3:2] == 0 ? {28'h0, Din[3:0]} : Din; // ctrl有4位,如果cpu告诉系统桥他想写ctrl寄存器,那么就只要cpu给的数据的低四位,写初值寄存器的话就全都要了
	
	integer i;
	always @(posedge clk) begin
		if(reset) begin
			state <= 0; // 最开始是IDLE状态
			for(i = 0; i < 3; i = i+1) mem[i] <= 0; // 最开始三个寄存器ctrl/present/count初始为0
			_IRQ <= 0; // 
		end
		else if(WE) begin
			// $display("%d@: *%h <= %h", $time, {Addr, 2'b00}, load);
			mem[Addr[3:2]] <= load; // cpu想往计时器的寄存器这里面写数据,该操作优先级位于状态转移之上,仅此一处能执行写mem的操作
		end
		else begin
			case(state)
				`IDLE : if(`ctrl[0]) begin // 刚开始的状态为IDLE
					state <= `LOAD; // ctrl[0] == 1意味着计数使能为1(计数器的计数使能必须由外部cpu才能写入给到),倒计时开始运行,同时切换为LOAD状态,让下个周期计数初值载入
					_IRQ <= 1'b0;
				end
				`LOAD : begin // 当外部写入将计数器ctrl寄存器[0]置为1后,状态变会转移到LOAD(加载)状态
					`count <= `preset; // 该状态将计数器初值写入count寄存器然后将状态转移到CNT,计数状态
					state <= `CNT;
				end
				`CNT  : // 该状态由LOAD状态转移来,这个状态宏观上持续时间最长,不断减一的操作就是在这个状态中进行的
					if(`ctrl[0]) begin // 如果既是计数状态,ctrl[0]又开着,也就是计数使能开着,便让计数值减去1(前提是计数值大于1)
						if(`count > 1) `count <= `count-1;
						else begin // 进入该else说明此时此刻count == 1,再减就会减到0了
							`count <= 0; // 这一步继续实现计数值的减1操作
							state <= `INT; // 计数值count减为0后将状态转移到INT(中断)态
							_IRQ <= 1'b1; // 将_IRQ置位,表示计数器减到了0
						end
					end
					else state <= `IDLE;
				default : begin // 如果既不是IDLE,又不是LOAD,还不是CNT态,那就是INT也就是中断态了,由计数值减到0引发
					if(`ctrl[2:1] == 2'b00) `ctrl[0] <= 1'b0; // ctrl[2:1]表示计数器的模式,00表示模式0否则就是模式1,ctrl[0] == 1表示计数使能为1
					// 如果是模式0就将计数使能置为0,也就是停止计数,直到cpu再次向ctrl写入,让它重新开始进行计数 
					else _IRQ <= 1'b0; // 如果是模式1,就不关计数使能,让计数器重新加载初值计数
					state <= `IDLE;// 不管是模式几,中断INT状态都只持续一个周期,随之转换为IDLE(空闲态)
				end
			endcase
		end
	end

endmodule
