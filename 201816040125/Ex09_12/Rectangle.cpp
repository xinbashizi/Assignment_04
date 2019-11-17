#include <math.h>
#include <iostream>
using namespace std;

#include "Rectangle.h"


Rectangle::Rectangle( double a, double b)
{
   setdate( a,b);
}

void Rectangle::setdate( double a, double b)
{
     length=a;
     width=b;

}

void Rectangle::Area()
{
 double area;

 area=length*width;
 cout<<"This Reclangle's area is "<<area<<endl;
}

void Rectangle::Perimeter()
 {
     double perimeter;

     perimeter=2*length+2*width;
     cout<<"This Rectangle's perimeter is "<<perimeter<<endl;
 }


void Rectangle::Square()
{

    if(length==width)
        cout<<"this Rectangle is Square"<<endl;
}

