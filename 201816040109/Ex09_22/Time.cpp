#include <iomanip>
#include <iostream>
#include "Time.h"
using namespace std;

Time::Time(int h,int m,int s)
{
     setTime(h ,m , s);
}
void Time::setTime(int h, int m, int s)
{
    second=0;
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h)
{
    if(h>=0&&h<24)
        second+= h*3600;
    else
        throw invalid_argument("hour must be 0-23");
}
int Time::getHour()
{
    return second/3600;
}
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        second+=m*60;
    else
        throw invalid_argument("minute must be 0-59");
}
int Time::getMinute()
{
    return second%3600/60;
}
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second+=s;
    else
        throw invalid_argument("second must be 0-59");
}
int Time::getSecond()
{
    return second%3600%60;
}
void Time::printUniversal()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;
}
void Time::printStandard()
{
    cout<<setfill('0')<<setw(2)<<((getHour()==0||getHour()==12)?12 :getHour()%12)<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(getHour()<12?"AM":"PM")<<endl;;
}
