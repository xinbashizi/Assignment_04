#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
class Rectangle
{
public:
    Rectangle(Point,Point,Point,Point);
    void setRect(Point,Point,Point,Point);
    double getLength();
    double getWidth();
    double getPerimeter();
    double getArea();
    bool rectangle(Point,Point,Point,Point);//判断是否为长方形
    bool square();
private:
    Point p1;//左上
    Point p2;//右上
    Point p3;//左下
    Point p4;//右下
};
#endif // RECTANGLE_H
