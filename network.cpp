//Task B: Class Network - adding users

//The three main functionalities of the class Network are: 
//  1) adding new users to the network 
//  2) following
//  3) posting messages
//Write a program implementing the first version of the class Network

#include <iostream>
#include "network.h"

bool Network::addUser(std::string usrn, std::string dspn){
    bool alphanumerical = true;
    for(int i = 0; i < usrn.length(); i++){
        if(!isalpha(usrn[i]) && !isdigit(usrn[i])){
            alphanumerical = false;
        }
    }
    if(numUsers < MAX_USERS){
        if(usrn != "" && findID(usrn) == -1 && alphanumerical){//if username is not empty and is not found in the array
            profiles[numUsers] = Profile(usrn, dspn);
            numUsers ++;
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}

Network::Network(){
    numUsers = 0;
}