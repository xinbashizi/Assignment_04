#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

using namespace std;
class Point
{
public:
    Point(double ,double);

    void setPoint(double =0.0,double=0.0 );//function to setPoint

    double getPoint();// end Point constructor
public:
    double x,y;
};

#endif // POINT_H_INCLUDED
