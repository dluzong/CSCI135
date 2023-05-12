#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A: Print all num in range"){
    std::string range1 = "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ";
    std::string range2 = "0 1 2 3 4 5 6 ";
    std::string range3 = "";
    CHECK(printRange(-2,10) == range1);
    CHECK(printRange(0,6) == range2);
    CHECK(printRange(6,4) == range3);
}

TEST_CASE("Task B: Sum of nums in range"){
    CHECK(sumRange(1,3) == 6);
    CHECK(sumRange(-2,10) == 52);
    CHECK(sumRange(10,2) == 0);
}

TEST_CASE("Task C: Sum of an array"){
    int size = 10;
    int *arr = new int[size];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    CHECK(sumArray(arr,size) == 43);
    CHECK(sumArray(arr, 5) == 34);
}

TEST_CASE("Task D: Is string alphanumerical?"){
    CHECK(isAlphanumeric("ABCD") == 1);
    CHECK(isAlphanumeric("") == 1);
    CHECK(isAlphanumeric("Abcd1234xyz") == 1);
    CHECK(isAlphanumeric("KLMN 8-7-6") == 0);
}

TEST_CASE("Task E: Nested parentheses"){
    CHECK(nestedParens("((()))") == 1);
    CHECK(nestedParens("()") == 1);
    CHECK(nestedParens("") == 1);
    CHECK(nestedParens("(((") == 0);
    CHECK(nestedParens("a(b)c") == 0);
}