# nn_utils.py
#
# Various tools to make our lives easier.
#

# Prints the provided value as a fixed-point
# binary value with the given decimal point.
#
# dp is the number of decimal bits in the
# fixed-point representation of val, where
# each fractional digit is a negative power
# of two.
#
#
# Example:
#
# >>>  dec_2_fp(1.5, 16, 5)
# 
#       0000000000110000
#

def dec_2_fp(val, width, dp):
    fp_val = ("{0:0{width}b}".format(round(val * (2**dp)), width=width))

    if len(fp_val) > width: raise Exception("The value {} does not fit in {} bits with dp={}".format(val, width, dp))

    return fp_val

# Converts the given binary-encoded into a
# floating-point value in python.
#
def fp_2_dec(val, dp):
    num_bits = len(val)
    frac = val[num_bits-dp:]
    whole = val[0:num_bits-dp]

    return int(whole,2) + (int(frac,2) * (2**-dp))

