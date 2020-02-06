`timescale 1ns / 1ps

module tb;

   reg [7:0] sw;
   reg       clk;
   reg       btnS;
   reg       btnG;
   reg       btnR;

   integer   i;

   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire      RsRx;                   // From model_uart0_ of model_uart.v
   wire      RsTx;                   // From uut_ of nexys3.v
   wire [7:0] led;                    // From uut_ of nexys3.v
   // End of automatics

   initial
     begin
        //$shm_open  ("dump", , ,1);
        //$shm_probe (tb, "ASTF");

        clk = 0;
        btnR = 1;
        btnS = 0;
        #1000 btnR = 0;
        #1500000;

	      ////////////////////////////////////////////////////////////
	      ////////////////////////////////////////////////////////////
	      // Begin custom test stuff
	      //
	      btnG = 0;
	      tskRunTestFile();
	      ////////////////////////////////////////////////////////////
	      ////////////////////////////////////////////////////////////

        #1000;
	      $finish;
     end

   always #5 clk = ~clk;



   ////////////////////////////////////////////////////////////
   ////////////////////////////////////////////////////////////
   // Begin custom function for reading instructions from file
   // Use the first line of the file to determine how many
   // instructions are to be executed. Each instruction is
   // given an artificial delay based on the number of
   // instructions used in the Fibonacci sequence portion of
   // the lab handout. This also prevents ISE from freezing due
   // to a super fast loop.
   task tskRunTestFile;
      reg [7:0] inst_count;
      reg [7:0] inst [0:1023];
      integer 	i;
      begin
	       $readmemb("seq.code", inst, 0, 1023);
	       assign inst_count = inst[0];
	       $display("inst_count: %b", inst_count);
	       for(i = 1; i <= inst_count + 1; i = i + 1)
	         begin
	            #10000 tskRunInst(inst[i]);
	         end
      end
   endtask // tskRunTestFile
   ////////////////////////////////////////////////////////////
   ////////////////////////////////////////////////////////////

   model_uart model_uart0_ (// Outputs
                            .TX                  (RsRx),
                            // Inputs
                            .RX                  (RsTx)
                            /*AUTOINST*/);



   defparam model_uart0_.name = "UART0";
   defparam model_uart0_.baud = 1000000;


   nexys3 uut_ (/*AUTOINST*/
                // Outputs
                .RsTx                   (RsTx),
                .led                    (led[7:0]),
                // Inputs
                .RsRx                   (RsRx),
                .sw                     (sw[7:0]),
                .btnS                   (btnS),
		            //////////////////////////////////////////////////
		            // Not in original file
		            .btnG                   (btnG),
		            //
		            //////////////////////////////////////////////////
                .btnR                   (btnR),
                .clk                    (clk));

   task tskRunInst;
      input [7:0] inst;
      begin
         $display ("%d ... Running instruction %08b", $time, inst);
         sw = inst;
         #1500000 btnS = 1;
         #3000000 btnS = 0;
      end
   endtask // tskRunInst


   task tskRunPUSH;
      input [1:0] ra;
      input [3:0] immd;
      reg [7:0]   inst;
      begin
         inst = {2'b00, ra[1:0], immd[3:0]};
         tskRunInst(inst);
      end
   endtask //

   task tskRunSEND;
      //////////////////////////////////////////////////////////////////////
      // Modified to work with the new dedicated send button (btnG).
      //
      input [1:0] ra;
      reg [7:0]   inst;
      begin
         inst = {2'b00, ra[1:0], 4'h0};
	       sw = inst;
         #1500000 btnG = 1;
         #3000000 btnG = 0;
      end
   endtask // tskRunSEND

   task tskRunADD;
      input [1:0] ra;
      input [1:0] rb;
      input [1:0] rc;
      reg [7:0]   inst;
      begin
         inst = {2'b01, ra[1:0], rb[1:0], rc[1:0]};
         tskRunInst(inst);
      end
   endtask //

   task tskRunMULT;
      input [1:0] ra;
      input [1:0] rb;
      input [1:0] rc;
      reg [7:0]   inst;
      begin
         inst = {2'b10, ra[1:0], rb[1:0], rc[1:0]};
         tskRunInst(inst);
      end
   endtask //

   always @ (posedge clk)
     if (uut_.inst_vld)
       $display("%d ... instruction %08b executed", $time, uut_.inst_wd);

   always @ (led)
     $display("%d ... led output changed to %08b", $time, led);

endmodule // tb
// Local Variables:
// verilog-library-flags:("-y ../src/")
// End:
