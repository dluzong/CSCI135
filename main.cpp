/*
Daphne Luzong 
CSCI 135
Michael Zamansky

Lab 5
*/

#include <iostream>


#include "funcs.h"

int main()
{
  //Task A, Ex 1)
  std::cout << "6 is divisible by 3.\n";
  if(isDivisibleBy(6, 3) == 1){
    std::cout << "True\n";
  }
  else{
    std::cout << "False\n";
  }
  //Ex 2)
  std::cout << "6 is divisible by 5.\n";
  if(isDivisibleBy(6, 5) == 1){
    std::cout << "True\n";
  }
  else{
    std::cout << "False\n";
  }
  
  std::cout << "------------------------\n";
  
  //Task B:
  std::cout << "3 is a prime number.\n";
  if(isPrime(3) == 1){
    std::cout << "True\n";
  }  
  else{
    std::cout << "False\n";
  }
  std::cout << "15 is a prime number.\n";
  if(isPrime(15) == 1){
    std::cout << "True\n";
  }
  else{
    std::cout << "False\n";
  }
  std::cout << "1 is a prime number.\n";
  if(isPrime(1) == 1){
    std::cout << "True\n";
  }
  else{
    std::cout << "False\n";
  }

  std::cout << "------------------------\n";

  //Task C: 
  std::cout << "The smallest prime number after 14 is: ";
  std::cout << nextPrime(14) << std::endl;
  std::cout << "The next prime number after 17 is: ";
  std::cout << nextPrime(17) << std::endl;
  
  std::cout << "------------------------\n";

  //Task D: 
  std::cout << "The number of prime numbers in the range (1,20) is: ";
  std::cout << countPrimes(1,20) << std::endl;
  //std::cout << "The number of prime numbers in the range (0,3) is: ";
  //std::cout << countPrimes(0,3) << std::endl;
  //std::cout << "The number of prime numbers in the range (2,4) is: ";
  //std::cout << countPrimes(2,4) << std::endl;

  return 0;
}
