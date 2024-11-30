/*
Task B: Implementing Caesar cipher encryption
*/
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){ //rshift is the magnitude of the right shift (assume to be in range 0 <= rshift <= 25)
    char shifted_char;
    if(c >= 65 && c <= 90){ //char is uppercase (letters 'A' to 'Z')
        shifted_char = (c - 'A' + rshift) % 26 + 'A';
        return shifted_char;
    }
    else if(c >= 97 && c <= 122){ //char is lowercase (letters 'a' to 'z')
        shifted_char = (c - 'a' + rshift) % 26 + 'a';
        return shifted_char;
    }
    else{ //if c is a symbol
        return c; //no change is done
    }
}
// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift){
    std::string encryption = ""; //empty string
    for(int i = 0; i< plaintext.length(); i++){ //loops through each char in plaintext
        char c = plaintext[i];
        encryption += shiftChar(c, rshift); //adds encrypted character to empty string
    }
    return encryption;
}