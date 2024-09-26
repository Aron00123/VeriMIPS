`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:41:36 10/12/2023 
// Design Name: 
// Module Name:    expr 
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
module expr (
    input clk,
    input clr,
    input [7:0] in,
    output out
);

    reg [1:0] state;
    reg [2:0] in_new;

    initial begin
        state = 0;
    end

    always @(posedge clk, posedge clr) begin
        if (clr) begin
            state <= 0;
        end else begin
            in_new = (in == "+" || in == "*") ? 1 : (in <= "9" && in >= "0") ? 2 : 0;
            case (in_new)
                1: begin
                    case (state)
                        0: state <= 1;
                        2: state <= 1;
                        3: state <= 2;
                    endcase
                end
                2: begin
                    case (state)
                        0: state <= 3;
                        2: state <= 3;
                        3: state <= 1;
                    endcase
                end
                0: begin
                    state <= 1;
                end
            endcase
        end
    end

    assign out = state == 3;

endmodule
