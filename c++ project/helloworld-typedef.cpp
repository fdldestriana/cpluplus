#include <iostream>
#include <vector>

// typedef is a reserved keyword to create additional name/ alias/ nickname for another data type
// it can prevents typos and enchance readability

// suppose we are creating a pairlist data type, usually we are going to write
// std::vector<std::pair<std::string, int>> pairlist;

// we can make it more concise by this beneath line, use _t suffix, it stand for type
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// another example
typedef std::string text_t;

// another example using using keyword instead of typedef, lift the same workd
using number_t = int;

int main(){
    std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist2;

    text_t firstName = "Fadly";
    number_t age = 30;
    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}