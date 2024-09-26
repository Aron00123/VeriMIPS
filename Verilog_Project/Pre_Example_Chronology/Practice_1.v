`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:55:02 09/16/2023 
// Design Name: 
// Module Name:    Practice_1 
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
`define S0 2'b00
`define S1 2'b01
`define S2 2'b10
`define S3 2'b11

module counting(
    input [1:0] num,
    input clk,
    output ans
    );

reg [1:0] status;
reg [0:0] flag;

initial 
begin
    status <= `S0;
    flag <= `S0;
end

always@(posedge clk)
begin
	case(status)
	`S0 : begin
				if (num == 2'b01)
				begin
					status <= `S1;
				end
				else if (num == 2'b10)
				begin
					status <= `S0;
				end
				else if (num == 2'b11)
				begin
					status <= `S0;
				end
				else
				begin
					status <= `S0; //对于一切非正常输出，回到状态0
				end
			end
	
	`S1 : begin
				if (num == 2'b01)
				begin
					status <= `S1;
				end
				else if (num == 2'b10)
				begin
					status <= `S2;
				end
				else if (num == 2'b11)
				begin
					status <= `S0;
				end
				else 
				begin
					status <= `S0; //对于一切非正常输出，回到状态0
				end
			end
			
	`S2 : begin
				if (num == 2'b01)
				begin
					status <= `S1;
				end
				else if (num == 2'b10)
				begin
					status <= `S0;
				end
				else if (num == 2'b11)
				begin
					status <= `S3;
                    flag <= 1'b1;
				end
				else 
				begin
					status <= `S0; //对于一切非正常输出，回到状态0
				end
			end
			
	`S3 : begin
				if (num == 2'b01)
				begin
					status <= `S1;
				end
				else if (num == 2'b10)
				begin
					status <= `S0;
				end
				else if (num == 2'b11)
				begin
					status <= `S0;
				end
				else 
				begin
					status <= `S0; //对于一切非正常输出，回到状态0
				end
			end
	endcase
end

assign ans = (flag == 1'b1) ? 1'b1 :1'b0 ;

endmodule
