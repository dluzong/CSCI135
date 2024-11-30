//Daphne Luzong
//CSCI 135
//Michael Zamansky
//Lab 12

#include <iostream>
#include <vector>
#include "funcs.h"

int main(){
    //Task A:
    std::vector<int> make1 = makeVector(5);
    std::vector<int> make2 = makeVector(10);
    for(int i = 0; i < make1.size(); i++){
        std::cout << make1[i] << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < make2.size(); i++){
        std::cout << make2[i] << " ";
    }
    std::cout << std::endl;

    //Task B:
    std::vector<int> v {1,2,-1,3,4,-1,6};
    std::vector<int> pos_v = goodVibes(v);
    for(int i = 0; i < pos_v.size(); i++){ // returns [1,2,3,4,6]
        std::cout << pos_v[i] << " ";
    }
    std::cout << std::endl;

    //Task C:
    std::vector<int> v1 {1,2,3};
    std::vector<int> v2 {4,5};
    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
    for(int i = 0; i < v1.size(); i++){
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    for(int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << " ";
    }
    std::cout << std::endl;

    //Task D:
    std::vector<int> sum_v1 {1,2,3};
    std::vector<int> sum_v2 {4,5};
    std::vector<int> sum = sumPairWise(sum_v1, sum_v2); // returns [5, 7, 3]
    for(int i = 0; i < sum.size(); i++){
        std::cout << sum[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}