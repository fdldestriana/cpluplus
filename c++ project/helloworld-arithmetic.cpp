#include <iostream>

int main() {
    int students = 20;
    
    // addition
    students = students + 1;
    std::cout << students << '\n';

    // substraction
    students -= 1;
    std::cout << students << '\n';

    // multiplication
    students *= 2;
    std::cout << students << '\n';

    // division
    students /= 2;
    std::cout << students << '\n';

    // modulo
    int remainder = students % 3;
    std::cout << remainder << '\n';
    
    // priority in arithmetic
    // parenthesis > multiplication & division > addition & substraction
    return 0;
}