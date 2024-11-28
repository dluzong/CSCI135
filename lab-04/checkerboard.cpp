//Task B: a rectangular checkerboard of given size using "*" and spaces
#include <iostream>
#include <string>
#include "funcs.h"

std::string checkerboard(int width, int height){
    std::string shape = "";
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((col + row)% 2 == 0){
                shape += "*";
            }
            else {
                shape += " ";
            }
        }
        shape += "\n";
    }
    return shape;
}