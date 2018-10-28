close all;

Fd = 10000;
F1 = 100;
A1 = 1;
F2 = 500;
A2 = 1;

dt = 0:1/Fd:1;

rd = random('Normal', 0, 0.2, 1, (Fd+1));
x1 = A1*sin(2*pi*F1*dt);
x2 = A2*sin(2*pi*F2*dt);

z = x1 + rd + x2;

dlmwrite('E:\Git\Digit_Filter_test\filter_test\data_in.txt',z,'\n');

plot(z);
figure;
spectrogram(z,512,505,512,Fd);
%view(-45,65)