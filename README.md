# FPGA Neural Network for Recognizing the MNIST Data Set

This project is based on an assignment for UCLA's undergraduate-level course -- Digital Design Laboratory

We implement a custom clock divider, vga controller, 7-segment controller, and Xilinx ROM and RAM IPs. The neural network is trained to recognize the MNIST dataset on an x86 machine, and the weights are then transfered and implemented in the ROM IP. The VGA controller displays the MNIST hand-written digits on a compatible monitor, and the network prediction is displayed on a 7-segment display.

The following figure shows the resulting schematic after our model has been synthesized.

## Inputs
- `btnL`: Left button
- `btnR`: Right button
- `clk`: 100MHz base clock
- `reset`: Board reset line
- `color_sel`: 3x on-board toggle switches to change the VGA image grid color

## Modules
- `btnX_deb`: Push button debouncers
- `clk_div`: 100MHz clock divider with 50MHz/25MHz clock outputs
- `mnist_dataset`: A collection of 16x 28x28 vectorized MNIST images
- `nn_top`: Neural network module; takes a single image and 50MHz clock signal and returns the predicted 4-bit number [0-9]
- `graphics_top`: VGA controller that outputs the selected MNIST image in RGB at a resolution of 640x480 @ 60Hz
- `ss_display`: Shows the network prediction on a 7-Segment display.

<img width="1670" alt="image" src="https://user-images.githubusercontent.com/19367848/119194205-96bf0200-ba37-11eb-879c-0a379b7244f9.png">
