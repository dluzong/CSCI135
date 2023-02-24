/*
Daphne Luzong
CSCI 135
Michael Zamansky
Lab 4
*/

#include <iostream>
#include <string>
#include "funcs.h"

int main(){
    //Task A Test
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    result = box(4,3);
    std::cout << "box(4,3):\n";
    std::cout << result;
    std::cout <<"\n";
    
    return 0;
}