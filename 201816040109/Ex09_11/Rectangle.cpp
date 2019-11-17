#include <iostream>
using namespace std;

#include "Rectangle.h"
Rectangle::Rectangle(double len,double wid)
{
    setLength(len);
    setWidth(wid);
}
void Rectangle::setLength(double len)
{
    if(len>0.0 && len<20.0)
    {
        length=len;
    }
    else
    {
        throw invalid_argument( "length must be > 0 and < 20.0" );//异常处理
    }
}
double Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(double wid)
{
    if(wid>0.0 && wid<20.0)
    {
        width=wid;
    }
    else
    {
        throw invalid_argument( "width must be > 0 and < 20.0" );//异常处理
    }
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::getPerimeter()
{
    return (width+length)*2;
}
double Rectangle::getArea()
{
    return width*length;
}
