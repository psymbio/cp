

h = 0.01;
x = 0:h:1;
y = zeros(size(x));

x2 = zeros(size(x));
y2 = zeros(size(x));

y(1) = 1;
error_max = 0.001;

[~, n] = size(x);
for i = 1:n-1
    f = x(i)^2 + y(i);
    x2(i) = x(i) + 1/2 * h;
    y2(i) = y(i) + (1/2 * h) * f;
    f2 = x2(i)^2 + y2(i);
    y(i + 1) = y(i) + (h * f2);
    %{
    while abs(y2(i) - y(i+1)) > error_max
        y2(i) = y(i + 1);
        f2 = x2(i)^2 + y2(i);
        y(i + 1) = y(i) + (h * f2);
    end
    %}
end
y_normal_euler = zeros(size(x));
y_normal_euler(1) = 1;
[~, n] = size(x);
for i = 1:n-1
    f = x(i) ^ 2 + y_normal_euler(i);
    y_normal_euler(i + 1) = y_normal_euler(i) + (h * f);
end


plot(x, y, "g--", "LineWidth", 2);
hold on
plot(x, y_normal_euler, "r--", "LineWidth", 2);
hold on
plot(-(1^(2)+2*1+2) + 3*exp(1), "ro");