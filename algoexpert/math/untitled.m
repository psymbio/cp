disp("Hello");
function fx = f(x,y)
    fx = x^(2) + y;
end

function yn = euler_fn(yprev,fprev,h)
    yn = yprev + h*fprev;
end

function y = modified_euler(yprev,fprev,fcurrent,h)
    y = yprev + (h/2)*(fprev+fcurrent);
end

function y = y_real(x)
    y = -(x^(2)+2*x+2) + 3*exp(x);
end


h = 0.001;
e_max = 0.00001;
x0 = 0;
y0 = 1;
xlast = 0.1;
format long;

xprev = x0;
yprev = y0;
yprev_euler = yprev;
fprev = f(xprev,yprev);
fprev_euler = fprev;

n = (xlast - x0)/h;
xstart = x0 + h;
x = xstart:h:xlast;
Y= zeros(1,n);
y = zeros(1,n);
y_euler = zeros(1,n);
iterations = zeros(1,n);

for i=1:1:n
    j = 1;
    xcurrent = x(i);
    Y(i) = y_real(xcurrent);
    ycurrent = euler_fn(yprev,fprev,h);
    y_euler(i) = euler_fn(yprev_euler,fprev_euler,h);
    y(i) = ycurrent;
    fcurrent = f(xcurrent,ycurrent);
    yupdated = modified_euler(yprev,fprev,fcurrent,h);
    while abs(ycurrent- yupdated) > e_max
        j = j + 1;
        ycurrent = yupdated;
        fcurrent = f(xcurrent,ycurrent);
        yupdated = modified_euler(yprev,fprev,fcurrent,h);
       
    end
    y(i) = yupdated;
    iterations(i)=j;
    xprev = x(i);
    yprev = y(i);
    yprev_euler= y_euler(i);
    fprev = f(xprev,yprev);
    fprev_euler = f(xprev,yprev_euler);
end

plot(x,Y,"-b","LineWidth",1);
hold on;
plot(x,y_euler,"--g");
plot(x,y,"r");
hold off;