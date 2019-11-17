#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute,second);//定义并且初始化
}//end Time constructor

void Time::setTime(int h,int m,int s)
{
    setHour(h);//set private field hour
    setMinute(m);//set private field hour
    setSecond(s);//set private field hour
}//end function setTime

//set hour value
void Time::setHour(int h)
{
    if(h>=0&&h<24)
      hour=h;
    else
      throw invalid_argument("hour must be 0-23");
}//end function setHour

//set minute value
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minite must be 0-59");
}//end function setMinute

//set second value
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
        second=s;
    else
        throw invalid_argument("second must be 0-59");
}//end function setSecond

//return hour value
unsigned int Time::getHour()const
{
    return hour;
}//end function getHour

//return minute value
unsigned int Time::getMinute()const
{
    return minute;
}//end function getMinute

//return second value
unsigned int Time::getSecond()const
{
    return second;
}//end function second

void Time::tick()//add second by one second
{
    second++;

    if(second==60)
    {
        minute=minute+1;
        second=0;
    }//秒数到60进1变0

    if(minute==60)
    {
        hour=hour+1;
        minute=0;
        getHour();
    }//分数到60进1变0

    if(hour==24)
    {
        hour=0;
    }
}//end function tick

void Time::incometime(int totalsecond)
{
    int h,m,s;
    int middlenumber;
    h=totalsecond/3600;
    middlenumber=totalsecond%3600;

    m=middlenumber/60;

    middlenumber=middlenumber%60;

    s=middlenumber;
    setSecond(s);
    setMinute(m);
    setHour(h);
}//end function tick

//print Time in universal-time format
void Time::printUniversal()const
{
    cout<<setfill('0')<<setw( 2 )<<getHour()<<":"
    <<setw( 2 )<<getMinute()<<":"<<setw( 2 )<<getSecond();
}//end function printUniversal

//print Time in standard-time formal
void Time::printStandard()const
{
    cout<<((getHour()==0||getHour()==12)?12:getHour()%12)
    <<":"<<setfill('0')<<setw( 2 )<<getMinute()<<
    ":"<<setw( 2 )<<getSecond()<<(hour<12?"AM":"PM");
}//end function printStandard
