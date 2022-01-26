function [y, x] = euler2()
    % step size
    h = 0.01;
    x = 0:h:1;
    y = zeros(size(x));
    y(1) = 1;
    [~, n] = size(x);
    for i = 1:n-1
        f = x(i) ^ 2 + y(i);
        y(i + 1) = y(i) + (h * f);
    end
    plot(x, y, "g--", "LineWidth", 2);
    hold on
    plot(-(1^(2)+2*1+2) + 3*exp(1), "ro");
end
