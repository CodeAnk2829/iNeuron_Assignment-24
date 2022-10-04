// Function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}