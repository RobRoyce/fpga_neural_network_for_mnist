args = argv();

x_range = str2num(args{1});
n_points = str2num(args{2});

[x, y] = gen_sigmoid_vals(x_range, n_points);

for i=1:n_points
	printf("%f,%f\n",x(i),y(i))
endfor	

