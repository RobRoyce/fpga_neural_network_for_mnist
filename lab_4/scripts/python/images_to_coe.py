# images_to_coe.py
#
#
# Puts some mnist images into a coe file
#

import tensorflow as tf
import numpy as np

#number of images to put into coe file
num_images = 16

# Output filename. Unique to the number of images you pull
coe_filename = "mnist_images_{}x784_test.coe".format(num_images)

# Where to start pulling images from x_train or x_test.  Kinda irrelevant
starting_index = 500

mnist = tf.keras.datasets.mnist

(x_train, y_train), (x_test, y_test) = mnist.load_data()

x_train = np.round(x_train / 255.0)
#x_test  = np.round(x_test / 255.0)

images = x_train[starting_index:starting_index+num_images]

images = images.reshape(num_images, 784)

# Flips the bit order.
images = np.flip(images, 1)

with open(coe_filename, "w+") as f:

    f.write("memory_initialization_radix=2;\nmemory_initialization_vector=\n")

    for row in images:

        for v in row:

            f.write(str(int(v)))

        f.write(",\n")

    f.seek(f.tell() - 2)
    f.write(";")
