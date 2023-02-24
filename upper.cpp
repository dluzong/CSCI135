//Task E: top-left half of a square, given the side length
#include <iostream>
#include <string>
#include "funcs.h"

std::string upper(int length){
    std::string shape = "";
    for(int i = 0; i < length; i++){
        for(int k = 0; k < i; k++){
            shape += " ";
        }
        
        for (int j = length; j > i; j--){
            shape += "*";  
        }
        shape += "\n";
    }
    return shape;
}