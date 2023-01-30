// Task A: Find the smaller of the two integers
#include <iostream>

int main(){
    int i;
    int j;
    
    std::cout << "Enter the first number:";
    std::cin >> i;
    std::cout << "Enter the second number:";
    std::cin >> j;

    if (i > j){
        std::cout << "The smaller of the two is " << j << std::endl;
    }
    else {
        std::cout << "The smaller of the two is " << i << std::endl;
    }
    return 0;
}


