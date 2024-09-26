`timescale 1ns / 1ps

module DM (
    input clk,
    input reset,
    input [31:0] M_PC,
    input DM_writeMem_EN,
    input [31:0] DM_ADDR,
    input [31:0] DM_dataIN,
    input M_isByte,
    output [31:0] M_dataOUT
);

    integer i;
    reg [31:0] ramRegister[4095:0];  // DM

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
            if (DM_writeMem_EN) begin
                if (M_isByte) begin
                    $display("%d@%h: *%h <= %h", $time, M_PC, DM_ADDR, DM_dataIN);
                    case (DM_ADDR[1:0])
                        2'b00:
                        ramRegister[DM_ADDR[25:2]] <= {
                            {ramRegister[DM_ADDR[25:2]][31:8]}, {DM_dataIN[7:0]}
                        };
                        2'b01:
                        ramRegister[DM_ADDR[25:2]] <= {
                            {ramRegister[DM_ADDR[25:2]][31:16]},
                            {DM_dataIN[15:8]},
                            {ramRegister[DM_ADDR[25:2]][7:0]}
                        };
                        2'b10:
                        ramRegister[DM_ADDR[25:2]] <= {
                            {ramRegister[DM_ADDR[25:2]][31:24]},
                            {DM_dataIN[23:16]},
                            {ramRegister[DM_ADDR[25:2]][15:0]}
                        };
                        2'b11:
                        ramRegister[DM_ADDR[25:2]] <= {
                            {DM_dataIN[31:24]}, {ramRegister[DM_ADDR[25:2]][23:0]}
                        };
                        default: ramRegister[DM_ADDR[25:2]] <= DM_dataIN;
                    endcase
                end else begin
                    $display("%d@%h: *%h <= %h", $time, M_PC, DM_ADDR, DM_dataIN);
                    ramRegister[DM_ADDR[25:2]] <= DM_dataIN;
                end
            end
        end
    end

    assign M_dataOUT = (!M_isByte) ? ramRegister[DM_ADDR[25:2]] : 
                (DM_ADDR[1:0] == 0) ? {{24'b0}, {ramRegister[DM_ADDR[25:2]][7:0]}} :
                (DM_ADDR[1:0] == 1) ? {{24'b0}, {ramRegister[DM_ADDR[25:2]][15:8]}} : 
                (DM_ADDR[1:0] == 2) ? {{24'b0}, {ramRegister[DM_ADDR[25:2]][23:16]}} :
                {{24'b0}, {ramRegister[DM_ADDR[25:2]][31:24]}};


endmodule
