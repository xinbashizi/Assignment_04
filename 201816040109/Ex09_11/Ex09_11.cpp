#include <iostream>

using namespace std;

#include "Rectangle.h"
int main()
{
    Rectangle rect(10.0,15.0);
    cout<<"长为："<<rect.getLength()<<endl;
    cout<<"宽为："<<rect.getWidth()<<endl;
    cout<<"周长为："<<rect.getPerimeter()<<endl;
    cout<<"面积为："<<rect.getArea()<<endl;

    rect.setLength(23.0);//判断是否进行异常处理
}
