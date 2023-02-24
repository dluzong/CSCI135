//Task D: bottom-left half of a square, given the side length
#include <iostream>
#include <string>
#include "funcs.h"

std::string lower(int length){
    std::string shape = "";
    for(int i = 0; i <= length; i++){
        for (int j = 0; j < i; j++){
            shape += "*";  
        }
        shape += "\n";
    }
    return shape;
}