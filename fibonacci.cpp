/*
Daphne Luzong
CSCI135
Michael Zamansky
Lab2D

Task D: Computing Fibonacci Numbers with Loops and Arrays 0, 1, 1, 2, 3, 5, 8, 13…
- an array of ints is used to print all the numbers from F(0) to F(59)
*/

#include <iostream>

int main(){
    // make an array
    int fib[60];
    // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
    // and all the following ones can be computed iteratively as
    std::cout << fib[0] << "\n";
    std::cout << fib[1] << "\n";

    for (int i = 2; i <= 59; i++){  //loop to create the rest of the array
        fib[i] = fib[i-1] + fib[i-2];
        std::cout << fib[i] << "\n"; //prints each number on a new line
    }
    
    return 0;
}
/*When the numbers reach the 2 billions, the maximum integer that the function 
holds is reached. An integer overflow occurs and so some values wrap around that 
maximum integer and turn negative */