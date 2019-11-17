#include <iostream>
using namespace std;

#include "Point.h"
Point::Point(double a,double b)
{
    setX(a);
    setY(b);
}
Point::Point()
{
}
void Point::setX(double a)
{
    if(a>0&&a<20)
    {
        x=a;
    }
    else
    {
        throw invalid_argument( "point x must be > 0 and < 20.0" );//不满足条件抛出异常
    }
}
double Point::getX()
{
    return x;
}
void Point::setY(double b)
{
    if(b>0&&b<20)
    {
        y=b;
    }
    else
    {
        throw invalid_argument( "point y must be > 0 and < 20.0" );//不满足条件抛出异常
    }
}
double Point::getY()
{
    return y;
}
