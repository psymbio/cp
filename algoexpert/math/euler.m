% step size
h = 0.0001;
x = 0:h:1;
y = zeros(size(x));
y(1) = 1;
[~, n] = size(x);
disp(n);
for i = 1:n-1
    f = -y(i);
    y(i + 1) = y(i) + (h * f);
end
answer = y(n);
to_disp = [answer, exp(-1)];
disp(to_disp);
plot(x, y, "g--", "LineWidth", 2);
hold on
plot(exp(-1), "ro");