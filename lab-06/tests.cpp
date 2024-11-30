#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("Task B, caesar"){
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

TEST_CASE("Task C, vigenere"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Way to Go!", "cake") == "Yai xq Gy!");
}

TEST_CASE("Task D, decrypt"){
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}

TEST_CASE("Cipher lab, freq"){
    CHECK(freq('a',"aaaa") == 100);
    CHECK(freq('l', "hello world")== doctest::Approx(27.2727));
}
TEST_CASE("Cipher lab, distance"){
    double a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    double b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    CHECK(distance(a,b) == 0);
}
TEST_CASE("Cipher lab, solve func"){
    CHECK(solve(encryptCaesar("Once upon a time, there was a princess", 8)) == "Once upon a time, there was a princess");
    CHECK(solve(encryptCaesar("I love cats and dogs", 5)) == "I love cats and dogs");
}