`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:57 10/13/2023 
// Design Name: 
// Module Name:    BlockChecker 
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
module BlockChecker (
    input clk,
    input reset,  // asyncronous reset
    input [7:0] in,
    output result
);

    wire [7:0] in_true;  // 所需字符大小写统一
    reg [31:0] left_begin;  // 记录未匹配的begin数量，初始为1
    reg istruebegin;  //是0表示待定,是1表示确定并紧接着置为0
    reg istrueend;
    reg [2:0]
        state_bematch,
        state_enmatch;  // 记录输入begin状态， 输入end状态，以及下一个状态

    assign in_true = (in == "b" || in == "B") ? "b" :
                    (in == "e" || in == "E") ? "e" :
                    (in == "g" || in == "G") ? "g" :
                    (in == "i" || in == "I") ? "i" :
                    (in == "n" || in == "N") ? "n" :
                    (in == "d" || in == "D") ? "d" : in;

    initial begin
        state_bematch = 0;
        state_enmatch = 0;
        // state_bematch = 0;
        // state_enmatch = 0;
        left_begin = 1;
        istruebegin = 0;  // 目前匹配到了begin
        istrueend = 0;  // 目前匹配到了end
    end
    assign result = left_begin == 1;



    always @(posedge clk, posedge reset) begin
        // state_bematch: 0: " ", 1: 其他情况, 2: "b", 3: "be", 4: "beg", 5: "begi", 6: "begin", 7: "begin "
        case (in_true)
            " ": begin
                if (state_bematch == 6) state_bematch = 7;
                else state_bematch = 0;
            end
            "b": begin
                if (state_bematch == 0 || state_bematch == 7) state_bematch = 2;
                else state_bematch = 1;
            end
            "e": begin
                if (state_bematch == 2) state_bematch = 3;
                else state_bematch = 1;
            end
            "g": begin
                if (state_bematch == 3) state_bematch = 4;
                else state_bematch = 1;
            end
            "i": begin
                if (state_bematch == 4) state_bematch = 5;
                else state_bematch = 1;
            end
            "n": begin
                if (state_bematch == 5) state_bematch = 6;
                else state_bematch = 1;
            end
            default: state_bematch = 1;
        endcase

        // state_enmatch: 0: " ", 1: 其他情况, 2: "e", 3: "en", 4: "end", 5: "end "
        case (in_true)
            " ": begin
                if (state_enmatch == 4) state_enmatch = 5;
                else state_enmatch = 0;
            end
            "e": begin
                if (state_enmatch == 0 || state_enmatch == 5) state_enmatch = 2;
                else state_enmatch = 1;
            end
            "n": begin
                if (state_enmatch == 2) state_enmatch = 3;
                else state_enmatch = 1;
            end
            "d": begin
                if (state_enmatch == 3) state_enmatch = 4;
                else state_enmatch = 1;
            end
            default: state_enmatch = 1;
        endcase
    end

    always @(posedge clk, posedge reset) begin
        if (reset) begin
            state_bematch <= 0;
            state_enmatch <= 0;
            left_begin <= 1;
            istruebegin <= 0;
            istrueend <= 0;
        end else begin

            // else begin
            //     state_bematch <= state_bematch;
            //     state_enmatch <= state_enmatch;
            // end

            if (istruebegin == 1) begin
                if (state_bematch == 7) begin
                    istruebegin <= 0;
                end else begin
                    istruebegin <= 0;
                    left_begin  <= left_begin - 1;
                end
            end

            if (istrueend == 1) begin
                if (state_enmatch == 5) begin
                    istrueend <= 0;
                end else begin
                    istrueend  <= 0;
                    left_begin <= left_begin + 1;
                end
            end

            if (left_begin >= 1 && state_bematch == 6) begin
                left_begin  <= left_begin + 1;
                istruebegin <= 1;
            end else if (left_begin >= 1 && state_enmatch == 4) begin
                left_begin <= left_begin - 1;
                istrueend  <= 1;
            end
        end
    end


endmodule
