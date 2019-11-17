// Lab 3: Rectangle.cpp
// Rectangle class member-function definitions.
#include <iostream>
using namespace std;

#include "Rectangle.h" // Rectangle class definition
Rectangle::Rectangle(double x,double y)
{
    setlength(x);
    setwidth(y);
}

void Rectangle::setlength(double x)
{
    if(x>0.0&&x<20.0)
    length=x;
    else
    length=1.0;

}//end funtion setlength

double Rectangle::getlength()
{
    return length;
}//end function getlength

void Rectangle::setwidth(double y)
{
    if(y>0.0&&y<20.0)
    width=y;
    else
    y=1.0;
}//end function setwidth

double Rectangle::getwidth()
{
    return width;
}//end function getwidth
double Rectangle::area(double x,double y)
{
    double area;
    area=x*y;
    return area;
}//end function area

