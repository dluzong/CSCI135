#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "funcs.h"

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

//indentation
std::string indentFile(std::string filename){
    int count = 0;
    std::string line, output;
    std::ifstream fin(filename);

    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }

    while(std::getline(fin,line)){
        std::string newLine = removeLeadingSpaces(line);
        int closedBrace = countChar(newLine, '}');
        count -= closedBrace;
        for(int i = 0; i < count; i++){
            output += '\t';
        }
        output += newLine + "\n";
        int openBrace = countChar(newLine, '{');
        count += openBrace;
    }
    fin.close();
    return output;
}


