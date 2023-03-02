/*
Daphne Luzong 
CSCI 135
Michael Zamansky

Lab 5
*/
#include <iostream>
#include "funcs.h"

//Task A: Is Divisible?
bool isDivisibleBy(int n, int d){
    if(n % d == 0){ //tests if n is divisible by d
        return true;
    }
    else{
        return false;
    }
}

//Task B: Is a Prime?
bool isPrime(int n){
    if(n == 0 || n==1){ // 0 and 1 are not prime
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

//Task C: Next Prime
int nextPrime(int n){
    int prime = n + 1;
    if(prime == 0 || prime == 1){
        prime++;
    }
    for(int i = 2; i < prime; i++){
        if(prime % i == 0){
            prime++;
        }
    }
    return prime;
}

//Task D: Count primes in range
int countPrimes(int a, int b){
    int count = 0;
    //tests if number is prime: 
    for(int range = a; range <= b; range++){
            if(isPrime(range) == 1){
                count++;
            }
    }
    return count;
}

//Task E: Is a twin prime?
bool isTwinPrime(int n){
    if(isPrime(n)){
        if(isPrime(n+2) == 1 || isPrime(n-2) == 1){
            return true;
        }
        else{
            return false;
        }
    }
    return 0;
}

//Task F:
int nextTwinPrime(int n){
    int i = 1+n;

    while(isPrime(n)){
        if(isTwinPrime(i)){
            return i;
        }
        else{
            i++;
        }
    }
    return i;
}

//Task G: Largest twin prime in range
int largestTwinPrime(int a, int b){
    int largestPrime = -1;

    for(int i = a; i <= b; i++){ //range
        if(isTwinPrime(i)){
            largestPrime = i;
        }
    }
    return largestPrime;
}
