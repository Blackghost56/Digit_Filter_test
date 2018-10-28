close all;

y = dlmread('E:\Git\Digit_Filter_test\filter_test\data_out.txt','\n');

plot(z);
figure;
spectrogram(z,512,500,512,Fd);
figure;
plot(y);
figure;
spectrogram(y,512,505,512,Fd);