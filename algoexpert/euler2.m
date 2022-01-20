% step size
h = 0.01;
x = 0:h:1;
y = zeros(size(x));
y(1) = 1;
[~, n] = size(x);
disp(n);
for i = 2:n-1
    % f = -y(i);
    f1 = x(i-1)^2 + y(i-1);
    f2 = x(i)^2 + y(i);
    y(i + 1) = y(i) + (h/2 * (f1 + f2));
end
disp(y);
answer = y(n);
disp(answer);
hold off
plot(x, y, "g--", "LineWidth", 2);
hold on
% plot(exp(-1), "ro");
