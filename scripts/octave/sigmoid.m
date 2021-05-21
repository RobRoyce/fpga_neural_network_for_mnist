% sigmoid.m
%
% generates the output of a sigmoid function at an arbitrary
% number of points along the curve.

function y = sigmoid(x)

	y = 1.0./(1.0 + e.^(-x));

endfunction
