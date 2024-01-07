evenNumbers    = [2,4,6,8,10];
primeNumbers   = [2;3;5;7;11];
primeNumbers   = primeNumbers';
combinedVector = cat(1,evenNumbers,primeNumbers);
disp("the concatinate between even matrix and prime number");
disp(combinedVector);

identityMatrix = eye(3,3);
magicSquare    = ones(2,3);
combinedMatrix = vertcat(identityMatrix,magicSquare);
disp("the vertical concatinate between identity matrix and square number");
disp(combinedMatrix);