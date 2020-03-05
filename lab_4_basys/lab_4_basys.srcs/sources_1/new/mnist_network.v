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


module mnist_network(clk, image, led);

    `include "definitions.v"
    
    input clk;
    
    input [num_input_neurons-1:0] image;
    
    output [15:0] led;
    
    wire [weight_width*16-1:0] hidden_neuron_adder_input;
    
    reg [9:0] hidden_neuron_weight_addr;
    
    reg [weight_width-1:0] hidden_neurons[0:num_hidden_neurons-1];
    
    wire [weight_width*16-1:0] hidden_neuron_current_weights;
    
    wire [2*weight_width-1:0] hidden_neuron_partial_sum;
    
    reg  [2*weight_width-1:0] hidden_neuron_acc;       // Accumulator for the current hidden neuron
    
    wire [weight_width-1:0] hidden_neuron;             //Current neuron after activation function
    
    assign led = hidden_neuron_partial_sum;
    
    initial
    begin
        
        hidden_neuron_weight_addr <= 10'b00000_00000;
        //image <= {784{1'b1}};

        
    end
    
    
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
    
    blk_mem_input_weights_2 inp_wts_2(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[2*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_3 inp_wts_3(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[3*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_4 inp_wts_4(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[4*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_5 inp_wts_5(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[5*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_6 inp_wts_6(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[6*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_7 inp_wts_7(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[7*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_8 inp_wts_8(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[8*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_9 inp_wts_9(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[9*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_10 inp_wts_10(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[10*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_11 inp_wts_11(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[11*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_12 inp_wts_12(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[12*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_13 inp_wts_13(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[13*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_14 inp_wts_14(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[14*weight_width+:weight_width])
    );
    
    blk_mem_input_weights_15 inp_wts_15(
                    .clka(clk),
                    .addra(hidden_neuron_weight_addr),
                    .douta(hidden_neuron_current_weights[15*weight_width+:weight_width])
    );
    
    parallel_adder_16 l1_pa_16(
                   .data(hidden_neuron_adder_input),
                   .sum(hidden_neuron_partial_sum)
                   
    );
    
    relu relu_module(
                    .in(hidden_neuron_acc[weight_width-1:0]),
                    .out(hidden_neuron)
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
    
    parameter total_hidden_partial_sums = 49; //Number of partial sums we need to calculate per neuron in the hidden layer.
    
    reg [1:0] mem_wait_ctr = 2'b00;
    
    reg[5:0] neuron_partial_sum_idx;
    reg[3:0] neuron_idx;
    
    initial 
    begin
        hidden_neuron_acc <= 0;
        
        neuron_partial_sum_idx <= 0;
        neuron_idx <= 0;
    end
    
    always @(posedge clk)
    begin
        if(mem_wait_ctr == 0)
        begin
            mem_wait_ctr <= mem_wait_ctr + 1;
            hidden_neuron_weight_addr <= hidden_neuron_weight_addr + 1;
        end
//        else if(mem_wait_ctr == 1)
//        begin
//            //mem_wait_ctr <= mem_wait_ctr + 1;
//            //hidden_neuron_weight_addr <= hidden_neuron_weight_addr + 1;
//        end
        else
        begin
        
                if(neuron_idx < num_hidden_neurons - 1)
                begin
                    hidden_neuron_weight_addr <= hidden_neuron_weight_addr + 1;
                    if(neuron_partial_sum_idx < total_hidden_partial_sums + 1)
                    begin
                    
                        hidden_neuron_acc <= hidden_neuron_acc + hidden_neuron_partial_sum;
                        neuron_partial_sum_idx <= neuron_partial_sum_idx + 1;
                        
                    end
                    else
                    begin
                        hidden_neurons[neuron_idx] <= hidden_neuron;
                    
                        neuron_idx <= neuron_idx + 1;
                        neuron_partial_sum_idx <= 2;
                        
                        hidden_neuron_acc <= hidden_neuron_partial_sum;
                    end
                end
        
        end
    end
    
endmodule
