//9.14:Rectangle.h
#include <string> // program uses C++ standard string class
using namespace std;

// Rectangle class definition
class Rectangle
{
public:
    Rectangle(double,double);

    void setlength(double);

    double getlength();

    void setwidth(double);

    double getwidth();

    void setarea(double);

    double getarea();
    double area(double,double);


private:
    double length;

    double width;
};//end class Rectangle
