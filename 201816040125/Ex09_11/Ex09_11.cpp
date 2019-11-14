#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle( double lenght, double width )
{
   setRectangleNumber( lenght, width );
}

void Rectangle::setRectangleNumber( double l, double w )
{
    if(l>0.0&&l<20.0&&w>0.0&&w<20.0)
    {
        lenght=l;
        width=w;
    }
    else
    {
        cout<<"ÊäÈë´íÎó£¡£¡£¡"<<endl;
        lenght=1;
        width=1;
    }
}

void Rectangle::Area()
{
 double area;
 area=lenght*width;
 cout<<"This Reclangle's area is "<<area<<endl;
}





 void Rectangle::Perimeter()
 {
     double perimeter;
     perimeter=2*lenght+2*width;
     cout<<"This Rectangle's perimeter is "<<perimeter<<endl;
 }
