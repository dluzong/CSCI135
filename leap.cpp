#include <iostream>

int main(){
   int i;
   std::cout << "Enter year:";
   std::cin >> i;
   if (i % 4){
    std::cout << "Common year\n";
   }
   else if (i % 100){
    std::cout << "Leap year\n";
   }
   else if (i % 400){
    std::cout <<"Common year\n";
   }
   else{
    std::cout << "Leap year\n";
   }
   return 0;
}