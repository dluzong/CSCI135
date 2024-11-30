#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "funcs.h"

//Task A: Removing Indentation
std::string removeLeadingSpaces(std::string line){
    int letterIndex;
    int i = 0; //counter
    while(isspace(line[i])){ //loop continues until it reaches the first non-space character
        i++;
    }
    return line.substr(i); //returns substring starting w the first letter to the end of the line
}
