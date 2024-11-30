#include <iostream>
#include <string>
#include "imageio.h"
#include "funcs.h"

//Task A: Invert colors
    //Write a program that inverts all colors
void invert(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w); // read it from the file "inImage.pgm"
    // h and w were passed by reference and
    // now contain the dimensions of the picture
    // and the 2-dimesional array img contains the image data
    
    // Now we can manipulate the image the way we like
    // for example we copy its contents into a new array
    int out[MAX_H][MAX_W];

    //inverts colors by looping through each pixel
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){
            out[row][col] = 255 - img[row][col]; //subtracts 255 from the original px 
        }
    }

    // and save this new image to file "taskA.pgm"
    writeImage("taskA.pgm",out, h, w);
}

//Task B: Invert colors in the right half
    //inverts the colors only in the right-half of the image
void invert_half(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    // Now we can manipulate the image the way we like
    // for example we copy its contents into a new array
    int out[MAX_H][MAX_W];

    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){
            if(col < w/2){
                out[row][col] = img[row][col];
            }
            else{
                out[row][col] = 255 - img[row][col]; //subtracts 255 from the original px 
            }
        }
    }

    // and save this new image to file "taskB.pgm"
    writeImage("taskB.pgm",out, h, w);
}

//Task C: Add a white box
    //draw a white box exactly in the middle of the picture
    //dimensions of the box should be 50% by 50% of the og pic's w and h
void box(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int out[MAX_H][MAX_W];

    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){
            if(row > h/4 && row < h/4 * 3 && col > w/4 && col < w/4 * 3){
                out[row][col] = 255;
            }
            else{
                out[row][col] = img[row][col];
            }
        }        
    }

    writeImage("taskC.pgm",out, h, w);
}

//Task D: One-pixel-thick frame
    //creates a border/frame that is exactly 1 pixel thick
void pixel(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int out[MAX_H][MAX_W];
    
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){ 
            if((col == w/4 || col == 3*w/4 || row == h/4 || row == 3* h/4) && (col >= w/4 && col <= 3*w/4 && row >= h/4 && row <= 3*h/4)){
                out[row][col] = 255;
            }
            else{
                out[row][col] = img[row][col];
            }
        }
    } 

    writeImage("taskD.pgm",out, h, w);
}

//Task E: Scale 200%
    //Scale the og pic to 200% its size
    //can be done by increasing size by a factor of 2, and copying each pizel of the input as a small 2x2 square in the output
void scale(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int out[MAX_H][MAX_W];
    
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){ 
            out[row *2][col *2] = img[row][col];
            out[row *2][col *2+1] = img[row][col];
            out[row *2 + 1][col *2] = img[row][col];
            out[row *2 +1][col *2 +1] = img[row][col];
        }
    }
    
    writeImage("taskE.pgm",out, h*2, w*2);
}

//Task F: Pixelate
    //make exery 2x2 non-overlapping window contain the same value
    //(averaged over all the pixels in that window of the input)
void pixelate(std::string input){
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int out[MAX_H][MAX_W];
    
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++){
            //finding the average of the 2x2 window
            int avg = (img[row][col] + img[row +1][col] + img[row][col +1] + img[row +1][col +1]) / 4;
            //sets the 2x2 window of the output to the average int value
            out[row][col] = avg;
            out[row][col +1] = avg;
            out[row +1][col] = avg;
            out[row +1][col +1] = avg;
        }
    }

    writeImage("taskF.pgm",out, h, w);
}