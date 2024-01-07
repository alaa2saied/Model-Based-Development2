colorCode = input('enter this color code  ','s');
switch colorCode
    case 'ff00'
        disp('this color is red');
    case 'ffff'
        disp('this color is yellow');
    case 'f3ff'
        disp('this color is blue');
    case 'a2ff'
        disp('this color is green');
    case 'ffbc'
        disp('this color is mint_green');
    otherwise
        disp('this is incorrect');
end