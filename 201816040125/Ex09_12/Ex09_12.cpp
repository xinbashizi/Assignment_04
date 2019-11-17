
#include <iostream>
using namespace std;
#include <math.h>
#include "Rectangle.h"
#include "Point.h"
int main()
{
     double x1,x2,x3,x4;
     double y1,y2,y3,y4;
  Point Point(x1,y1,x2,y2,x3,y3,x4,y4);
  //cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

  // cout<<endl;
  //cout<<"вСио╫г";
  cout<<"x1=";
  cin>>x1;
  cout<<"y1=";
  cin>>y1;
  cout<<endl;
  //cout<<"вСоб╫г";
  cout<<"x2=";
  cin>>x2;
  cout<<"y2=";
  cin>>y2;
  cout<<endl;

 // cout<<"срио╫г";
  cout<<"x3=";
  cin>>x3;
  cout<<"y3=";
  cin>>y3;
  cout<<endl;

 // cout<<"сроб╫г";
  cout<<"x4=";
  cin>>x4;
  cout<<"y4=";
  cin>>y4;
  cout<<endl;








   Point.Lenght(x1,y1,x2,y2,x3,y3,x4,y4);
   Point.getLength();
   Point.getWidth();

   Rectangle Rectangle(Point.getLength(),Point.getWidth());
   //Rectangle.isRectangle();
   Rectangle.Area();
   Rectangle.Perimeter();
   Rectangle.Square();
    return 0;
} // end main
