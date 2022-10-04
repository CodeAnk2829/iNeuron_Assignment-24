// Functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include <iostream>
using namespace std;
int max_element(int a, int b)
{
    return (a > b ? a : b);
}
float max_element(float af, float bf)
{
    return (af > bf ? af : bf);
}
