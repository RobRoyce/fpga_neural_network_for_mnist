# nn_utils.py
#
# Various tools to make our lives easier.
#


def dec_2_fp(val, width, dp):

    mask = 2**width - 1 # All 1's in binary

    sign = -1 if val < 0 else 1

    mag  = round(abs(val) * 2**dp)

    fp_val = 0

    edge_check = mag >> (width-1)

    if (edge_check > 0):
        if (edge_check == 1 and sign == -1):
            pass
        else:
            raise Exception("The value {} does not fit in {} bits with dp={}".format(val, width, dp))

    if sign == -1:
        fp_val   = ((mag ^ mask) + 1)
        #overflow = (fp_val >> (width - 1)) & 0x01
        #fp_val   = (fp_val & mask) + overflow
    else:

        fp_val   = mag

    return fp_val

def fp_2_dec(val, width, dp):

    mask = 2**(width - 1) - 1

    sign = -1 if (val >> width - 1) == 1 else 1

    mag = val & mask

    if sign == -1:
        mag = (mag ^ mask) + 1
    
    return sign * (mag * (2**(-dp)))


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

def dec_2_fp_sm(val, width, dp):
    fp_val = ("{}".format(1 if val < 0 else 0) + "{0:0{width}b}".format(round(abs(val) * (2**dp)), width=width-1))

    if len(fp_val) > width: raise Exception("The value {} does not fit in {} bits with dp={}".format(val, width, dp))

    return fp_val

# Converts the given binary-encoded into a
# floating-point value in python.
#
def fp_sm_2_dec(val, dp):
    num_bits = len(val)
    
    sign = 1 if val[0] == '0' else -1
    whole = val[1:num_bits-dp]
    frac = val[num_bits-dp:]

    return sign * (int(whole,2) + (int(frac,2) * (2**-dp)))


def format_verilog(fp_val, width):
    
    return ("{width}'b{0:0{width}b}".format(fp_val, width=width))


