parameter weight_width = 16;
parameter decimal_place = 5;

parameter num_input_neurons = 784;
parameter num_hidden_neurons = 16;
parameter num_output_neurons = 10;

// Example of computing the product of
// two fixed-point decimal values.
task fp_mult;
input signed [weight_width-1:0] a;
input signed [weight_width-1:0] b;
output signed [weight_width-1:0] prod;
reg signed [2*weight_width-1:0] int_prod; // Local storage of a * b
begin
	int_prod = a * b;
	prod = (int_prod) >> decimal_place;
end
endtask

// A sampled version of the sigmoid function
// that has been scaled to work with our
// fixed-point encoding.
//function signed [weight_width-1:0] sigmoid;
//input signed [weight_width-1:0] x;
//begin
//	
//	if (x < 16'b1111111101000000)
//	begin
//		sigmoid = 16'b0000000000000000;
//	end
//	else if (x > 16'b0000000011000000)
//	begin
//		sigmoid = 16'b0000000000100000;
//	end
//	else
//	begin
//		case(x)
//			16'b1111111101000000: sigmoid = 16'b0000000000000000;
//			16'b1111111101001101: sigmoid = 16'b0000000000000000;
//			16'b1111111101011010: sigmoid = 16'b0000000000000000;
//			16'b1111111101100110: sigmoid = 16'b0000000000000000;
//			16'b1111111101110011: sigmoid = 16'b0000000000000000;
//			16'b1111111110000000: sigmoid = 16'b0000000000000001;
//			16'b1111111110001101: sigmoid = 16'b0000000000000001;
//			16'b1111111110011010: sigmoid = 16'b0000000000000001;
//			16'b1111111110100110: sigmoid = 16'b0000000000000010;
//			16'b1111111110110011: sigmoid = 16'b0000000000000011;
//			16'b1111111111000000: sigmoid = 16'b0000000000000100;
//			16'b1111111111001101: sigmoid = 16'b0000000000000101;
//			16'b1111111111011010: sigmoid = 16'b0000000000000111;
//			16'b1111111111100110: sigmoid = 16'b0000000000001010;
//			16'b1111111111110011: sigmoid = 16'b0000000000001101;
//			16'b0000000000000000: sigmoid = 16'b0000000000010000;
//			16'b0000000000001101: sigmoid = 16'b0000000000010011;
//			16'b0000000000011010: sigmoid = 16'b0000000000010110;
//			16'b0000000000100110: sigmoid = 16'b0000000000011001;
//			16'b0000000000110011: sigmoid = 16'b0000000000011011;
//			16'b0000000001000000: sigmoid = 16'b0000000000011100;
//			16'b0000000001001101: sigmoid = 16'b0000000000011101;
//			16'b0000000001011010: sigmoid = 16'b0000000000011110;
//			16'b0000000001100110: sigmoid = 16'b0000000000011111;
//			16'b0000000001110011: sigmoid = 16'b0000000000011111;
//			16'b0000000010000000: sigmoid = 16'b0000000000011111;
//			16'b0000000010001101: sigmoid = 16'b0000000000100000;
//			16'b0000000010011010: sigmoid = 16'b0000000000100000;
//			16'b0000000010100110: sigmoid = 16'b0000000000100000;
//			16'b0000000010110011: sigmoid = 16'b0000000000100000;
//			16'b0000000011000000: sigmoid = 16'b0000000000100000;
//		endcase
//	end
//
//end
//endfunction
