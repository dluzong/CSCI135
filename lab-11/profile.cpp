//Task A: Class Profile
//write a program to implement the class Profile that can store info
//about a user of the network

#include <iostream>
#include "profile.h"
/*
It has two private properties of type string: displayname and username.

The public interface consists of two constructors initializing the private 
variables and three functions:
getUsername returns the username.
getFullName returns the string in the format “displayname (@username)”.
setDisplayname allows to change the displayname property. (Username is a 
unique user identifier and cannot change, while displayname can be any 
string and can be modified, so the class provides a mechanism for updating 
it.)
*/
std::string Profile::getUsername(){
    return username;
}
std::string Profile::getFullName(){
    return displayname + " (@" + username + ")";
}
void Profile::setDisplayName(std::string dspn){
    displayname = dspn;
}
Profile::Profile(std::string usrn, std::string dspn){
    username = usrn;
    displayname = dspn;
}
    
Profile::Profile(){
    username = "";
    displayname = "";
}

