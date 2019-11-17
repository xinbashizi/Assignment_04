#include<iostream>
#include<math.h>
using namespace std;
#include "Rectangle.h"
#include "Point.h"


Rectangle::Rectangle(double length2,double width2)
{
    length=length2;//assign length2 value to length
    width=width2;//assign width2 value to width
}

void Rectangle::Square()
{
    if(length>0&&width>0&&length==width)//judge square
    {
        cout<<"这是一个正方形"<<endl;
    }
}

void Rectangle::Perimeter()//the perimeter
{
    perimeter=(length+width)*2;//get the perimeter
    cout<<"周长: "<<" ";
    cout<<perimeter<<endl;
}

void Rectangle::Area()//the area
{
    area=length*width;//get the area
    cout<<"面积: "<<" ";
    cout<<area<<endl;
}
