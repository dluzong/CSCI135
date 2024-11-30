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

//Task B
int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            count++;
        }
    }
    return count;
}
/*
int indentFile(std::string filename){
    std::ifstream fin(filename);
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
}
*/
int main(){
    std::cout << removeLeadingSpaces("        Hello This is A Test") <<std::endl;
    std::cout << countChar("This is a Test{ blah blah {", '{')<<std::endl;
    return 0;
}
