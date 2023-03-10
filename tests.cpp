#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B, caesar"){
    CHECK(encryptCaesar("Hello, World!", 5) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Way to Go!", 10) == "Bfd yt Lt!");
}

TEST_CASE("Task C, vigenere"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Way to Go!", "cake") == "Yai xq Gy!");
}

TEST_CASE("Task D, decrypt"){
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(encryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}