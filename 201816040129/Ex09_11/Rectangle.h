#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include<string>
using namespace std;

class Rectangle
{
public:
    Rectangle(double=1,double=1);//conversion constructor
    void setLength(double);//function to set the length
    double getLength();//function to get the length
    void setWidth(double);//function to set the width
    double getWidth();//function to get the width
    void displayPerimeter(); // display perimeter
    void displayArea(); // display area
private:
    double length;// lendth for this Rectangle
    double width;// width for this Rectangle
    double perimeter;// perimeter for this Rectangle
    double area;// area for this Rectangle
};


#endif // RECTANGLE_H_INCLUDED
