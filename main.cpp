/*
Daphne Luzong
Michael Zamansky
CSCI 13500
Lab 6
*/

#include <iostream>
#include "caesar.h"

int main()
{
  //Task B
  std::cout << "Enter plaintext: Way to Go!\n";
  std::cout << "Ciphertext: " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "Enter plaintext: Hello, World!\n";
  std::cout << "Ciphertext: " << encryptCaesar("Hello, World!", 10) <<std::endl;
  std::cout << "-------------------\n";

  return 0;
}
