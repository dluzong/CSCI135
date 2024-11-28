// Task A: a solid rectangular box of given size using "*"
#include <iostream>
#include <string>
#include "funcs.h"

std::string box(int width, int height){
    int i, j;
    std::string shape = "";
    for(i = 0; i < height; i++){
        for (j = 0; j < width; j++){
            shape += "*";
        }
        shape += "\n";
    }
    return shape;
}