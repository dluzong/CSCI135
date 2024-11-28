#include <iostream>
#include "reverseorder.h"
#include <fstream>
#include <cstdlib>
#include <climits>

void reverse_order(std::string date1, std::string date2){
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    
    std::string junk;        // new string variable
    std::getline(fin, junk); // read one line from the file 

    std::string westDate;
    std::string dateArray[365]; //array for dates
    double eastSt, westSt, eastEl, westEl; 
    double westArray[365]; //array for west elevation values
    int count = 0;

    while(fin >> westDate >> eastSt >> eastEl >> westSt >> westEl) { // this loop reads the file line-by-line
        if(westDate >= date1 && westDate <= date2){
            count++;
            westArray[count] = westEl; //adds all elevation values within interval into array
            dateArray[count] = westDate; //adds all dates within interval into array
        }
        fin.ignore(INT_MAX, '\n');
    }
    for (int i = count; i > 0; i--){ //prints date and elevation in reverse order
        std::cout << dateArray[i] << " " << westArray[i] << " ft\n" << std::endl;
    }
    
    fin.close();
}