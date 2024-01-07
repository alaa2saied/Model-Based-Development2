%define constant
zeta=0;
wn=5;
num=[0 0 wn^2];
dem=[1 2*zeta*wn wn^2];
G=tf(num,dem);
step(G);
xlim([0 2]);