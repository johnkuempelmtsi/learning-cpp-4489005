// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt = -7.66;
    sgn = flt;
    usgn = sgn;

    std::cout << "Float: " << flt << std::endl;
    std::cout << "Signed int: " << sgn << std::endl;
    std::cout << "Unsigned Int: " << usgn << std::endl;
   

    std::cout << std::endl << std::endl;
    return (0);
}
