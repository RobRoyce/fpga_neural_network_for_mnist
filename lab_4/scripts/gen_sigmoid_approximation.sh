# gen_sigmoid_approximation.sh
#
# Ties together various octave/python
# scripts to generate a Verilog case
# statement that approximates the
# sigmoid function with arbitary
# precision in the domain.
#

output_filename="sigmoid_verilog"

cd octave

octave gen_vals.m | python3 ../python/gen_verilog_case.py > ../$output_filename

echo "Verilog case statement stored in file: $output_filename"

cd ..
