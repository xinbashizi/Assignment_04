#include <iostream>
using namespace std;

#include "Time.h"

int main()
{  Time t1(11,23,55);
   Time t2(11,23,59);
   Time t3(13,59,59);
   Time t4(23,59,59);
   //Time.setTime();

   //t1.printtotalseconds();
   t1.printUniversal();
   t1.printStandard();
   t1.printtotalseconds();
   cout<<endl;

   t2.printUniversal();
   t2.printStandard();
   cout<<"The next second is : ";
   t2.tick();
   cout<<endl;

   t3.printUniversal();
   t3.printStandard();
   cout<<"The next second is : ";
   t3.tick();
   cout<<endl;

   t4.printUniversal();
   t4.printStandard();
   cout<<"The next second is : ";
   t4.tick();


    return 0;
} // end main

