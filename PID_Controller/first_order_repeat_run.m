k = 1:1:5;
t = 1;
time = 0:0.1:10;
%to repeat run of script
for i = 1:numel(k)
    num = [0 k(i)];
    dem = [t 1];
    G = tf(num, dem);
    b= step(G, time);
    plot(time, b);
    hold on;
    grid on
end

