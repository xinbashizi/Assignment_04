#include<math.h>
#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

#include "Point.h"

Point::Point(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    setPoint(x1,y1,x2,y2,x3,y3,x4,y4);
}

void Point::setPoint( double a1, double b1,double a2,double b2,double a3,double b3,double a4,double b4)
{

        if(a1>0.0&&a1<20.0&&b1>0.0&&b1<20.0)
    {
        x1=a1;
        y1=b1;
    }
    else
    {

         x1=1;
         y1=1;
    }


        if(a2>0.0&&a2<20.0&&b2>0.0&&b2<20.0)
    {
        x2=a2;
        y2=b2;
    }
    else
    {

         x2=1;
         y2=1;
    }

        if(a3>0.0&&a3<20.0&&b3>0.0&&b3<20.0)
    {
        x3=a3;
        y3=b3;
    }
    else
    {

         x3=1;
         y3=1;
    }

        if(a4>0.0&&a4<20.0&&b4>0.0&&b4<20.0)
    {
        x4=a4;
        y4=b4;
    }
    else
    {

         x4=1;
         y4=1;
    }
}

void Point::Lenght(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{

    double s12=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    double s13=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    double s14=sqrt(pow((x1-x4),2)+pow((y1-y4),2));
    double s23=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    double s24=sqrt(pow((x2-x4),2)+pow((y2-y4),2));
    double s34=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
    if(s12==s34&&s14*s14==s12*s12+s13*s13)
        cout<<"This is a rectangle."<<endl;
    //double lenght;
    //double width;
    if(s12>s24)
    {
        length=s12;
        width=s24;
    }
    else
    {
       length=s24;
        width=s12;
    }
    cout<<"This Rectangle's length is "<<length<<"  width is "<<width<<endl;
    //a=lenght;
    //b=width;
}
double Point::getLength()//function getLength
{
    return length;
}

double Point::getWidth()//function getWidth
{
    return width;
}
