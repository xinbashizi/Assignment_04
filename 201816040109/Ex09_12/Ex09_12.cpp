#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Point p1(2,4);
    Point p2(6,4);
    Point p3(2,2);
    Point p4(6,2);
    Rectangle rect(p1,p2,p3,p4);
    cout<<"长为"<<rect.getLength()<<endl;
    cout<<"宽为"<<rect.getWidth()<<endl;
    cout<<"周长为"<<rect.getPerimeter()<<endl;
    cout<<"面积为"<<rect.getArea()<<endl;
    if(rect.square())
    {
        cout<<"是正方形"<<endl;
    }
    else
    {
        cout<<"不是正方形"<<endl;
    }
}
