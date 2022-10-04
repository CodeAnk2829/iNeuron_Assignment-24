// Function to check whether a given number is a term in a Fibonacci series or not.
#include <iostream>
using namespace std;
bool CheckFib(int n)
{
    int a = -1, b = 1;
    int s = 0;
    while(s < n) {
        s = a + b;
        a = b; 
        b = s;
    }

    // If the number is a term in Fibonacci series then it will return true otherwise false
    if(s == n) {
        return true;
    } else {
        return false;
    }
}