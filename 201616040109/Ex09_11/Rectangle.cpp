// Exercise 9.11 Solution: Rectangle.cpp
// Member-function definitions for class Rectangle
using namespace std;
#include "Rectangle.h"
Rectangle::Rectangle(float length,float width)
{
    setLength(length);
    setWidth(width);
}
void Rectangle::setLength(float length)
{
    if(length>0&&length<20){
        this->length=length;
    }
    else
    {
        this->length=1;
    }
}
void Rectangle::setWidth(float width)
{
    if(width>0&&width<20)
    {
        this->width=width;
    }
    else
    {
        this->width=1;
    }
}
float Rectangle::getLength()
{
    return length;
}
float Rectangle::getWidth()
{
    return width;
}
