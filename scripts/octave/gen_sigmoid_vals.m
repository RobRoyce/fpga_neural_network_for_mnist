% gen_sigmoid_vals.m
%
% Generates num_points number of evenly spaced points along
% the sigmoid curve, from -range to +range.
%

function [x, y] = gen_sigmoid_vals(val_range, num_points)

        step = 2*val_range/(num_points - 1);
	x = [-val_range:step:val_range];
        y = sigmoid(x);        

endfunction
