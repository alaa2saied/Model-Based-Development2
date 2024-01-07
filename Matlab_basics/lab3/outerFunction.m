function out = outerFunction
        out=innerFunction(5,8);
        disp(out);
end

function Add= innerFunction(number1,number2)
            Add = number1 + number2;
end