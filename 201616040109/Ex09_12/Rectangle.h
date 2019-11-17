// Exercise 9.12 Solution: Rectangle.h
#include"Point.h"

class Rectangle
{
public:
    Rectangle(Point,Point,Point,Point);
    void setLength(float);
    void setWidth(float);
    //void print();
    float getLength();
    float getWidth();
    float getPerimeter();
    float getArea();
    float getPow(float,float,float,float);
    float getSqrt(float,float,float,float);
    bool isSquare();
    bool isRectangular=false;
private:
    float length;
    float width;
    float perimeter;
    float area;
};
