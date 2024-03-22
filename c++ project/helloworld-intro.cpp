// iostream is a header file that contains basic functions to input and output
#include <iostream>

// This is the comment
/*
This
is 
multiline
comment
*/

int main(){
    std::cout << "I like pizza!" << '\n';
    std::cout << "It's really good" << '\n';

    // integer (whole number)
    int x = 0;
    int age = 21;
    int year = 2023;
    int days = 7.5;
    std::cout << days << '\n';

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';
    std::cout << initial << '\n';

    // boolean (true or faslse)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";
    std::cout << "Hello " << name << " you are " << age << " years old" << '\n';

    return 0;
}










