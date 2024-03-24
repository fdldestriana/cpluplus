#include <iostream>
#include <cmath>

int main(){
    char op;
    int num1, num2, result;

    std::cout << "***************** CALCULATOR *****************" << '\n';

    std::cout << "Please enter the operator (+ - / *) : ";
    std::cin >> op;

    std::cout << "Enter #1 : ";
    std::cin >> num1;

    std::cout << "Enter #2 : ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2; 
        std::cout << "Result : " << result << '\n';
        break;
    case '-':
        result = num1 - num2; 
        std::cout << "Result : " << result << '\n';
        break;
    case '/':
        result = num1 / num2; 
        std::cout << "Result : " << result << '\n';
        break;
    case '*':
        result = num1 * num2; 
        std::cout << "Result : " << result << '\n';
        break;
    default:
        std::cout << "Not a valid opeartor" << '\n';
        break;
    }
    std::cout << "**********************************************" << '\n';
    return 0;
}