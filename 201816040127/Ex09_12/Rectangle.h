#ifndef Rectangle_H
#define Rectangle_H
using namespace std;
class Rectangle
{
public:

   Rectangle(double ,double,double ,double ,double ,double,double ,double);

   void setRectangle(double =0.0,double=0.0,double=0.0,double=0.0 ,double=0.0 ,double=0.0 ,double=0.0,double=0.0 );//function to setRectangle

   bool setcoordinatesystem(double x=0.0,double y=0.0);

   double Length();

   double Width();

   double Perimeter();//function to calculate perimeter

   double Area();//function to calculate area

private:
    double x1,y1,x2,y2,x3,y3,x4,y4;//four points
    double length;
    double width;
    double x,y;
};
 // end class Rectangle

#endif

