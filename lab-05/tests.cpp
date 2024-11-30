/*
Daphne Luzong 
CSCI 135
Michael Zamansky

Lab 5
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Task A, isDivisibleBy") {
  CHECK(isDivisibleBy(6,3) == 1);
  CHECK(isDivisibleBy(6,5) == 0);
}

TEST_CASE("Task B, isPrime") {
  CHECK(isPrime(1) == 0);
  CHECK(isPrime(15) == 0);
  CHECK(isPrime(5) == 1);
}

TEST_CASE("Task C, nextPrime") {
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
  CHECK(nextPrime(2) == 3);
}

TEST_CASE("Task D, countPrimes") {
  CHECK(countPrimes(1,20) == 8);
  CHECK(countPrimes(0,3) == 2);
  CHECK(countPrimes(1,10) == 4);
}

TEST_CASE("Task E, isTwinPrime"){
  CHECK(isTwinPrime(3) == 1);
  CHECK(isTwinPrime(23) == 0);
  CHECK(isTwinPrime(11) == 1);
}

TEST_CASE("Task F, nextTwinPrime"){
  CHECK(nextTwinPrime(3) == 5);
  CHECK(nextTwinPrime(7) == 11);
}

TEST_CASE("Task G, largestTwinPrime"){
  CHECK(largestTwinPrime(5,18) == 17);
  CHECK(largestTwinPrime(1,31) == 31);
  CHECK(largestTwinPrime(14,16) == -1);
}