#include <iostream>
#include <cmath>
using namespace std;
#include "Rectangle.h"

Rectangle::Rectangle(Point a,Point b,Point c,Point d)
{
    setRect(a,b,c,d);
}
void Rectangle::setRect(Point a,Point b,Point c,Point d)
{
    if(rectangle(a,b,c,d))
    {
        p1=a;
        p2=b;
        p3=c;
        p4=d;
    }
    else
    {
        throw invalid_argument( "It is not a rectangle" );
    }

}

double Rectangle::getLength()
{
    double l1=p1.getY()-p4.getY();
    double l2=p4.getX()-p1.getX();
    return l1>l2?l1:l2;
}
double Rectangle::getWidth()
{
    double l1=p1.getY()-p4.getY();
    double l2=p4.getX()-p1.getX();
    return l1<l2?l1:l2;
}
double Rectangle::getPerimeter()
{
    return (getLength()+getWidth())*2;
}
double Rectangle::getArea()
{
    return getLength()*getWidth();
}
bool Rectangle::rectangle(Point a,Point b,Point c,Point d)//判断是否为长方形
{
    if(a.getY()==b.getY()&&a.getX()==c.getX()&&b.getX()==d.getX()&&c.getY()==d.getY())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Rectangle::square()//判断是否为正方形
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
