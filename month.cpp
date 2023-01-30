#include <iostream>

int main(){
    int year;
    int month;
    std::cout << "Enter year: \n";
    std::cin >> year;
    std::cout << "Enter month: \n";
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
    else if (month == 1 or 3 or 5 or 7 or 8 or 10 or 12){
        std::cout << "31 days\n";
    }
    else {
        std::cout << "30 days\n";
    }
    return 0;
}