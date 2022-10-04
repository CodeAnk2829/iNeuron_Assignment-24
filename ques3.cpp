// Function to calculate x raised to the power y.
#include <iostream>
using namespace std;
int power(int base, int exp)
{
    int result = 1;
    for(int i = 1; i <= exp; ++i) {
        result *= base;
    }
    return result;
}