#include <iostream>

// conversion a value of one data type to another data type
// it can be done implicitly and explicitly

int main(){
    int pi = 3.14; // -> it prints 3, the value would converted to int implicitly
    double pi2 = (int) 3.14; // -> it prints 3, the value would converted to int explicitly

    std::cout << pi << '\n';
    std::cout << pi2 << '\n';

    // another example
    char x = 100; // -> according to ASCII table
    std::cout << x << '\n';

    return 0;
}