`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:01:34 09/16/2023 
// Design Name: 
// Module Name:    Main 
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
// id_fsm.v
module id_fsm (
    input [7:0] char,
    input clk,
    output out
);

    reg  [1:0] status = 2'b00;
    wire [1:0] charType;

    assign out = (status == 2'b10) ? 1'b1 : 1'b0;

/*
charType 2'b00 -> current char is an illegal charactor
charType 2'b01 -> current char is an alphabet charactor
charType 2'b10 -> current char is a digital charactor
*/
    assign charType = (char >= 8'd48 && char <= 8'd57) ? 2'b10 : 
                ((char >= 8'd65 && char <= 8'd90) || (char >= 8'd97 && char <= 8'd122)) ? 2'b01 : 2'b00;

    /*
    status 2'b00 -> reading illegal charactor or nothing
    status 2'b01 -> reading series of alphabets
    status 2'b10 -> reading series of alphabets and series of digits
    status  |   input   |   next status |   output
    2'b00   |   illegal |   2'b00       |   0
    2'b00   |   alpha   |   2'b01       |   0
    2'b00   |   digit   |   2'b00       |   0
    2'b01   |   illegal |   2'b00       |   0
    2'b01   |   alpha   |   2'b01       |   0
    2'b01   |   digit   |   2'b10       |   1
    2'b10   |   illegal |   2'b00       |   0
    2'b10   |   alpha   |   2'b01       |   0
    2'b10   |   digit   |   2'b10       |   1
*/

    always @(posedge clk) begin
        if (status == 2'b00) begin
            if (charType == 2'b01)  // isAlpha
                status <= 2'b01;
            else status <= 2'b00;
        end else if (status == 2'b01) begin
            if (charType == 2'b10)  // isDigit
                status <= 2'b10;
            else if (charType == 2'b01)  // isAlpha
                status <= 2'b01;
            else status <= 2'b00;
        end else if (status == 2'b10) begin
            if (charType == 2'b10)  // isDigit
                status <= 2'b10;
            else if (charType == 2'b01)  // isAlpha
                status <= 2'b01;
            else status <= 2'b00;
        end else begin
            status <= status;
        end
    end

endmodule

