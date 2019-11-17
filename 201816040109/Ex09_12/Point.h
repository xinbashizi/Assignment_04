#ifndef POINT_H
#define POINT_H
class Point
{
public:
    Point(double,double);
    Point();
    void setX(double);
    double getX();
    void setY(double);
    double getY();
private:
    double x;//横坐标
    double y;//纵坐标
};
#endif // POINT_H
