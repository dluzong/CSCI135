//Task G: takes width and height and prints checkerboard
//of 3x3 squares

#include <iostream>
#include <string>
#include "funcs.h"

std::string checkerboard3x3(int width, int height){
    std::string shape = "";
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if ((row / 3) % 2 == 0){
                if ((col / 3) % 2 == 0){
                    shape += "*";
                }
                else{
                    shape += " ";
                }
            }
            else{
                if ((col / 3) % 2 == 0){
                    shape += " ";
                }
                else{
                    shape += "*";
                }
            }
        
        }
        shape += "\n";
    }
    return shape;
}