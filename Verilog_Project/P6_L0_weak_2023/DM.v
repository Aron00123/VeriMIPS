`include "InStrType.v"
`timescale 1ns / 1ps

module DM (
    input DM_writeMem_EN,
    input [9:0] M_inStrType,
    input [31:0] DM_ADDR,
    input [31:0] DM_dataIN,
    input [31:0] M_dataOUT_DM,
    output [31:0] M_dataOUT,
    output [31:0] DM_ADDR_DM,
    output [31:0] DM_dataIN_DM,
    output [3:0] DM_byteen_DM
);

    reg [31:0] DM_ADDR_DM_reg, DM_dataIN_DM_reg, M_dataOUT_DM_reg;
    reg [3:0] DM_byteen_DM_reg;

    always @(*) begin
        case (M_inStrType)
            `lw: begin
                DM_ADDR_DM_reg   = DM_ADDR;
                DM_byteen_DM_reg = 4'b0000;
                M_dataOUT_DM_reg = M_dataOUT_DM;
            end
            `lh: begin
                DM_ADDR_DM_reg   = DM_ADDR;
                DM_byteen_DM_reg = 4'b0000;
                case (DM_ADDR[1:0])
                    2'b00:   M_dataOUT_DM_reg = {{16{M_dataOUT_DM[15]}}, M_dataOUT_DM[15:0]};
                    2'b10:   M_dataOUT_DM_reg = {{16{M_dataOUT_DM[31]}}, M_dataOUT_DM[31:16]};
                    default: M_dataOUT_DM_reg = M_dataOUT_DM;
                endcase
            end
            `lb: begin
                DM_ADDR_DM_reg   = DM_ADDR;
                DM_byteen_DM_reg = 4'b0000;
                case (DM_ADDR[1:0])
                    2'b00:   M_dataOUT_DM_reg = {{24{M_dataOUT_DM[7]}}, M_dataOUT_DM[7:0]};
                    2'b01:   M_dataOUT_DM_reg = {{24{M_dataOUT_DM[15]}}, M_dataOUT_DM[15:8]};
                    2'b10:   M_dataOUT_DM_reg = {{24{M_dataOUT_DM[23]}}, M_dataOUT_DM[23:16]};
                    2'b11:   M_dataOUT_DM_reg = {{24{M_dataOUT_DM[31]}}, M_dataOUT_DM[31:24]};
                    default: M_dataOUT_DM_reg = M_dataOUT_DM;
                endcase
            end
            `sw: begin
                DM_ADDR_DM_reg   = DM_ADDR;
                DM_dataIN_DM_reg = DM_dataIN;
                DM_byteen_DM_reg = 4'b1111;
            end
            `sh: begin
                DM_ADDR_DM_reg = DM_ADDR;
                case (DM_ADDR[1])
                    1'b0: begin
                        DM_byteen_DM_reg = 4'b0011;
                        DM_dataIN_DM_reg = {16'b0, DM_dataIN[15:0]};
                    end
                    1'b1: begin
                        DM_byteen_DM_reg = 4'b1100;
                        DM_dataIN_DM_reg = {DM_dataIN[15:0], 16'b0};
                    end
                    default: DM_byteen_DM_reg = 4'b1111;
                endcase
            end
            `sb: begin
                DM_ADDR_DM_reg = DM_ADDR;
                case (DM_ADDR[1:0])
                    2'b00: begin
                        DM_byteen_DM_reg = 4'b0001;
                        DM_dataIN_DM_reg = {24'b0, DM_dataIN[7:0]};
                    end
                    2'b01: begin
                        DM_byteen_DM_reg = 4'b0010;
                        DM_dataIN_DM_reg = {16'b0, DM_dataIN[7:0], 8'b0};
                    end
                    2'b10: begin
                        DM_byteen_DM_reg = 4'b0100;
                        DM_dataIN_DM_reg = {8'b0, DM_dataIN[7:0], 16'b0};
                    end
                    2'b11: begin
                        DM_byteen_DM_reg = 4'b1000;
                        DM_dataIN_DM_reg = {DM_dataIN[7:0], 24'b0};
                    end
                    default: DM_byteen_DM_reg = 4'b1111;
                endcase
            end
            default: begin
                DM_ADDR_DM_reg   = DM_ADDR;
                DM_dataIN_DM_reg = DM_dataIN;
                M_dataOUT_DM_reg = M_dataOUT_DM;
                DM_byteen_DM_reg = 4'b0000;
            end
        endcase
    end

    assign M_dataOUT = M_dataOUT_DM_reg;
    assign DM_ADDR_DM = DM_ADDR_DM_reg;
    assign DM_dataIN_DM = DM_dataIN_DM_reg;
    assign DM_byteen_DM = DM_byteen_DM_reg;


endmodule
