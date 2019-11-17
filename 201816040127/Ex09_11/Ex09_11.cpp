#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
   Rectangle R;
   double a;
   cout<<"请输入长方形的长: ";
   cin>>a;
   R.setRectangleLength(a);
   double b;
   cout<<"请输入长方形的宽: ";
   cin>>b;
   R.setRectangleWidth(b);

   cout<<"长方形的长: "<<R.getRectangleLength()<<endl;
   cout<<"长方形的宽: "<<R.getRectangleWidth()<<endl;
   cout<<"长方形的周长: "<<R.Perimeter()<<endl;
   cout<<"长方形的面积: "<<R.Area()<<endl;




} // end main


