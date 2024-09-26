`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:06 09/16/2023 
// Design Name: 
// Module Name:    Example_0 
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

module Example_0(
    input [1:0] num,
    input clk,
    output ans
    );

reg [1:0] status;

initial begin
    status <= `S0;
end

always @(posedge clk) begin
    case(status)
        `S0:begin
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
                    status <= `S0; 
                end
        end
        `S1:begin
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
                    status <= `S0; 
                end
        end
        `S2:begin
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
                end
                else
                begin
                    status <= `S0; 
                end
        end
        `S3:begin
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
                    status <= `S0; 
                end
        end
    endcase
end

assign ans = (status == `S3) ? 1'b1 :1'b0;

endmodule
