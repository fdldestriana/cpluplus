#include <iostream>
// There is no permission for an entity having the same name variable with another entity
// this can cause error while we are redelaration some variable, so here come the namespace
// to preventing conflict names while some enities have identically name but along the namespaces are different

// declaration the namespace outisde the main function
namespace first {
   int x = 1;
} 

namespace second {
    int x = 2;
}

int main(){
    // int x = 0;
    // if we dont specify, we are going to use the local x
    // std::cout << x << std::endl;

    // if we want to use namespace, use scope resolution operator ::
    std::cout << first::x << std::endl;

    /*
     we still can use namespace by using name space keyword, no need to use ::
     but remember, ensure there is no the same entity's name if we want to use using keyword
    */
    using namespace second;
    std::cout << x << std::endl;

    // another example of using keyword
    using namespace std; // or using std
    string name = "Otong";
    cout << "Hello my name is " << name << '\n';

    return 0;
}