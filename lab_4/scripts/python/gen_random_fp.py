# gen_random_fp.py
#
# Generates random fixed-point numbers
#

import math
import random
from nn_utils import dec_2_fp, fp_2_dec, format_verilog

total_vals = 16

width = 16
dp = 5

max_val = 2**width - 1

rand_sum = 0

for i in range(0, total_vals):

    rand_val = math.floor(32 * (random.random()))
    rand_sum = rand_sum + rand_val

    print(format_verilog(rand_val, width, add_prefix=False))

#print("sum (mod {}): {}".format(max_val, format_verilog(rand_sum % (max_val + 1), width)))

