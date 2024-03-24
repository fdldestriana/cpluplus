#include <iostream>
#include <cmath>

int main(){
    int age;

    std::cout << "Please enter the age : ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are too old to enter this site!" << '\n';
    }else if(age >= 18){
        std::cout << "Wellcome to this site!" << '\n';
    }else if(age < 0){
        std::cout << "You have not born yet!" << '\n';
    }else{
        std::cout << "You are not old enough to enter!" << '\n';
    }

    return 0;
}