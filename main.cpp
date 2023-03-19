/*
Daphne Luzong
CSCI 135 
Michael Zamansky
Lab 7
*/
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "funcs.h"

int main(){
    std::cout << removeLeadingSpaces("        Hello Test") <<std::endl;
    std::cout << countChar("Testing{ 1 2 3 {", '{')<<std::endl;
    std::cout << indentFile("bad-code.cpp");
    return 0;
}