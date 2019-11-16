#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include<string>
using namespace std;

class Point
{
public:
    Point(double=0,double=0,double=0,double=0,double=0,double=0,double=0,double=0);// conversion constructor
    void setPoint(double,double,double,double,double,double,double,double);//function to set the point
    void Length(double,double,double,double,double,double,double,double);//function to set the length
    double getLength();//function to get the data
    void Width(double,double,double,double,double,double,double,double);//function to set the width
    double getWidth();//function to get the data
private:
    double length1;
    double width1;
};

#endif // POINT_H_INCLUDED
