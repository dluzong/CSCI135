/* 
Daphne Luzong
username: dluzong
Task D: Find the given number of days in a given month
    - Asks the user to input a year and month (1-12) and prints the number of days in that month 
    (taking into account leap years)
*/

#include <iostream>

int main(){
    int year;
    int month;
    std::cout << "Enter year:";
    std::cin >> year;
    std::cout << "Enter month:";
    std::cin >> month;
    if (month == 2){
        if (year % 4){
            std::cout << "28 days\n";
        }
        else if (year % 100){
            std::cout << "29 days\n";
        }
        else if (year % 400){
            std::cout <<"28 days\n";
        }
        else{
            std::cout << "29 days\n";
        }
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        std::cout << "31 days\n";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        std::cout << "30 days\n";
    }
    return 0;
}