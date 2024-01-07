%define constant
zeta=1;
wn=1;
num=[0 0 wn^2];
dem=[1 2*zeta*wn wn^2];
G=tf(num,dem);
step(G);
hold on