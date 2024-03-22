#include <iostream>

// cout << (inserttion operator)
// cin >> (extraction operator)

int main(){
    std::string name;
    std::string fullName;
    int age = 30;

    std::cout << "What is your name? : ";
    std::cin >> name;
    std::cout << "What is your age? : ";
    std::cin >> age;

    // another example if we want to receive a string with a whitespace
    // std::ws remove any whitespace or enter character before the fullname, because in the above
    // we use std::cin >> age, and it is still has buffer in the input section, so remove the buffer first
    std::cout << "What is your fullname name? : ";
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Hello " << fullName << '\n';
    std::cout << "You are " << age << " years old" <<'\n';

    return 0;
}