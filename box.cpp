/*
Task A. Box
Takes in width and height and prints a rectangular shape with respected dimensions using astericks
*/
#include <iostream>
#include <string>

std::string box(int width, int height){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}