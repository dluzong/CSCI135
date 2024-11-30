#include <iostream>
#include "funcs.h"

//Task A: The easy one
/* 
Program a function called vector<int> makeVector(int n) that returns a vector of n integers 
that range from 0 to n-1. Your function must be implemented outside the main function and 
must return a vector.
*/
std::vector<int> makeVector(int n){
    std::vector<int> newVect;
    for(int i = 0; i < n; i++){
        newVect.push_back(i);
    }
    return newVect;
}