#include <iostream>
#include "funcs.h"

//Task D: Pairwise sum
/*
Implement the function vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) 
that returns a vector of integers whose elements are the pairwise sum of the elements from the 
two vectors passed as arguments. If a vector has a smaller size than the other, consider extra 
entries from the shorter vectors as 0.
*/
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> newVect;
    if(v1.size() < v2.size()){
        for(int i = 0; i < v2.size(); i++){
            if(i < v1.size()){
                newVect.push_back(v1[i] + v2[i]);
            }
            else{
                newVect.push_back(v2[i]);
            }
        }
    }
    else{   //if v1.size() > v2.size()
        for(int i = 0; i < v1.size(); i++){
            if(i < v2.size()){
                newVect.push_back(v1[i] + v2[i]);
            }
            else{
                newVect.push_back(v1[i]);
            }
        }
    }
    return newVect;
}