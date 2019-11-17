#include<iostream>
#include<math.h>
using namespace std;
#include "Point.h"


Point::Point(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    cout<<"请输入矩形左上角的坐标："<<endl;
    cout<<"x1:"<<" ";
    cin>>x1;//enter the x1
    cout<<"y1:"<<" ";
    cin>>y1;//enter the y1
    cout<<"左上角坐标为: "<<"("<<x1<<","<<y1<<")"<<endl;
    cout<<"请输入矩形右上角的坐标："<<endl;
    cout<<"x2:"<<" ";
    cin>>x2;//enter the x2
    cout<<"y2:"<<" ";
    cin>>y2;//enter the y2
    cout<<"右上角坐标为: "<<"("<<x2<<","<<y2<<")"<<endl;
    cout<<"请输入矩形左下角的坐标："<<endl;
    cout<<"x3:"<<" ";
    cin>>x3;//enter the x3
    cout<<"y3:"<<" ";
    cin>>y3;//enter the y3
    cout<<"左下角坐标为: "<<"("<<x3<<","<<y3<<")"<<endl;
    cout<<"请输入矩形右下角的坐标："<<endl;
    cout<<"x4:"<<" ";
    cin>>x4;//enter the x4
    cout<<"y4:"<<" ";
    cin>>y4;//enter the y4
    cout<<"右下角坐标为: "<<"("<<x4<<","<<y4<<")"<<endl;
    setPoint(x1,y1,x2,y2,x3,y3,x4,y4);//get the data
}
void Point::setPoint(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    if(x1>0&&y1>0&&x1<=20.0&&y1<=20.0&&x2>0&&y2>0&&x2<=20.0&&y2<=20.0&&x3<=20.0&&y3<=20.0&&x3<=20.0&&y3<=20.0&&x4>0&&y4>0&&x4>0&&y4>0)//judge the cabe
    {
        if((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)==(x2-x4)*(x2-x4)+(y2-y4)*(y2-y4)+(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))
        {
            Length(x1,y1,x2,y2,x3,y3,x4,y4);//get the length
            Width(x1,y1,x2,y2,x3,y3,x4,y4);//get the width
        }
        else
        {
            cout<<"这不是一个矩形"<<endl;
            Length(0,0,0,0,0,0,0,0);
            Width(0,0,0,0,0,0,0,0);
        }
    }

}

void Point::Length(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    if((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)>(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))//judge
        length1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//get the data
    else
        length1=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
}

double Point::getLength()
{
    return length1;//return the data
}

void Point::Width(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    if((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)<(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))//judge
        width1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//get the data
    else
        width1=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
}

double Point::getWidth()
{
    return width1;//return the data
}
