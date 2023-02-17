/*
Daphne Luzong
CSCI 135
Michael Zamansky
Lab 4
*/

#include <iostream>
#include <string>
#include "box.h"

int main(){
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout <<"\n---------------\n";
    
    return 0;
}