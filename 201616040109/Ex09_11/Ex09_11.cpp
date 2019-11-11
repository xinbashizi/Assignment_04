// Exercise 9.11 Solution: Ex09_11.cpp
// Test program for modified Rectangle class .
#include <iostream>
#include "Rectangle.h"

using namespace std;
int main()
{
    Rectangle rectangle1(10.5,3.6);
    Rectangle rectangle2(22.5,-3);
    cout << "rectangle1: length= "<< rectangle1.getLength()<<" width= "<<rectangle1.getWidth()<<endl;
    cout << "rectangle2: length= "<< rectangle2.getLength()<<" width= "<<rectangle2.getWidth()<<endl;
    return 0;
}
