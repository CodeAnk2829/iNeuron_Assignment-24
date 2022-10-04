// Function to check whether a given number is prime or not
#include <iostream>
using namespace std;
bool ChechPrime(int n)
{
    int count = 0;
    for(int i = 1; i <= n; ++i) {
        if(n % i == 0) {count++;} 
    }
    if(count == 2){
        return true;
    } else {
        return false;
    }
}