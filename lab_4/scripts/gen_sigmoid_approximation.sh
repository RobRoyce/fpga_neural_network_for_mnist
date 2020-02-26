# gen_sigmoid_approximation.sh
#
# Ties together various octave/python
# scripts to generate a Verilog case
# statement that approximates the
# sigmoid function with arbitary
# precision in the domain.
#

output_filename="sigmoid_verilog"

sigmoid_range=6 # x-values will be between [-range, +range]
sigmoid_n_points=31 # the number of evenly-spaced points to sample the sigmoid at

cd octave

octave gen_vals.m $sigmoid_range $sigmoid_n_points | python3 ../python/gen_verilog_case.py > ../$output_filename

echo "Verilog case statement stored in file: $output_filename"

cd ..