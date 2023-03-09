/*
Task A: input a line of text (which may include spaces)
Program reports all characters from the input line
along with their ASCII codes
*/

#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string text;
    text = "Cat :3 Dog";

    std::cout << "Input: " << text << "\n";
   
    for(int i = 0; i < text.length(); i++){
        std::cout << text[i] << " " << (int)text[i] << "\n";
    }
    return 0;
}