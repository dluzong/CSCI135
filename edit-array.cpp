/*
Daphne Luzong
CSCI135
Michael Zamansky
LAB2A

Task C: Using arrays to store, update, and retrieve numbers
Program creates an array of 10 integers, and provides user an interface to edit
any of its elements. 
1. Create an array myData of 10 integers.
2. Fill all its cells with value 1 (using a for loop).
3. Print all elements of the array on the screen.
4. Ask the user to input the cell index i, and its new value v.
5. If the index i is within the array range (0 ≤ i < 10), update the 
asked cell, myData[i] = v, and go back to the step 3. Otherwise, if 
index i is out of range, the program exits.
*/

#include <iostream>

int main(){
    int myData[10];
    for (int i = 0; i < 10; i++){
        myData[i] = 1; //assigns 1 to each index of array
       // std::cout << myData[i] << " ";
    }
    std::cout << std::endl;

    int index, value;
    do {
        for (int i = 0; i < 10; i++){
             std::cout << myData[i] << " "; //prints the array
        }
        std::cout << "\n";

        //gets index and value from user:
        std::cout << "Input index: ";
        std::cin >> index;
        std::cout << "Input value: ";
        std::cin >> value;


        if (index < 0 || index >= 10){ //tests if i is out of the range the program ends
            std::cout << "Index out of range. Exit.\n";
        }
        else{
            myData[index] = value; //index is good, array will print with new value
            std::cout << "\n";
        }

    } while (index >=0 && index < 10); //if index was good, repeat
    
    return 0;
}