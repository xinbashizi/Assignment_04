#include <iostream>

using namespace std;
#include"Rectangle.h"
#include"Point.h"

int main()
{
    double l1,w2;
    Point point;
    l1=point.getLength();//assign the data value to l1
    w2=point.getWidth();//assign the data value to w2
    Rectangle rectangle(l1,w2);
    rectangle.Square();//if the square
    rectangle.Perimeter();//cout the perimeter
    rectangle.Area();//cout the area
    cout<<"(如果不是矩形或不符合题意，使输出来的周长和面积都为0)"<<endl;
}
