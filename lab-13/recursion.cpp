#include <iostream>
#include "funcs.h"

//Task A: Print all numbers in range
//prints all numbers in range left ≤ x ≤ right, separated by spaces.
std::string printRange(int left, int right){
    std::string range;
    if(left > right){
        return "";
    }
    else{
        range = std::to_string(left) + " "; 
        range += printRange(left+1, right);
        return range; 
    }
}

//Task B: Sum of numbers in range
//computes the sum of all numbers in range left ≤ x ≤ right
int sumRange(int left, int right){
    int range;
    if(left > right){
        return 0;
    }
    else{
        range = left;
        range += sumRange(left+1, right);
        return range;
    }
}

//helper function for Task C
int sumArrayInRange(int *arr, int left, int right){ //helper function
        int arrSum;
        if(left > right){
            return 0;
        }
        else{
            arrSum = arr[left] + sumArrayInRange(arr, left+1, right);
        }
        return arrSum;
    }
//Task C: Sum of elements in array
//receives an array (as a pointer to its first element) and the size of the array, and should return the sum of its elements.
int sumArray(int *arr, int size){
    return sumArrayInRange(arr, 0, size-1);
}

//Task D: Is string alphanumeric?
//returns true if all characters in the string are letters and digits, otherwise returns false.
bool isAlphanumeric(std::string s){
    if(s.length() == 0){
        return true;
    }
    else{
        int n = 0;
        return std::isalnum(s[n]) && isAlphanumeric(s.substr(1, s.length()));
    }
}

//Task E: Nested parentheses
//returns true if the string is a sequence of nested parentheses:
bool nestedParens(std::string s){
    if(s == ""){
        return true;
    }
    else if(s[0] == '(' && s[s.length() - 1] == ')'){
        return nestedParens(s.substr(1, s.length() - 2));
    }
    else{
        return false;
    }
}
