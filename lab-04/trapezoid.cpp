//Task F: upside-down trapezoid with given width and height
#include <iostream>
#include <string>
#include "funcs.h"

std::string trapezoid(int width, int height){
    std::string shape = "";
    int spaces = 0;
    int stars = width;
    if (height * 2 > width){
        return "impossible shape!\n";
    }
    for(int i = 0; i < height; i++){
        for(int k = spaces; k >= 0; k--){
            shape += " ";
        }
        
        for (int j = stars; j > 0; j--){
            shape += "*";  
        }
        spaces += 1;
        stars -= 2;
        shape += "\n";
    }
    return shape;
}