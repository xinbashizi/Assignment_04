#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle{
public:
    Rectangle(double length,double width);
    void setLength(double);
    double getLength();
    void setWidth(double);
    double getWidth();
    double getPerimeter();
    double getArea();
private:
    double length;
    double width;
};
#endif
