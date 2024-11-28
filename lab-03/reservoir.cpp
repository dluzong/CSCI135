// add your code
// contain a function with the prototype double get_east_storage(std::string date)
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

//Gets the East basin storage for a certain date
double get_east_storage(std::string date){
    std::ifstream fin("Current_Reservoir_Levels.tsv"); //opens file
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    
    std::string junk;        // new string variable
    std::getline(fin, junk); // read one line from the file 


    std::string dateSt;
    double eastSt; // east storage
    
    while(fin >> dateSt >> eastSt) { // this loop reads the file line-by-line
        if (date == dateSt){
            return eastSt;
        } 
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                                  //ignoring the remaining columns 
    }
    fin.close();
    return 0;
}


//Gets the min storage of the East basin
double get_min_east(){
    std::ifstream fin("Current_Reservoir_Levels.tsv"); //opens file
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    
    std::string junk;        // new string variable
    std::getline(fin, junk); // read one line from the file 
    std::string dateSt;

    double eastSt;
    double min = 100;
    while(fin >> dateSt >> eastSt){
        fin.ignore(INT_MAX, '\n');
        if(eastSt < min){
            min = eastSt;
        }
    }
    return min;
    return 0;
    fin.close();
}


//Gets the max storage of the East basin
double get_max_east(){
    std::ifstream fin("Current_Reservoir_Levels.tsv"); //opens file
    
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    
    std::string junk;        // new string variable
    std::getline(fin, junk); // read one line from the file 
    std::string dateSt;

    double eastSt;
    double max = 0;
    while(fin >> dateSt >> eastSt){
        fin.ignore(INT_MAX, '\n');
        if(eastSt > max){
            max = eastSt;
        }
    }
    return max;
    return 0;
    fin.close();
}


// Compares East and West basin values and which is higher or if they are equal
std::string compare_basins(std::string date){
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    
    std::string junk;        // new string variable
    std::getline(fin, junk); // read one line from the file 


    std::string dateSt;
    std::string compare;
    double eastSt; // east storage
    double westSt; // west storage
    double eastEl; // east elevation
    double westEl; // west elevation

    while(fin >> dateSt >> eastSt >> eastEl >> westSt >> westEl) { // this loop reads the file line-by-line
        fin.ignore(INT_MAX, '\n');
        if (date == dateSt){
            
            if(eastEl == westEl){
                compare = "Equal";
            }
            else if(eastEl > westEl){
                compare = "East";
            }
            else if(eastEl < westEl){
                compare = "West";
            }
        } 
    }
    return compare;
    return 0;
    fin.close();
}