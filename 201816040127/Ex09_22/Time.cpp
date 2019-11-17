#include <iostream>
#include "Time.h" // Time class definition
#include <ctime>
#include <stdexcept>
#include <iomanip>
using namespace std;
Time::Time(int h,int m,int s)
{
    const time_t t_a(0);
    const tm* localTime=localtime(&t_a);//a function of localtime
    setTime(h ,m ,s);
}//end Time constructor
Time &Time::setTime(int h,int m,int s)
{
    hour=h;
    minute=m;
    second=s;
}//end function setTime
const Time::tm* localTime(const time_t* ptr)
{
    time_t ptr=0;
    localTime_ptr->tm_hour = hour;
    localTime_ptr->tm_minute = minute;
    localTime->ptr->tm_second = second;
}//end function localtime
void Time::setHour( int h)// set hour
{
    int hours;
    if(h>=0&&h<24)
    {
        hours=h;
    }
    else
    {
        cout<<"the number is wrong"<<endl;
    }
    second= h*3600 + getSecond();//an hour is 3000 seconds

}
void Time::setMinute( int m)// set hour
{
    int minutes;
    if(m>=0&&m<60)
    {
        minutes=m;
    }
    else
    {
        cout<<"the number is wrong"<<endl;
    }
    second= m*60 + getSecond();

}
void Time::setSecond( int s) // set hour
{
    int seconds;
    if(s>=0&&s<60)
    {
        seconds=s;
    }
    else
    {
        cout<<"the number is wrong"<<endl;
    }
    second+=s;

}
int getHour()// get hour
{
    return hour;
}
int getMinute() // get minute
{
    return minute;
}
int getSecond()// get second
{
    return second;
}
Time &Time::operator++()
{
    tick();
    return *this;
}
void Time::tick()
{
    if(second>=0&&second<59)
    {
        ++second;
    }
    else if(second==59&&minute>=0&&minute<59)
    {
        ++minute;
        second=1;
    }
    else if(second==59&&minute==59&&hour>=0&&hour<=24)
    {
        ++hour;
        minute=1;
        second=1;
    }//end else
}//end function tick
void Time::printUniversal()const
{
	cout << setfill('0') << setw(2) << hour << ":" << setw(2)    //setfill指定输出宽域大于输出整数值所需的填充字符
		<< minute << ":"<<setw(2) << second;                 //setw控制输出宽域，对紧接显示的值起作用
}
void Time:: printfStandard() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< setfill('0') << setw(2) << hour << ":" << setw(2) << minute
		<< ":" << setw(2) << second << (hour < 12 ? "AM" : "PM");
}
