// Exercise 9.11 Solution: Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;
class Rectangle
{
public:
    Rectangle(float=1,float=1);
    void setLength(float);
    void setWidth(float);
    float getLength();
    float getWidth();
private:
    float length;
    float width;
};
#endif // RECTANGLE_h
