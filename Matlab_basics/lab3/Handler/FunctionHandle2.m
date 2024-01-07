vector=[5,6,7,8,9];
Squre =@(x)x^ 2;
Cube =@(x)x^ 3;
result_Squre=applyFunction (Squre,vector);
result_Cube=applyFunction (Cube,vector);
disp(result_Squre);
disp(result_Cube);