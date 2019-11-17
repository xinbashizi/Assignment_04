//#ifndef RECTANGLE_H
//define RECTANGLE_H
#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

using namespace std;

#endif // RECTANGLE_H_INCLUDED


class Rectangle
{
public:
    explicit Rectangle(double ,double );
    void setdate(double ,double );
    //double getLength();
    //double getWidth();
    void Area();
    void Perimeter();
    //void LenghtAndWidth();
   // void setRectangleNumber(double,double,double,double,double,double,double,double);
    void Square();
    void Lenght(double,double,double,double,double,double,double,double);
   // double Distance();
    //bool isRightAngle();
private:

    double length;
    double width;
};



