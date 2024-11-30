#include <iostream>
#include <string>
#include "imageio.h"
#include "funcs.h"

int main(){
    std::string image = "inImage.pgm";
    invert(image);
    invert_half(image);
    box(image);
    pixel(image);
    scale(image);
    pixelate(image);
    
    return 0;
}