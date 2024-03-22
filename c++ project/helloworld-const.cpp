#include <iostream>

int main(){
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    // another const variable using uppercase
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    std::cout << circumference << "cm" << '\n';
    
    return 0;
}