// Exercise 9.11 Solution: Ex09_11.cpp
// Test program for modified Invoice class.
#include<iostream>
#include<cmath>
using namespace std;
#include "Rectangle.h"
#include "Point.h"
float getSqrt(float x,float y,float q,float w)
{
    return sqrt(pow((y-x),2)+pow((w-q),2));
}
int main()
{
    Point leftUp(2,4);
    Point leftDown(2,1);
    Point rightUp(4,4);
    Point rightDown(4,1);
    Rectangle rectangle(leftUp,leftDown,rightUp,rightDown);
    if(rectangle.isRectangular)
    {
        if(rectangle.isSquare())
        {
             cout << "This is a Square"<<endl;
        }
        else
        {
            cout << "This is a Rectangular"<<endl;
        }
        cout <<"length:"<<rectangle.getLength()<<endl;
        cout << "width:"<<rectangle.getWidth()<<endl;
        cout <<"perimeter"<<rectangle.getPerimeter()<<endl;
        cout << "area:" << rectangle.getArea()<<endl;
    }
    else
    {
        cout << " This is not a Rectangular"<<endl;
    }
    return 0;
}
