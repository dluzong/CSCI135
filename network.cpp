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
    for(int i = 0; i < MAX_USERS; i++){
        for(int j = 0; j < MAX_USERS; j++){
            following[i][j] = false; //modified, setting all elements of the matrix following to false
        }
    }
}

bool Network::follow(std::string usrn1, std::string usrn2){
    following[findID(usrn1)][findID(usrn2)] = true;
    if(following[findID(usrn1)][findID(usrn2)]){
        return true;
    }
    else{
        return false;
    }
}

/*
The second new function printDot() will be used to visualize 
the network. For that, make the function print out the network
in the following format:
    digraph {
        "@mario"
        "@luigi"
        "@yoshi"

        "@mario" -> "@luigi"
        "@luigi" -> "@mario"
        "@luigi" -> "@yoshi"
        "@yoshi" -> "@mario"
    }

*/
void Network::printDot(){
    std::cout << "disgraph {" << std::endl;
    for(int i = 0; i < MAX_USERS; i++){
        if(findID(profiles[i].getUsername()) != -1){
            std::cout << "\t\"@" << profiles[i].getUsername() << "\"" << std::endl;
        }
    }
    for(int i = 0; i < numUsers; i++){
        for(int j = 0; j < numUsers; j++){
            if(following[i][j] == true){
                std::cout << "\t \"@" << profiles[i].getUsername() << "\"" << " -> " << "\"@" << profiles[j].getUsername() << "\"" << std::endl;
            }
        }
    }
}
