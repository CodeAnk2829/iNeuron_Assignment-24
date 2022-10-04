// Function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;
int add(int a, int b, int c = 0)
{
    return (a + b + c);
}