/*
Task C: Implementing Vigenere cipher encryption
*/
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"

std::string encryptVigenere(std::string plaintext, std::string keyword){
    int keyword_index = 0;
    std::string encryption = "";
    int arr[keyword.length()];
    for(int i = 0; i < keyword.length(); i++){
        arr[i] = int(keyword[i]) - 97;
    }
    for(int j = 0; j < plaintext.length(); j++){
        if(!isalpha(plaintext[j])){
            encryption = encryption + plaintext[j];
        }
        else{
            encryption = encryption + shiftChar(plaintext[j], arr[keyword_index % keyword.length()]);
            keyword_index ++;
        }
    }
    return encryption;
}

