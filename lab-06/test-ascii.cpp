/*
Task A: input a line of text (which may include spaces)
Program reports all characters from the input line
along with their ASCII codes
*/

#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string text = "Cat :3 Dog";
    //std::string text2 = "AbcD";

    std::cout << "Input: " << text << "\n";
    for(int i = 0; i < text.length(); i++){//loops through each index # of string
        std::cout << text[i] << " " << (int)text[i] << "\n"; //type casts text[i] into int
    }   //prints char and its ascii code
    
    /* a second test:
    std::cout << "Input: " << text2 << "\n";
    for(int i = 0; i < text2.length(); i++){
        std::cout << text2[i] << " " << (int)text2[i] << "\n"; //type casts text[i] into int
    }
    */
    return 0;
}