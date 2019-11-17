#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
public:
    Rectangle(double=1,double=1);
    void Area();
    void Perimeter();
    void setRectangleNumber(double,double);

private:
    double lenght;
    double width;
};

#endif

