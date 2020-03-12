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


module mnist_network(clk, image, prediction);

`include "definitions.v"

   input clk;

   input [num_input_neurons-1:0] image;

   output [3:0]                  prediction;

   wire [weight_width*16-1:0]    hidden_neuron_adder_input;

   reg [9:0]                     neuron_weight_addr;
   
   reg [15:0] biases_input[0:15];
   reg [15:0] biases_hidden[0:9];

   reg [num_hidden_neurons*weight_width-1:0] hidden_neurons;

   wire [num_hidden_neurons*weight_width-1:0] hidden_neurons_weighted;

   reg [15:0]                                 current_input_neurons;

   reg [num_output_neurons*weight_width-1:0]  output_neurons;

   wire [weight_width*16-1:0]                 current_weights;

   wire [2*weight_width-1:0]                  hidden_neuron_partial_sum;

   wire [2*weight_width-1:0]                  output_neuron_sum;

   reg [2*weight_width-1:0]                   hidden_neuron_acc;       // Accumulator for the current hidden neuron
   reg [2*weight_width-1:0]                   output_neuron_acc;       // Accumulator for the current hidden neuron

   wire [weight_width-1:0]                    hidden_neuron;             //Current hidden neuron after activation function

   wire [weight_width-1:0]                    output_neuron;             //Current output neuron after activation function

   initial
     begin

        neuron_weight_addr <= 10'b00000_00000;

        biases_input[0] <= 16'b0000000000101100;
        biases_input[1] <= 16'b1111111111011000;
        biases_input[2] <= 16'b0000000000000010;
        biases_input[3] <= 16'b1111111110111000;
        biases_input[4] <= 16'b0000000000110001;
        biases_input[5] <= 16'b0000000010110100;
        biases_input[6] <= 16'b0000000001000111;
        biases_input[7] <= 16'b1111111110010010;
        biases_input[8] <= 16'b1111111111100101;
        biases_input[9] <= 16'b1111111111010010;
        biases_input[10] <= 16'b0000000001010111;
        biases_input[11] <= 16'b0000000000110100;
        biases_input[12] <= 16'b1111111111100001;
        biases_input[13] <= 16'b1111111110100001;
        biases_input[14] <= 16'b1111111110000011;
        biases_input[15] <= 16'b1111111111111111;
        
        biases_hidden[0] <= 16'b1111111111100010;
        biases_hidden[1] <= 16'b0000000001010100;
        biases_hidden[2] <= 16'b0000000000001010;
        biases_hidden[3] <= 16'b1111111101110100;
        biases_hidden[4] <= 16'b0000000001001011;
        biases_hidden[5] <= 16'b0000000001111111;
        biases_hidden[6] <= 16'b0000000000011101;
        biases_hidden[7] <= 16'b0000000001011110;
        biases_hidden[8] <= 16'b1111111101001111;
        biases_hidden[9] <= 16'b1111111111110000;

     end


   blk_mem_input_weights_0 inp_wts_0(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[0+:weight_width])
                                     );

   blk_mem_input_weights_1 inp_wts_1(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[weight_width+:weight_width])
                                     );

   blk_mem_input_weights_2 inp_wts_2(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[2*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_3 inp_wts_3(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[3*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_4 inp_wts_4(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[4*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_5 inp_wts_5(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[5*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_6 inp_wts_6(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[6*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_7 inp_wts_7(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[7*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_8 inp_wts_8(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[8*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_9 inp_wts_9(
                                     .clka(clk),
                                     .addra(neuron_weight_addr),
                                     .douta(current_weights[9*weight_width+:weight_width])
                                     );

   blk_mem_input_weights_10 inp_wts_10(
                                       .clka(clk),
                                       .addra(neuron_weight_addr),
                                       .douta(current_weights[10*weight_width+:weight_width])
                                       );

   blk_mem_input_weights_11 inp_wts_11(
                                       .clka(clk),
                                       .addra(neuron_weight_addr),
                                       .douta(current_weights[11*weight_width+:weight_width])
                                       );

   blk_mem_input_weights_12 inp_wts_12(
                                       .clka(clk),
                                       .addra(neuron_weight_addr),
                                       .douta(current_weights[12*weight_width+:weight_width])
                                       );

   blk_mem_input_weights_13 inp_wts_13(
                                       .clka(clk),
                                       .addra(neuron_weight_addr),
                                       .douta(current_weights[13*weight_width+:weight_width])
                                       );

   blk_mem_input_weights_14 inp_wts_14(
                                       .clka(clk),
                                       .addra(neuron_weight_addr),
                                       .douta(current_weights[14*weight_width+:weight_width])
                                       );

   blk_mem_input_weights_15 inp_wts_15(
                                       .clka(clk),
                                       .addra(neuron_weight_addr),
                                       .douta(current_weights[15*weight_width+:weight_width])
                                       );


   // Generate 16 multipliers for eachd of the currently selected
   // weights that move us from the input to hidden layer.
   genvar i;
   generate

      for(i = 0; i < 16; i = i + 1)
        begin

           //TODO see if we can clean up the syntax
           //for the "a" input to the multiplier.
           fp_multiplier fp_hidden_mult(
                                        //                    .a({{weight_width-decimal_place-1{1'b0}}, current_input_neurons[15-i], {decimal_place{1'b0}}}), // Convert each bit in the image into a 16-bit fixed-point representation
                                        .a({{weight_width-decimal_place-1{1'b0}}, current_input_neurons[i], {decimal_place{1'b0}}}), // Convert each bit in the image into a 16-bit fixed-point representation
                                        .b(current_weights[weight_width*i+:weight_width]),
                                        .prod(hidden_neuron_adder_input[weight_width*i+:weight_width])
                                        );

           fp_multiplier fp_output_mult(
                                        .a(hidden_neurons[weight_width*i+:weight_width]),
                                        .b(current_weights[weight_width*i+:weight_width]),
                                        .prod(hidden_neurons_weighted[weight_width*i+:weight_width])
                                        );
        end

   endgenerate

   parallel_adder_16 hidden_pa_16(
                                  .data(hidden_neuron_adder_input),
                                  .sum(hidden_neuron_partial_sum)

                                  );

   relu hidden_relu(
                    .in(hidden_neuron_acc[weight_width-1:0] + biases_input[neuron_idx]),
                    .out(hidden_neuron)
                    );

   parallel_adder_16 output_pa_16(
                                  .data(hidden_neurons_weighted),
                                  .sum(output_neuron_sum)

                                  );

   relu output_relu(
                    .in(output_neuron_acc[weight_width-1:0] + biases_hidden[neuron_idx]),
                    .out(output_neuron)
                    );

   comparator_10 output_cmp(
                            .in(output_neurons),
                            .out(),
                            .out_idx(prediction)
                            );

   parameter total_hidden_partial_sums = 49; //Number of partial sums we need to calculate per neuron in the hidden layer.
   reg[5:0] neuron_partial_sum_idx;

   parameter st_hidden_neurons = 0;
   parameter st_output_neurons = 1;

   reg [1:0] mem_wait_ctr = 2'b00;

   reg [4:0] neuron_idx;

   reg [2:0] state = 3'b000;

   initial
     begin
        hidden_neuron_acc <= 0;

        neuron_partial_sum_idx <= 0;
        neuron_idx <= 0;
     end

   always @(posedge clk)
     begin

        output_neuron_acc <= output_neuron_sum;
        begin

           case(state)

             st_hidden_neurons: begin

                if(neuron_partial_sum_idx < total_hidden_partial_sums)
                  current_input_neurons <= image[16*neuron_partial_sum_idx+:16];
                //                                current_input_neurons <= image[16*(total_hidden_partial_sums-neuron_partial_sum_idx-1)+:16];

                if(mem_wait_ctr == 0)
                  begin
                     mem_wait_ctr <= mem_wait_ctr + 1;
                  end
                else if(mem_wait_ctr == 1)
                  begin
                     mem_wait_ctr <= mem_wait_ctr + 1;
                     neuron_weight_addr <= neuron_weight_addr + 1;
                  end
                else
                  begin
                     if(neuron_idx < num_hidden_neurons)
                       begin
                          neuron_weight_addr <= neuron_weight_addr + 1;
                          if(neuron_partial_sum_idx < total_hidden_partial_sums + 1)
                            begin

                               hidden_neuron_acc <= hidden_neuron_acc + hidden_neuron_partial_sum;
                               neuron_partial_sum_idx <= neuron_partial_sum_idx + 1;

                            end
                          else
                            begin
                               //                                    hidden_neurons[neuron_idx] <= hidden_neuron;
                               //                                    hidden_neurons[weight_width*(num_hidden_neurons-neuron_idx-1)+:weight_width] <= hidden_neuron;
                               hidden_neurons[weight_width*neuron_idx+:weight_width] <= hidden_neuron;

                               neuron_idx <= neuron_idx + 1;
                               neuron_partial_sum_idx <= 2;

                               hidden_neuron_acc <= hidden_neuron_partial_sum;
                            end
                       end
                     else
                       begin
                          state <= st_output_neurons;
                          neuron_idx <= 0;
                          mem_wait_ctr <= 0;
                          neuron_partial_sum_idx <= 0;
                          hidden_neuron_acc <= 0;
                          neuron_weight_addr <= neuron_weight_addr - 3;
                       end
                  end

             end // st_hidden_neurons
             st_output_neurons: begin


                if(mem_wait_ctr < 3)
                  begin
                     mem_wait_ctr <= mem_wait_ctr + 1;
                     neuron_weight_addr <= neuron_weight_addr + 1;
                  end
                else
                  begin
                     if(neuron_idx <= num_output_neurons)
                       begin
                          neuron_weight_addr <= neuron_weight_addr + 1;
                          neuron_idx <= neuron_idx + 1;
                          output_neurons[weight_width*neuron_idx+:weight_width] <= output_neuron;
                       end
                     else
                       begin
                          state <= st_hidden_neurons;
                          neuron_idx <= 0;
                          neuron_weight_addr <= 0;
                          mem_wait_ctr <= 0;
                       end
                  end

             end // st_output_neurons
           endcase

        end
     end

endmodule
