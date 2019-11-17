//#ifndef POINT_H
#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED



#endif // POINT_H_INCLUDED

using namespace std;
class Point
{
public:
    explicit Point(double ,double,double ,double ,double ,double ,double ,double );
    void setPoint(double ,double ,double ,double ,double ,double ,double,double );
    void Lenght(double ,double ,double ,double,double,double,double,double);
    double getLength();
    double getWidth();
private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double length;
    double width;
};
