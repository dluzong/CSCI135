/*
Daphne Luzong 
username: dluzong
Task B: Find the smaller of the three integers
    - Asks the user to input 3 integer numbers and prints the smallest of the three
*/
#include <iostream>

int main(){
    int i;
    int j;
    int k;
    std::cout << "Enter the first number:";
    std::cin >> i;
    std::cout << "Enter the second number:";
    std::cin >> j;
    std::cout << "Enter the third number:";
    std::cin >> k;
    if (i < j){
        std::cout << "The smaller number of the three is " << i << "\n";
    }
    else if (j < k){
        std::cout << "The smaller of the three is " << j << "\n";
    }
    else{
        std::cout << "The smaller of the three is " << k << "\n";
    }
    return 0;
}