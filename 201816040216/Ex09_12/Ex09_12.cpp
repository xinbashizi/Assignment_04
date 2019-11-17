// Lab 3: UpRectangleTest.cpp
// Create and manipulate two UpRectangle objects.
#include <iostream>
using namespace std;

#include "UpRectangle.h" // include definition of class UpRectangle

// function main begins program execution
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4;

    cout<<"请按顺序输入"<<endl;

    cout<<"请输入第一个点的坐标："<<endl;
    cin>>x1>>y1;

    cout<<"请输入第二个点的坐标："<<endl;
    cin>>x2>>y2;

    cout<<"请输入第三个点的坐标："<<endl;
    cin>>x3>>y3;

    cout<<"请输入第四个点的坐标："<<endl;
    cin>>x4>>y4;

    UpRectangle R(x1,y1,x2,y2,x3,y3,x4,y4);

    R.judgement(x1,x2,x3,x4,y1,y2,y3,y4);
    R.square();
    cout<<"长度为："<<R.getlength()<<endl;

    cout<<"宽度为："<<R.getwidth()<<endl;

    cout<<"周长为："<<R.getperimeter()<<endl;

    cout<<"面积为："<<R.getarea()<<endl;

    R.judgement(x1,x2,x3,x4,y1,y2,y3,y4);
    cout<<endl;
    R.square();
}
