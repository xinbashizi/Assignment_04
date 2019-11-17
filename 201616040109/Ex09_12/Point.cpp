// Exercise 9.12 Solution: Point.cpp
// Member-function definitions for class Point
#include<stdexcept>
#include "Point.h"
using namespace std;

Point::Point(float x,float y)
{
    if(x>0&&x<20)
    {
        setX(x);
    }
    else
    {
        throw invalid_argument("X must be range(0,20]");
    }

    if(y>0&&y<20){
        setY(y);
    }
    else
    {
        throw invalid_argument("Y must be range(0,20]");
    }

}
void Point::setX(float x)
{
        this->x=x;
}
void Point::setY(float y)
{
        this->y=y;
}
float Point::getX()
{
    return x;
}
float Point::getY()
{
    return y;
}
