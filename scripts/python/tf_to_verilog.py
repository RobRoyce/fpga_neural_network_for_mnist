# tf_to_verilog.py
#
# prints a tf model's weights into various files
# formatted for use in verilog source.
#


import tensorflow as tf
import os
import numpy as np
from nn_utils import *

# Verilog datatype properties
width = 16
decimal_place = 8

# Filenames
weights_l1_fn="weights_l1_data"
biases_l1_fn ="biases_l1_data"

weights_l2_fn="weights_l2_data"
biases_l2_fn ="biases_l2_data"

model = tf.keras.models.load_model("model_data/mnist_model")
#model = tf.keras.models.load_model("model_data/land_model")

#Reordering weights to suit the parallel block ram architecture
l1_weights = np.reshape(model.weights[0].numpy(), (49, 16, 16))
l1_weights = np.transpose(l1_weights, (2,0,1))
l1_weights = np.reshape(l1_weights, (784,16))

l2_weights = np.transpose(model.weights[2].numpy())

stacked_weights = np.vstack((l1_weights, l2_weights))

f_idx = 0

for vec in stacked_weights.transpose():

    with open("weights_data_{}.coe".format(f_idx), "w+") as f:
        
        f.write("memory_initialization_radix=2;\n")
        f.write("memory_initialization_vector=\n")

        for val in vec:

            val = float(val)
            f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))
            f.write(",\n")

        f.seek(f.tell()-2)
        f.write(";")

    f_idx = f_idx + 1



f_idx = 0

with open("biases_l1_data_{}.coe".format(f_idx), "w+") as f:
 
    f.write("memory_initialization_radix=2;\n")
    f.write("memory_initialization_vector=\n")


    for val in model.weights[1].numpy():

        val = float(val)
        f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))
        f.write(",\n")

    f.seek(f.tell()-2)
    f.write(";")



f_idx = 0

with open("biases_l2_data_{}.coe".format(f_idx), "w+") as f:
 
    f.write("memory_initialization_radix=2;\n")
    f.write("memory_initialization_vector=\n")

    for val in model.weights[3].numpy():

        val = float(val)
        f.write(format_verilog(dec_2_fp(val, width, decimal_place), width, add_prefix=False))
        f.write(",\n")

    f.seek(f.tell()-2)
    f.write(";")
