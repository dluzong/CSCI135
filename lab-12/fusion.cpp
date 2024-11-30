#include <iostream>
#include "funcs.h"

//Task C: It's over 9000
/*
Implement the function void gogeta(vector<int> &goku, vector<int> &vegeta) that appends
elements of the second vector into the first and empties the second vector.
*/

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}