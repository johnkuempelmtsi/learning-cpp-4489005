// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;

    std::cout << "Hello, what is your name?" << std::endl;
    std::cin >> str;
    std::cout << "Hello " + str + "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
