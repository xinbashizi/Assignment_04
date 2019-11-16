#include<iostream>
#include<string>
#include<ctime>
#include<stdexcept>
using namespace std;
#include "Time.h"


Time::Time()
{
   time_t now=time(00) ;
   struct tm *tm_now ;
   time(&now) ;
   tm_now = localtime(&now) ;
   setTime(tm_now->tm_hour,//set the time
   tm_now->tm_min,
   tm_now->tm_sec);

   tick(tm_now->tm_hour,//set the next second
   tm_now->tm_min,
   tm_now->tm_sec);

}


void Time::setTime(int h1,int m1,int s1)
{
    setHour(h1);//set the hour
    setMini(m1);//set the minite
    setSec(s1);//set the second
}

void Time::setHour(int h1)
{
    hour=h1;//assign the h1 value to hour
}
void Time::setMini(int m1)
{
    mini=m1;//assign the m1 value to mini
}
void Time::setSec(int s1)
{
    sec=s1;//assign the s1 value to sec
}


int Time::getHour()
{
    return hour;//return the data
}
int Time::getMini()
{
    return mini;//return the data
}
int Time::getSec()
{
    return sec;//return the data
}
void Time::tick(int h1,int m1,int s1)
{
    if(s1>=00&&s1<59)
    {
        s1++;//add the second
    }
    if(s1>59)
    {
        s1=00;
         if(m1>=00&&m1<59)
         {
            m1++;//add the minite
         }
         else
         {
            m1=00;
            if(h1>=00&&h1<59)
                h1++;//add the hour
            else
                h1=00;
         }
    }
    H=h1;M=m1;S=s1;//assign the value to the data
}


int Time::getH()
{
    return H;//return the data
}
int Time::getM()
{
    return M;//return the data
}
int Time::getS()
{
    return S;//return the data
}
