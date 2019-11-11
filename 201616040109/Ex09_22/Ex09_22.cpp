// Exercise 9.22 Solution: Ex09_22.cpp
// Test program for modified Time class.
#include <iostream>
#include"Time.h"
using namespace std;
int main()
{
    Time t;
    t.printStabdard();
    for(int i=0;i<60;i++)
    {
        t.tick();
    }
    t.printStabdard();
    for(int i=0;i<60*60;i++)
    {
        t.tick();
    }
    t.printStabdard();
    for(int i=0;i<60*60*24;i++)
    {
        t.tick();
    }
    t.printStabdard();
    return 0;
}
