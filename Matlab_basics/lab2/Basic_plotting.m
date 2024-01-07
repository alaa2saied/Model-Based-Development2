
t = 0:0.01:1;
f=2;
hold off
plot_var = sin(2*pi*t*f);
plot(t,plot_var,'m')
xlabel('Time');
ylabel('on Period');
legend('sine wave ');