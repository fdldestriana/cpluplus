#include <iostream>

int main(){
    int grade;

    std::cout << "Please enter the grade : ";
    std::cin >> grade;

    grade >= 75 ? std::cout << "You passed" << '\n' : std::cout << "You failed" << '\n';
    return 0;
}