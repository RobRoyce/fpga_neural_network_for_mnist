parameter weight_width = 16;
parameter decimal_place = 5;

parameter num_input_neurons = 784;
parameter num_hidden_neurons = 16;
parameter num_output_neurons = 10;

// Example of computing the product of
// two fixed-point decimal values.
task fp_mult;
input [weight_width-1:0] a;
input [weight_width-1:0] b;
output [weight_width-1:0] prod;
reg [2*weight_width-1:0] int_prod; // Local storage of a * b
begin
	int_prod = a * b;
	prod = (int_prod) >> decimal_place;
end
endtask
