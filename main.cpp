/*
Daphne Luzong
CSCI 135
Michael Zamansky
Lab2B

Two files main.cpp and funcs.cpp, and a header file funcs.h
funcs.cpp includes void function which accepts two integer parameters 
and will print the output as specified in the main lab
This function is called from the main function under main.cpp

Task B: ask user to input two integers L and U, and print out all integers
in the range L <= i < U
*/

#include <iostream> 
#include "funcs.h"

int main(){
    std::cout << "The interval between -5 and 10 is: ";
    print_interval(-5, 10);
    std::cout << "\nThe interval between 3 and 20 is: ";
    print_interval(3,20);
    std::cout << "\n";
    return 0;
}

