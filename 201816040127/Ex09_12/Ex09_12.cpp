#include <iostream>
using namespace std;

#include "Rectangle.h"
#include "point.h"

int main()
{
   Rectangle a;
   double x1,y1,x2,y2,x3,y3,x4,y4;
   cout<<"请输入长方形的四个坐标: ";
   cin>>x1,y1;
   cin>>x2,y2;
   cin>>x3,y3;
   cin>>x4,y4;
   a.setRectangle(x1,y1,x2,y3,x3,y3,x4,y4);
   cout<<"请输入四个坐标的值: "<<a.setRectangle()<<endl;
   cout<<a.setcoordinatesystem()<<endl;

} // end main


