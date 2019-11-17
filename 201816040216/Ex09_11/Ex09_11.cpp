//9.11:Rectangle.cpp
#include <iostream>
using namespace std;

#include "Rectangle.h" // include definition of class Rectangle

// function main begins program execution
int main()
{
    double x,y;
    cout<<"请输入长度："<<endl;
    cin>>x;
    cout<<"请输入宽度："<<endl;
    cin>>y;

    Rectangle rectangle(x,y);

    rectangle.area(x,y);

    cout<<"面积为："<<rectangle.area(x,y)<<endl;

}//end main
