#include <iostream>
#include "funcs.h"

//Task B: A Happy Filter
/*
Implement the function vector<int> goodVibes(const vector<int>& v); that, given a 
vector of integers, returns a vector with only the positive integers in the same order.
*/
std::vector<int> goodVibes(const std::vector<int>& v){
    std::vector<int> posVect;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            posVect.push_back(v[i]);
        }
    }
    return posVect;
}