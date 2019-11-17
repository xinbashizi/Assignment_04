#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <time.h>
using namespace std;
class Time
{
public:
    Time(int hour,int minute,int second);//Declare a constructor that has one parameter for each data member
    Time &setTime(int,int,int);//set hour,minute,second
    const tm* localTime(const time_t* ptr);
    void setHour( int ); // set hour
    void setMinute( int ); // set minute
    void setSecond( int ); // set second
    int getHour(); // get hour
    int getMinute(); // get minute
    int getSecond(); // get second
    Time &operator++();
    void printUniversal()const;
    void printfStandard() const;
private:
    int hour;//0-24
    int minute;//1-60
    int second;//1-60
    void tick();
};


#endif // TIME_H_INCLUDED
