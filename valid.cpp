/*
Daphne Luzong
CSCI 135
Michael Zamansky
Lab2A

User is asked to input an integer in the range 0 < n < 100
If number is out of range, program asks user to reinput a valid number
valid number is then printed n squared.
*/

#include <iostream>

int main(){
    int n;
    std::cout << "Please enter an integer: ";
    std::cin >> n;
    while (n < 0 || n > 100){
        std::cout << "Please re-enter: ";
        std::cin >> n;
    }
    if (0 < n && n < 100){
        std::cout << "Number squared is " << n * n << std::endl;
    }
    return 0;
}