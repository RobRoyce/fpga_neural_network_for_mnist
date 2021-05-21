#!/usr/bin/python3

# gen_verilog_case.py
#
# Generates a Verilog case statement from values
# received on the input stream.
#
# Each line on the input stream should be an input/
# output pair in the format "x,y"
#

from nn_utils import *

data_width = 16
dp_pos = 5

while(True):

    try:

        data = input().split(',')

        x = format_verilog(dec_2_fp(float(data[0]), data_width, dp_pos), data_width) 
        y = format_verilog(dec_2_fp(float(data[1]), data_width, dp_pos), data_width)

        print("{}: {};".format(x, y))

    except Exception as exception:
        
        #print(exception)

        break

         

