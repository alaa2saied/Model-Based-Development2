g = 9.81;
l = 1;
x0=10;
TimeStop=10;
model=gcs;
value=1:1:5;
for i=1:numel(value)
    l=value(i);
    res=sim(model);
    plot(res.logsout.get("theta").Values);
    hold on;
    legendlab{i} = "l = " + num2str(l);
end
legend(legendlab);

