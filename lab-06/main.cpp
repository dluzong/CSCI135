/*
Daphne Luzong
CSCI 13500
Michael Zamansky
Lab 6
*/

#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  //Task B
  std::cout << "Enter plaintext: Way to Go!\n";
  std::cout << "Ciphertext: " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "Enter plaintext: Hello, World!\n";
  std::cout << "Ciphertext: " << encryptCaesar("Hello, World!", 10) <<std::endl;
  std::cout << "-------------------\n";
  std::cout << "Enter plaintext: Hello, World!\n";
  std::cout << "Enter keyword: cake\n";
  std::cout << "Ciphertext: " << encryptVigenere("Hello, World!", "cake") <<std::endl;
  std::cout << "Enter plaintext: Way to Go!\n";
  std::cout << "Enter keyword: cake\n";
  std::cout << "Ciphertext: " << encryptVigenere("Way to Go!", "cake") << std::endl;
  std::cout << "-------------------\n";
  std::cout << "Enter plaintext: Hello, World! \n = Caesar = \n";
  std::cout << "Enter shift: 10\n";
  std::cout << "Ciphertext: Rovvy, Gybvn!" <<std::endl;
  std::cout << "Decrypted: "<< decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
  std::cout << "= Vigenere =\n Enter keyword: cake\n Ciphertext: Jevpq, Wyvnd!\n";
  std::cout << "Decrypted: "<< decryptVigenere("Jevpq, Wyvnd!", "cake") <<std::endl;
  return 0;
}
