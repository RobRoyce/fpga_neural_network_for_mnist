`timescale 1ns / 1ps

module model_uart(/*AUTOARG*/
   // Outputs
   TX,
   // Inputs
   RX
   );

   output TX;
   input  RX;

   parameter baud    = 115200;
   parameter bittime = 1000000000/baud;
   parameter name    = "UART0";

   reg [7:0] rxData;
   event     evBit;
   event     evByte;
   event     evTxBit;
   event     evTxByte;
   reg       TX;

   
   //////////////////////////////////////////////////
   //////////////////////////////////////////////////
   // Begin our variables and such
   reg [31:0] rxBuffer;
   // End our variables and such
   //////////////////////////////////////////////////
   //////////////////////////////////////////////////

   
   initial
     begin
        TX = 1'b1;

	//////////////////////////////////////////////////
	//////////////////////////////////////////////////
	// required for printing out full packet in tskRxBuffer
	rxBuffer = 32'b0;
	//////////////////////////////////////////////////
	//////////////////////////////////////////////////
     end

   always @ (negedge RX)
     begin
        rxData[7:0] = 8'h0;
        #(0.5*bittime);
	//////////////////////////////////////////////////
	//////////////////////////////////////////////////
	// If the apparent start bit lasts at least one-half of the bit time, it
	// is valid and signals the start of a new character. If not, it is
	// considered a spurious pulse and is ignored. -Wikipedia
	//////////////////////////////////////////////////
	//////////////////////////////////////////////////


        repeat (8)
          begin
             #bittime ->evBit;
             //rxData[7:0] = {rxData[6:0],RX};
             rxData[7:0] = {RX,rxData[7:1]};
          end
        ->evByte;

	
	//////////////////////////////////////////////////
	// Deleted this because it was replaced by the task tskRxBuffer below
	// $display ("%d %s Received byte %02x (%s)", $time, name, rxData,
	// rxData); Leaving it here just in case
	//////////////////////////////////////////////////


	tskRxBuffer (rxData);
     end // always @ (negedge RX)



   
   //////////////////////////////////////////////////
   //////////////////////////////////////////////////
   // Begin our tasks, functions, and such
   task tskRxBuffer;
      input [7:0] rxByte;
      begin
	 if (rxByte == 8'h0a)
	   begin
	      $timeformat(-9,3,"ns",5);
	      $display("%d %s Received bytes %02x (%s)", $time, name, rxBuffer, rxBuffer);
	   end
	 else if (rxByte == 8'h0d)
	   begin
	      rxBuffer <= 0;
	   end
	 else
	   rxBuffer <= {rxBuffer[23:0], rxByte};
      end
   endtask // tskRxBuffer
   // End our tasks, functions, and such
   //////////////////////////////////////////////////
   //////////////////////////////////////////////////

   task tskRxData;
      output [7:0] data;
      begin
         @(evByte);
         data = rxData;
      end
   endtask // for

   task tskTxData;
      input [7:0] data;
      reg [9:0]   tmp;
      integer     i;
      begin
         tmp = {1'b1, data[7:0], 1'b0};
         for (i=0;i<10;i=i+1)
           begin
              TX = tmp[i];
              #bittime;
              ->evTxBit;
           end
         ->evTxByte;
      end
   endtask // tskTxData

endmodule // model_uart
