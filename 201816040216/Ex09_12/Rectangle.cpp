// Rectangle.cpp
// UpRectangle class member-function definitions.
#include <iostream>
using namespace std;
#include<math.h>

#include "UpRectangle.h" //UpRectangle class definition
UpRectangle::UpRectangle(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
   setlength(x1,y1,x2,y2,x3,y3,x4,y4);
   setwidth(x1,y1,x2,y2,x3,y3,x4,y4);
   setperimeter(length,width);
   setarea(length,width);
}//end function UpRectangle
void UpRectangle::setlength(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    double a,b;

    if(y1==y2)
    {
      b=fabs(x1-x2);
      a=fabs(y1-y3);
    }
    else if(x1==x3)
    {
    a=fabs(y1-y3);
    b=fabs(x1-x2);
    }
    else
    {
    b=fabs(x1-x4);
    a=fabs(y1-y4);
    }
    if(a<=b)
    length=b;
    else
    length=a;

}//end function setlength
double UpRectangle::getlength()
{

    return length;
}//end function getlength

void UpRectangle::setwidth(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    double i,j;
    if(x1==x2)
    {
    i=fabs(y1-y2);
    j=fabs(x1-x3);
    }
    else if(y1==y3)
    {
    j=fabs(x1-x3);
    i=fabs(y1-y2);
    }
    else
    {
    i=fabs(y1-y4);
    j=fabs(x1-x4);
    }
    if(i<=j)
    width=i;
    else
    width=j;

}//end function setwidth
double UpRectangle::getwidth()
{
    return width;
}//end function getwidth

void UpRectangle::setperimeter(double length,double width)
{
    perimeter=(length+width)*2;
}//end function setperimeter

double UpRectangle::getperimeter()
{
    return perimeter;
}//end function getperimeter

void UpRectangle::setarea(double length,double width)
{
    area=length*width;
}//end function setarea

double UpRectangle::getarea()
{
    return area;
}//end function getarea

double UpRectangle::judgement(double x1,double x2,double x3,double x4,double y1,double y2,double y3,double y4)
{
    if(x1>0&&x1<=20&&x2>0&&x2<=20&&x3>0&&x3<=20&&x4>0&&x4<=20&&y1>0&&y1<=20&&y2>0&&y2<=20&&y3>0&&y3<=20&&y4>0&&y4<=20)
    cout<<"输入的坐标都在第一象限"<<endl;
    else
    cout<<"输入的坐标不在第一象限（或输入的坐标不都在第一象限）"<<endl;
}//end function judgment

double UpRectangle::square()
{
    if(length==width)
    cout<<"坐标确定的矩形是正方形"<<endl;
    else
    cout<<"坐标确定的不是正方形"<<endl;
}

