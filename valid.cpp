/*
Daphne Luzong
CSCI 135
Michael Zamansky
Lab2A

User is asked to input an integer in the range 0 < n < 100
If number is out of range, program asks user to reinput a valid number
Once a valid number is obtained, then it is printed n squared.
*/

#include <iostream>

int main(){
    int n;
    std::cout << "Please enter an integer: ";
    std::cin >> n;
    while (n <= 0 || n >= 100){
        std::cout << "Please re-enter: ";
        std::cin >> n;
    }
    std::cout << "Number squared is " << n * n << std::endl;
    return 0;
}