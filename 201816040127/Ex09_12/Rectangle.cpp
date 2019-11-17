#include <iostream>
using namespace std;

#include "Rectangle.h"
#include "math.h"

Rectangle::Rectangle( double x1, double y1, double x2, double y2,double x3,double y3,double x4,double y4 )
{
   setcoordinatesystem(x,y);
   setRectangle(x1,x2,x3,x4,y1,y2,y3,y4);
} // end Rectangle constructor
void Rectangle::setRectangle(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    x1=0.0;
    x2=0.0;x3=0.0;x4=0.0;y1=0.0;y2=0.0;y3=0.0;y4=0.0;
}
//end function setRectangle
bool Rectangle::setcoordinatesystem(double x,double y)
{

    if(x1>0.0&&x1<20.0&&y1>0.0&&y1<20.0&&x2>0.0&&x2<20.0&&y2>0.0&&y2<20.0&&x3>0.0&&x3<20.0&&y3>0.0&&y3<20.0&&x4>0.0&&x4<20.0&&y4>0.0&&y4<20.0)//Determine if the input value meets the criteria
        {
            if((x2-x1)*(x3-x1)+(y2-y1)*(y3-y1)==0&&(x2-x4)*(x4-x3)+(y4-y2)*(y4-y3)==0&&(x1-x3)*(x4-x3)+(y3-y1)*(y4-y3)==0&&(x2-x1)*(x4-x2)+(y2-y1)*(y4-y2)==0)//Four angles are a right Angle is a rectangle
            {
               return true;
            }
        }
    else{
            return false;
        cout<<"The number is wrong,please input again: "<<endl;
        }

}

double Rectangle::Length()//a function to calculate length
{
   if(sqrt((x2-x1)*(x2-x1))>sqrt((y2-y1)*(y2-y1)))
   {
        length=x2-x1;
   }

   return length;
}
double Rectangle::Width()
{
     if(sqrt((x2-x1)*(x2-x1))<sqrt((y2-y1)*(y2-y1)))
   {
        width=y2-y1;
   }

   return width;
}

double Rectangle::Perimeter()
{

    return (length+width)*2;
} // end function add

double Rectangle::Area()
{
    return length*width;
} // end function add

