`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Team Honey Badger
// Engineer: Sean Kennedy
// 
// Create Date:    12:00:41 03/11/2015 
// Design Name: 
// Module Name:    LVDS_Controller 
// Project Name: 	 LVDS_Implementation_v2.1
// Target Devices: Atyls - Spartan6
// Tool versions: ISE Project Navigator
// Description: 
//		Builds on the LVDS_Implementation project but now incorporates a top level controller module that will drive RGB values
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module LVDS_Controller(
			input clk_in,
			//input [7:0] red,   
			//input [7:0] blue,
			//input [7:0] green,
			input reset,
			output CK1in_p,
			output CK1in_n,
			output Rxin0_n,
			output Rxin0_p,
			output Rxin1_n,
			output Rxin1_p,
			output Rxin2_n,
			output Rxin2_p,
			output Rxin3_n,
			output Rxin3_p
    );
	
//Internal Registers	
wire clk_pixel;
reg [7:0] red, blue, green;
reg [10:0] horizontalTotal;
wire newPixel;
/*
	reg [7:0] red;
	reg [7:0] blue;
	reg [7:0] green;
*/

//Instatiate Modules
LVDS_Output u1( 
			.clk_in(clk_in),
			.red(red),   
			.blue(blue),
			.green(green),
			.CK1in_p(CK1in_p),
			.CK1in_n(CK1in_n),
			.Rxin0_n(Rxin0_n),
			.Rxin0_p(Rxin0_p),
			.Rxin1_n(Rxin1_n),
			.Rxin1_p(Rxin1_p),
			.Rxin2_n(Rxin2_n),
			.Rxin2_p(Rxin2_p),
			.Rxin3_n(Rxin3_n),
			.Rxin3_p(Rxin3_p),
			.newPixel(newPixel)
			
    );
/*	 
//Creates a clock signal at 63MHz from a 100MHz signal
DCM_SP #(
	.CLKFX_DIVIDE(3),		//clock divide
	.CLKFX_MULTIPLY(2)	//clock multiply
)
DCM_SP_inst_63 (
	.CLKFX(clk_pixel),				//clock output
	.CLKIN(clk_in),				//clock input
	.RST(1'b0)					//reset, active high
);
*/
//initial block
initial
	begin
		red <= 8'b0000_0000;
		blue <= 8'b0000_0000;
		green <= 8'b0000_0000;
		horizontalTotal <= 11'd0;
	end

//always block
always @ (posedge newPixel)
begin
	if(reset) begin
		horizontalTotal <= 11'd0;
	end
	else if (horizontalTotal == 11'd1440) begin
		horizontalTotal <= 11'd0;
	end
	else begin
		horizontalTotal <= horizontalTotal +1;
	end
	
	if(horizontalTotal == 11'd0) begin
		red <= 8'b1111_1111;
		blue <= 8'b0000_0000;
		green <= 8'b0000_0000;
		
	end
	else if (horizontalTotal == 11'd480) begin
		red <= 8'b0000_0000;
		blue <= 8'b1111_1111;
		green <= 8'b0000_0000;
		//horizontalTotal <= horizontalTotal +1;
	end
	else if (horizontalTotal == 11'd960) begin
		red <= 8'b0000_0000;
		blue <= 8'b0000_0000;
		green <= 8'b1111_1111;
		//horizontalTotal <= horizontalTotal +1;
	end
	else if (horizontalTotal == 11'd1440) begin
		red <= 8'b1111_1111;
		blue <= 8'b1111_1111;
		green <= 8'b1111_1111;
		
	end
	/*
	else	begin
		//red <= 8'b1111_1111;
		//blue <= 8'b1111_1111;
		//green <= 8'b1111_1111;
		horizontalTotal <= horizontalTotal +1;
	end
	*/
	//horizontalTotal <= horizontalTotal +1;
end

/*
	always @ (posedge clk_in or posedge reset)
	begin
		if(reset) begin
			red <= 8'b0000_0000;
			blue <= 8'b0000_0000;
			green <= 8'b0000_0000;
		end
		else begin
			//checks switch levels and drives red, green, and blue independently
			if(red_switch) begin
				red <= 8'b1111_1111;
			end
			else begin
				red <= 8'b0000_0000;
			end
			
			if(blue_switch) begin
				blue <= 8'b1111_1111;
			end
			else begin
				blue <= 8'b0000_0000;
			end
			
			if(green_switch) begin
				green <= 8'b1111_1111;
			end
			else begin
				green <= 8'b0000_0000;
			end
		end
	end
	*/
endmodule

