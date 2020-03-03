`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/02/2020 11:05:19 PM
// Design Name: 
// Module Name: mnist_network
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module mnist_network(clk, image);

    `include "definitions.v"
    
    input clk;
    
    input [num_input_neurons-1:0] image;
    
    wire [weight_width*16-1:0] hidden_neuron_adder_input;
    
    reg [9:0] hidden_neuron_weight_addr;
    
    wire [weight_width*16-1:0] hidden_neuron_current_weights;
    
    wire [weight_width-1:0] hidden_neuron_partial_sum;
    
    
    blk_mem_input_weights_0 inp_wts_0(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[0+:weight_width])
    );
    
    blk_mem_input_weights_1 inp_wts_1(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[weight_width+:weight_width])
    );
    
    //TODO generate and instantiate 14 more block mem modules for the input layer :(
    
    parallel_adder_16 l1_pa_16(
                   .data(hidden_neuron_adder_input),
                   .sum(hidden_neuron_partial_sum)
                   
    );
    
    
    // Generate 16 multipliers for each of the currently selected
    // weights that move us from the input to hidden layer.
    genvar i;
    generate
    
        for(i = 0; i < 16; i = i +1)
        begin
            
            //TODO see if we can clean up the syntax
            //for the "a" input to the multiplier.
            fp_multiplier fp_mult(
                    .a({{weight_width-decimal_place-1{1'b0}}, image[i], {decimal_place{1'b0}}}),
                    .b(hidden_neuron_current_weights[weight_width*i+:weight_width]),
                    .prod(hidden_neuron_adder_input[weight_width*i+:weight_width])
            );
        
        end
    
    endgenerate
    
endmodule
