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
    std::cout << removeLeadingSpaces("        Hello This is A Test") <<std::endl;
    std::cout << countChar("This is a Test{ blah blah {", '{')<<std::endl;
    std::cout << indentFile("bad-code.cpp");
    return 0;
}