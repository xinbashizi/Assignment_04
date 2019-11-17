#ifndef Rectangle_H
#define Rectangle_H
using namespace std;
class Rectangle
{
public:

    Rectangle(double,double);//constructor initialize Rectangle
    Rectangle()
    {
        rectangleLength=1.0;
        rectangleWidth=1.0;
    }
    void setRectangleLength(double length);//method to set length

    double getRectangleLength();//method to get length

    void setRectangleWidth(double width);//method to set width

    double getRectangleWidth();//method to get width


    double Perimeter();//function to calculate perimeter

    double Area();//function to calculate area

private:

    double rectangleLength; // double data member for the Rectangle realPart

    double rectangleWidth;// double data member for the Rectangle imaginaryPart

};
 // end class Employee

#endif
