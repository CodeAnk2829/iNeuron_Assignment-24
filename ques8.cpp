// Overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include <bits/stdc++.h>
using namespace std;
int area(int a, int b)
{
    // Returning area of a rectangle
    return (a * b); 
}
float area(int r)
{
    // Returning area of a circle
    return (3.14 * r * r);
}
float area (int a, int b, int c)
{
    // Calculating perimeter of the triangle
    int p = (a + b + c);
    float s = p / 2.0;

    // Calculating area of the triangle
    float A = sqrt((s - a) * (s - b) * (s - c));

    return A; // Returns the area of a triangle
}