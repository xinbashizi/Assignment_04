// 9.12: UpRectangle.h
// UpRectangle class definition.

#include <string> // program uses C++ standard string class
using namespace std;

//  class definition
class UpRectangle
{
public:
    UpRectangle(double,double,double,double,double,double,double,double);
    //set function
   void setlength(double,double,double,double,double,double,double,double);
   void setwidth(double,double,double,double,double,double,double,double);
   void setperimeter(double,double);
   void setarea(double,double);

   double getlength();//return length
   double getwidth();//return width
   double getperimeter();//return perimeter
   double getarea();//return area

   double judgement(double,double,double,double,double,double,double,double);
   double square();

private:
    double a,b,i,j;
   double length;
   double width;
   double perimeter;
   double area;

}; // end class UpRectangle
