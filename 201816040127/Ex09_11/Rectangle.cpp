#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle( double rectanglelength, double rectanglewidth )
{
   setRectangleLength(rectanglelength);
   setRectangleWidth(rectanglewidth);
} // end Rectangle constructor

void Rectangle::setRectangleLength(double length)
{
    rectangleLength=length;
}
double Rectangle::getRectangleLength()
{
    return rectangleLength;
}

void Rectangle::setRectangleWidth(double width)
{
    rectangleWidth=width;
}
double Rectangle::getRectangleWidth()
{
    return rectangleWidth;
}

double Rectangle::Perimeter()
{
    if(rectangleLength<0.0||rectangleLength>20.0||rectangleWidth<0.0||rectangleWidth<20.0)
    {
        cout<<"The number is wrong,please input again: "<<endl;
    }

    return (rectangleLength+rectangleWidth)*2;
} // end function Perimeter

double Rectangle::Area()
{
    if(rectangleLength<0.0||rectangleLength>20.0||rectangleWidth<0.0||rectangleWidth<20.0)
    {
        cout<<"The number is wrong,please input again: "<<endl;
    }

    return rectangleLength*rectangleWidth;
} // end function Area
