module nexys3 (/*AUTOARG*/
   // Outputs
   RsTx, led,
   // Inputs
   RsRx, sw, btnS, btnR, clk
   );

`include "seq_definitions.v"
   
   // USB-UART
   input        RsRx;
   output       RsTx;

   // Misc.
   input  [7:0] sw;
   output [7:0] led;
   input        btnS;                 // single-step instruction
   input        btnR;                 // arst
   
   // Logic
   input        clk;                  // 100MHz
   
   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire [seq_dp_width-1:0] seq_tx_data;         // From seq_ of seq.v
   wire                 seq_tx_valid;           // From seq_ of seq.v
   wire [7:0]           uart_rx_data;           // From uart_top_ of uart_top.v
   wire                 uart_rx_valid;          // From uart_top_ of uart_top.v
   wire                 uart_tx_busy;           // From uart_top_ of uart_top.v
   // End of automatics
   
   wire        rst;
   wire        arst_i;
   wire [17:0] clk_dv_inc;

   reg [1:0]   arst_ff;
   reg [16:0]  clk_dv;
   reg         clk_en;
   reg         clk_en_d;
      
   reg [7:0]   inst_wd;
   reg         inst_vld;
   reg [2:0]   step_d;

   reg [7:0]   inst_cnt;
   
   // ===========================================================================
   // Asynchronous Reset
   // ===========================================================================

   assign arst_i = btnR;
   assign rst = arst_ff[0];
   
   always @ (posedge clk or posedge arst_i)
     if (arst_i)
       arst_ff <= 2'b11;
     else
       arst_ff <= {1'b0, arst_ff[1]};

   // ===========================================================================
   // timing signal for clock enable
   // ===========================================================================

   assign clk_dv_inc = clk_dv + 1;
   
   always @ (posedge clk)
     if (rst)
       begin
          clk_dv   <= 0;
          clk_en   <= 1'b0;
          clk_en_d <= 1'b0;
       end
     else
       begin
          clk_dv   <= clk_dv_inc[16:0];
          clk_en   <= clk_dv_inc[17];
          clk_en_d <= clk_en;
       end
   
   // ===========================================================================
   // Instruction Stepping Control / Debouncing
   // ===========================================================================

   always @ (posedge clk)
     if (rst)
       begin
          inst_wd[7:0] <= 0;
          step_d[2:0]  <= 0;
       end
     else if (clk_en) // Down sampling
       begin
          inst_wd[7:0] <= sw[7:0];
          step_d[2:0]  <= {btnS, step_d[2:1]};
       end
	   
	// Detecting posedge of btnS
   wire is_btnS_posedge;
   assign is_btnS_posedge = ~ step_d[0] & step_d[1];
   always @ (posedge clk)
     if (rst)
       inst_vld <= 1'b0;
     else if (clk_en_d)
       inst_vld <= is_btnS_posedge;
	  else
	    inst_vld <= 0;

   always @ (posedge clk)
     if (rst)
       inst_cnt <= 0;
     else if (inst_vld)
       inst_cnt <= inst_cnt + 1;

   assign led[7:0] = inst_cnt[7:0];
   
   // ===========================================================================
   // Sequencer
   // ===========================================================================

   seq seq_ (// Outputs
             .o_tx_data                 (seq_tx_data[seq_dp_width-1:0]),
             .o_tx_valid                (seq_tx_valid),
             // Inputs
             .i_tx_busy                 (uart_tx_busy),
             .i_inst                    (inst_wd[seq_in_width-1:0]),
             .i_inst_valid              (inst_vld),
             /*AUTOINST*/
             // Inputs
             .clk                       (clk),
             .rst                       (rst));
   
   // ===========================================================================
   // UART controller
   // ===========================================================================

   uart_top uart_top_ (// Outputs
                       .o_tx            (RsTx),
                       .o_tx_busy       (uart_tx_busy),
                       .o_rx_data       (uart_rx_data[7:0]),
                       .o_rx_valid      (uart_rx_valid),
                       // Inputs
                       .i_rx            (RsRx),
                       .i_tx_data       (seq_tx_data[seq_dp_width-1:0]),
                       .i_tx_stb        (seq_tx_valid),
                       /*AUTOINST*/
                       // Inputs
                       .clk             (clk),
                       .rst             (rst));
   
endmodule // nexys3
// Local Variables:
// verilog-library-flags:("-f ../input.vc")
// End:
