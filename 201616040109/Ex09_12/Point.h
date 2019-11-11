// Exercise 9.12 Solution: Point.h
#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(float,float);
    void setX(float);
    void setY(float);
    float getX();
    float getY();
private:
    float x;
    float y;
};
#endif // POINT_H
