//Task C: shape [size] given, a diagonal cross is made of that dimension
#include <iostream>
#include <string>
#include "funcs.h"

std::string cross(int size){
    std::string shape = "";
    for (int row = 1; row <= size; row++){
        for (int col = 1; col <= size; col++){
            if (row == col || col == (size + 1) - row){
                shape += "*";
            }
            else{
                shape += " ";
            }
        }
        shape += "\n";
    }
    return shape;
}