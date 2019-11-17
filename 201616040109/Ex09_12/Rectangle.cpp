// Exercise 9.12 Solution: Rectangle.cpp
// Member-function definitions for class Rectangle
#include<cmath>
#include<stdexcept>
#include "Rectangle.h"
#include "Point.h"
using namespace std;
Rectangle::Rectangle(Point leftUp,Point leftDown,Point rightUp,Point rightDown)
{
    float leftLine =getSqrt(leftDown.getX(),leftUp.getX(),leftDown.getY(),leftUp.getY());
    float rightLine=getSqrt(rightDown.getX(),rightUp.getX(),rightDown.getY(),rightUp.getY());
    float upLine=getSqrt(leftUp.getX(),rightUp.getX(),leftUp.getY(),rightUp.getY());
    float downLine=getSqrt(leftDown.getX(),rightDown.getX(),leftDown.getY(),rightDown.getY());
    //float longLine=sqrt(getPow(leftDown.getX(),rightUp.getX(),leftDown.getY(),rightUp.getY()));
    if(leftLine==rightLine&&upLine==downLine&&getPow(leftDown.getX(),rightUp.getX(),leftDown.getY(),rightUp.getY())==(getPow(rightDown.getX(),rightUp.getX(),rightDown.getY(),rightUp.getY())+getPow(leftDown.getX(),rightDown.getX(),leftDown.getY(),rightDown.getY())))
    {
        isRectangular=true;
        if(leftLine>=upLine)
        {
            setLength(leftLine);
            setWidth(upLine);
        }
        else
        {
            setLength(upLine);
            setWidth(leftLine);
        }
    }
    else
    {
        throw invalid_argument("It must be Rectangular");
    }
}
void Rectangle::setLength(float length)
{
    this->length=length;
}
void Rectangle::setWidth(float width)
{
    this->width=width;
}
float Rectangle::getLength()
{
    return length;
}
float Rectangle::getWidth()
{
    return width;
}
float Rectangle::getPerimeter()
{
    return ((length+width)*2);
}
float Rectangle::getArea()
{
    return (length*width);
}
float Rectangle::getPow(float x,float y,float q,float w)
{
    return (pow((y-x),2)+pow((w-q),2));
}
float Rectangle::getSqrt(float x,float y,float q,float w)
{
    return sqrt(pow((y-x),2)+pow((w-q),2));
}
bool Rectangle::isSquare()
{
    if(getLength()==getWidth())
    {
        return true;
    }
    else
    {
        return false;
    }
}
