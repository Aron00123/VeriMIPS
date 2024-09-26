`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:43:23 11/02/2023 
// Design Name: 
// Module Name:    DM 
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
module DM (
    input [31:0] PC,
    input [31:0] Addr,
    input [31:0] Data,
    input clk,
    input reset,
    input Memwrite,
    input isByte,
    output [31:0] DataOut
);

    integer i;
    reg [31:0] ramRegister[4095:0];

    initial begin
        for (i = 0; i < 4096; i = i + 1) begin
            ramRegister[i] <= 0;
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 4096; i = i + 1) begin
                ramRegister[i] <= 0;
            end
        end else begin
            if (Memwrite) begin
                $display("@%h: *%h <= %h", PC, Addr, Data);
                case (isByte)
                    0: ramRegister[Addr[25:2]] <= Data;
                    1: begin
                        case (Addr[1:0])
                            2'b00:
                            ramRegister[Addr[25:2]] <= {
                                {ramRegister[Addr[25:2]][31:8]}, {Data[7:0]}
                            };
                            2'b01:
                            ramRegister[Addr[25:2]] <= {
                                {ramRegister[Addr[25:2]][31:16]},
                                {Data[15:8]},
                                {ramRegister[Addr[25:2]][7:0]}
                            };
                            2'b10:
                            ramRegister[Addr[25:2]] <= {
                                {ramRegister[Addr[25:2]][31:24]},
                                {Data[23:16]},
                                {ramRegister[Addr[25:2]][15:0]}
                            };
                            2'b11:
                            ramRegister[Addr[25:2]] <= {
                                {Data[31:24]}, {ramRegister[Addr[25:2]][23:0]}
                            };
                            default: ramRegister[Addr[25:2]] <= Data;
                        endcase
                    end
                endcase
            end else begin
                // null
            end
        end
    end

    assign DataOut = (isByte == 0) ? ramRegister[Addr[25:2]] : 
                (Addr[1:0] == 0) ? {{24{0}}, {ramRegister[Addr[25:2]][7:0]}} :
                (Addr[1:0] == 1) ? {{24{0}}, {ramRegister[Addr[25:2]][15:8]}} : 
                (Addr[1:0] == 2) ? {{24{0}}, {ramRegister[Addr[25:2]][23:16]}} :
                {{24{0}}, {ramRegister[Addr[25:2]][31:24]}};


endmodule
