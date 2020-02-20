`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date: 12/21/2019 07:45:58 PM
// Module Name: debouncer
// Target Devices: Nexys 3
// Description: The debouncer works by using a timer (16-bits) to ignore any transitions in the
//  switch signal until the timer has counted to its maximum value. In the case of our 16-bit timer,
//  this is 65,536 clock cycles, which for a 100Mhz clock is 0.665ms
//////////////////////////////////////////////////////////////////////////////////


module debouncer(input wire  clk,
                 input wire  switch_input,
                 output reg  state,
                 output wire trans_up,
                 output wire trans_dn);

    // Registers used to synchronize button presses to clk
    reg sync_0, sync_1;

   initial begin
      sync_0 = 0;
      sync_1 = 0;
      state = 0;
      end

    // Use sync_0 and sync_1 as a sort-of master-slave configuration
    always @(posedge clk)
    begin
        sync_0 = switch_input;
    end

    always @(posedge clk)
    begin
        sync_1 = sync_0;
    end


    // The output of the second register is used to debounce
    reg [15:0] count;                   // 16-bit counter => 65535 states ==> 65535/100Mhz counter
    wire idle = (state == sync_1);      // If sync_1 and state are equal, no switch transition is in progress => idle = 1
    wire finished = &count;             // true when all bits of count are 1's (i.e. all bits of count are ANDed together)

    always @(posedge clk)
    begin
        if(idle)
        begin
            count <= 0; // set the counter to zero when the switch is not being pressed
        end else begin
            count <= count + 16'b1; // start and increment the counter when the switch is being pressed
            if (finished)
            begin
                state <= ~state; // Toggle state once counter reaches max value
            end
        end
    end

    assign trans_dn = ~idle & finished & ~state;    // output a signal when the switch transitions up
    assign trans_up = ~idle & finished & state;     // output a signal when the switch transitions down
endmodule
