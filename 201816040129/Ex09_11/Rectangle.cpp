#include <iostream>
using namespace std;


#include "Rectangle.h"

Rectangle::Rectangle(double lengthdata,double widthdata)
{
    cout<<"the length:"<<" ";
    cin>>lengthdata;//enter the data of length
    cout<<"the width:"<<" ";
    cin>>widthdata;//enter the data of width
    setLength(lengthdata);
    setWidth(widthdata);
}

void Rectangle::setLength(double lengthdata)
{
    if(lengthdata>0.0&&lengthdata<20.0)//judge if the length is effective
    {
        length=lengthdata;
    }
}

double Rectangle::getLength()
{
    return length;//return the data
}

void Rectangle::setWidth(double widthdata)
{
    if(widthdata>0.0&&widthdata<20.0)//judge if the width is effective
    {
        width=widthdata;
    }
}

double Rectangle::getWidth()
{
    return width;//return the data
}

void Rectangle::displayPerimeter()
{
    perimeter=(Rectangle::getLength()+Rectangle::getWidth())*2;//the method of calculating the perimeter
    cout<<"the perimeter:"<<perimeter<<endl;

}

void Rectangle::displayArea()
{
    area=Rectangle::getLength()*Rectangle::getWidth();//the method of calculating the area
    cout<<"the area:"<<area<<endl;
}
