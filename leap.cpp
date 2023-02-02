/* 
Daphne Luzong
username: dluzong
Task C: A leap year or a common year?
    - Asks the user to input an integer representing a year number (1999, 2016, etc.) If the year is
    a leap year, the program will print "leap year" and "common year" otherwise.
*/

#include <iostream>

int main(){
   int i;
   std::cout << "Enter year: ";
   std::cin >> i;
   if (i % 4 != 0){
    std::cout << "Common year\n";
   }
   else if (i % 100 != 0){
    std::cout << "Leap year\n";
   }
   else if (i % 400 != 0){
    std::cout <<"Common year\n";
   }
   else{
    std::cout << "Leap year\n";
   }
   return 0;
}