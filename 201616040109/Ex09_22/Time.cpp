// Exercise 9.12 Solution: Time.cpp
// Member-function definitions for class Time
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include<ctime>
#include"Time.h"
using namespace std;
Time::Time()
{
    time_t now;
    struct tm *tm_now ;
    time(&now);
    tm_now = localtime(&now) ;
    int h=tm_now->tm_hour;
    int m=tm_now->tm_min;
    int s=tm_now->tm_sec;
    int ss=h*60*60+m*60+s;
    setSeconds(ss);
}
void Time::setSeconds(int ss)
{
    seconds=ss;
}
unsigned int Time::getSeconds()const
{
    return seconds;
}
void Time::printUniversal()const
{
     int h=seconds/3600;
     int s=seconds%60;
     int m=(seconds-s-h*3600)/60;
    cout<<setfill('0')<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<endl;
}
void Time::printStabdard()const
{
    int h=seconds/3600;
     int s=seconds%60;
     int m=(seconds-s-h*3600)/60;
    cout<<((h==0||h==12)?12:h%12)<<":"<<setfill('0')<<setw(2)<<m<<":"<<setw(2)<<s<<(h<12?"AM":"PM")<<endl;
}
void Time::tick()
{
   setSeconds(seconds+1);
}
