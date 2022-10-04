// Function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
int FindHighestValue(int n) 
{
    int reverse = 1;
    while(n > 0) {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    }
    return (reverse % 10);
}