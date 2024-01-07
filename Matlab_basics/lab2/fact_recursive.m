number=input('please enter the number : ');
returns = fact(number);
disp(returns);
function returns = fact(number)
    
    % Base case: fact of 0 is 1
    if number == 0
        returns = 1;
    else
        % Recursive case: n! = n * (n-1)!
        returns = number * fact(number - 1);
    end
end