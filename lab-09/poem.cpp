/*
Task D: Fix the program so that it does not crash your computer:

Fix this program poem.cpp. It should still keep creating poems, 
but all dynamically allocated memory should get deleted when it is 
not needed. (The program can be stopped with Ctrl+C in the terminal.)
*/

#include <iostream>

std::string * createAPoemDynamically() {
    std::string *p = new std::string; //declare a pointer to a string
                            //dynamically allocated memory
    *p = "Roses are red, violets are blue"; //poem
    return p; //return the address where the poem is
}

int main() {
    while(true) {
        std::string *p;
        p = createAPoemDynamically();
        // The memory at the address p still stores the poem we
        // put in it during the function call.

        // assume that the poem p is not needed at this point
        delete p;
    }
}