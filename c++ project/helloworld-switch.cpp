#include <iostream>

int main(){
    int month;

    std::cout << "Enter the month (1-12) : ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January" << '\n';
        break;
    case 2:
        std::cout << "It is February" << '\n';
        break;
    case 3:
        std::cout << "It is March" << '\n';
        break;
    case 4:
        std::cout << "It is April" << '\n';
        break;
    case 5:
        std::cout << "It is May" << '\n';
        break;
    case 6:
        std::cout << "It is June" << '\n';
        break;
    case 7:
        std::cout << "It is July" << '\n';
        break;
    case 8:
        std::cout << "It is August" << '\n';
        break;
    case 9:
        std::cout << "It is September" << '\n';
        break;
    case 10:
        std::cout << "It is October" << '\n';
        break;
    case 11:
        std::cout << "It is November" << '\n';
        break;
    case 12:
        std::cout << "It is December" << '\n';
        break;
    default:
        std::cout << "Please enter in numbers only (1-12)" << '\n';
        break;
    }

    char grade;
    std::cout << "Please enter the grade : ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You did very well" << '\n';
        break;
    case 'B':
        std::cout << "You did well" << '\n';
        break;
    case 'C':
        std::cout << "You didn't did pretty well" << '\n';
        break;
    case 'D':
        std::cout << "You didn't did well" << '\n';
        break;
    case 'E':
        std::cout << "You failed" << '\n';
        break;
    case 'F':
        std::cout << "Horrible" << '\n';
        break;
    default:
        std::cout << "Please enter the grade (A-F)" << '\n';
        break;
    }
    return 0;
}