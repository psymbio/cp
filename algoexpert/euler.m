% step size
h = 0.001;
x = 0:h:1;
y = zeros(size(x));
y(1) = 1;
[~, n] = size(x);
disp(n);
for i = 1:5
    % f = -y(i);
    f = x(i)^2 + y(i);
    y(i + 1) = y(i) + (h * f);
end
disp(y);
answer = y(n);
disp(answer);
plot(x, y, "g--", "LineWidth", 2);
hold on
% plot(exp(-1), "ro");
