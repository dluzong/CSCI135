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
    std::string result;

    //Task A Test
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    result = box(4,3);
    std::cout << "box(4,3):\n";
    std::cout << result;
    std::cout <<"\n";

    //Task B Test
    result = checkerboard(11,6);
    std::cout << "checkboard(11,6):\n";
    std::cout << result;
    std::cout << "\n";

    //Task C Test
    result = cross(8);
    std::cout << "cross(8):\n";
    std::cout << result;
    std::cout << "\n";

    //Task D Test
    result = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result;
    std::cout << "\n";

    //Task E Test
    result = upper(5);
    std::cout << "upper(5):\n";
    std::cout << result;
    std::cout << "\n";

    //Task F Test
    result = trapezoid(12, 5);
    std::cout << "trapezoid(12, 5):\n";
    std::cout << result;
    std::cout << "\n";

    result = trapezoid(12, 7);
    std::cout << "trapezoid(12, 7):\n";
    std::cout << result;
    std::cout << "\n";

    //Task G Test
    result = checkerboard3x3(16,11);
    std::cout << "checkerboard3x3(16, 11):\n";
    std::cout << result;
    std::cout << "\n";

    result = checkerboard3x3(27, 27);
    std::cout << "checkerboard3x3(27, 27):\n";
    std::cout << result;
    std::cout << "\n";
    
    return 0;
}