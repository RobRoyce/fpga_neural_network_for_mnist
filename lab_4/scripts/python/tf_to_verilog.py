# tf_to_verilog.py
#
# prints a tf model's weights into various files
# formatted for use in verilog source.
#


import tensorflow as tf
import numpy as np
from nn_utils import *

# Verilog datatype properties
width = 16
decimal_place = 9

# Filenames
weights_l1_fn="weights_l1_data"
biases_l1_fn ="biases_l1_data"

weights_l2_fn="weights_l2_data"
biases_l2_fn ="biases_l2_data"

#model = tf.keras.models.load_model("model_data/mnist_model")
model = tf.keras.models.load_model("model_data/land_model")

with open(weights_l1_fn, "w+") as f:

    for vec in np.transpose(model.weights[0].numpy()):

        for val in vec:
            val = float(val)
            f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))

        f.write("\n")

with open(biases_l1_fn, "w+") as f:

    for val in model.weights[1].numpy():
        val = float(val)
        f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))
        f.write("\n")

with open(weights_l2_fn, "w+") as f:

    for vec in np.transpose(model.weights[2].numpy()):

        for val in vec:
            val = float(val)
            f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))

        f.write("\n")

with open(biases_l2_fn, "w+") as f:

    for val in model.weights[3].numpy():
        val = float(val)
        f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))
        f.write("\n")
