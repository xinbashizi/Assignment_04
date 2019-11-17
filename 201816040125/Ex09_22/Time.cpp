#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

#include "time.h"

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);
}

void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if(h>=0&&h<24)
        hour=h;
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
   if(m>=0&&m<60)
    minute=m;
   else
    throw invalid_argument("minut must be 0-59");
}

void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
    return hour;
}
    unsigned int Time::getMinute() const
    {
        return minute;
    }
    unsigned int Time::getSecond() const
    {
        return second;
    }

void Time::printUniversal() const
{
    cout<<"The universal time is :";
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
    cout<<endl;
}



void Time::printStandard() const
{
    cout<<"The standard time is: ";
    cout<<((getHour()==0||getHour()==12)? 12 : getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<(hour<12? "AM" :"PM");
    cout<<endl;
}

void Time::printtotalseconds() const
{
    int totalseconds;
    totalseconds=getHour()*3600+getMinute()*60+getSecond();
    cout<<"The totalseconds is"<<totalseconds<<endl;
}

void Time::tick()
{
    if(second>=0&&second<59 )
       second=second+1;
    else
        {
            second=0;
            if(minute<59 && minute >= 0 )
               minute=minute+1;
           else
              {
                  minute=0;
                  if(hour<23&&hour>=0)
                  hour=hour+1;
                  else
                    hour=0;
              }
        }
        printStandard();
}

