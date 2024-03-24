#include <iostream>
#include <cmath>

int main(){
    int a, b, c;

    std::cout << "Enter side A : ";
    std::cin >> a;

    std::cout << "Enter side B : ";
    std::cin >> b;

    a = std::pow(a, 2);
    b = std::pow(b, 2);

    c = std::sqrt(a+b);

    std::cout << "Side C : " << c << '\n';
    return 0;
}