% gen_sigmoid_vals.m
%
% Generates num_points number of evenly spaced points along
% the sigmoid curve, from -range to +range.
%

function y = gen_sigmoid_vals(range, num_points)

        step = 2*range/(num_points - 1);
        y = sigmoid([-range:step:range]);        

endfunction
