#include <iostream>

// There is no permission for an entity having the same name variable with another entity
// this can cause error while we are redelaration some variable, so here come the namespace
// to preventing conflict names

namespace first {
   int x = 1;
} 

namespace second {
    int x = 2;
}

int main(){
    // This is the comment
    /*
        This
        is 
        multiline
        comment
    */

    // std::cout << "I like pizza!" << "\n";
    // std::cout << "It's really good!" << "\n";

    // integer (whole number)
    int x = 0;
    int age = 21;
    int year = 2023;
    int days = 7.5;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    // boolean (true or faslse)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    // const keyword
    // const variable using uppercase
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << x << '\n';
    std::cout << first::x << '\n'; // scope resolution operator
    std::cout << second::x << '\n'; // scope resolution operator
}