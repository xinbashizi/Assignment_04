#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include<string>

using namespace std;

class Rectangle
{
public:
    Rectangle(double=0,double=0);// conversion constructor
    void Square();//judge the square
    void Perimeter();//get the perimeter
    void Area();//get the area
private:
    double length;
    double width;
    double perimeter;
    double area;
};



#endif // RECTANGLE_H_INCLUDED
