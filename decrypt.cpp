/*
Task D: Implementing Caesar cipher encryption
*/
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string decrypted = "";
    int temp = 26 - rshift;
    for(int i = 0; i < ciphertext.length(); i++){
        char c = ciphertext[i];
        if(isalpha(c)){
            decrypted += shiftChar(c, temp);
        }
        else{
            decrypted += c;
        }
    }
    return decrypted;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    int keyword_index = 0;
    std::string text = "";
    for(int i = 0, j= 0; i < ciphertext.length(); i++){
        if(j > keyword.length() -1){
            j = 0;
        }
        if(isalpha(ciphertext[i])){
            text += shiftChar(ciphertext[i], 26 - (keyword[j] - 97));
            j += 1;
        }
        else{
            text += ciphertext[i];
        }
    }
    return text;
}