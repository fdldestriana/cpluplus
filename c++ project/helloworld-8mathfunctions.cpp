#include <iostream>
#include <cmath>

int main(){
    int x = 3, y = 4, z;

    z = std::max(x, y);
    std::cout << z << '\n';

    z = std::min(x, y);
    std::cout << z << '\n';

    z = std::pow(2, 3);
    std::cout << z << '\n';

    z = std::sqrt(9);
    std::cout << z << '\n';

    z = std::abs(-3);
    std::cout << z << '\n';

    z = std::round(3.14);
    std::cout << z << '\n';

    z = std::ceil(3.99);
    std::cout << z << '\n';

    z = std::floor(3.99);
    std::cout << z << '\n';

    return 0;
}