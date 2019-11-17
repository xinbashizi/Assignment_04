#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <string>
#include<ctime>
#include<stdexcept>
using namespace std;

class Time
{
public:
    Time();// conversion constructor
    void setTime(int,int,int);//function to set Time
    void setHour(int);//function to set Hour
    void setMini(int);//function to set Mini
    void setSec(int);//function to set Sec
    void tick(int,int,int);//function to set the next
    int getHour();//function to get the hour
    int getMini();//function to get the minite
    int getSec();//function to get the second
    int getH();//function to get the H
    int getM();//function to get the M
    int getS();//function to get the S
private:
    int hour;
    int mini;
    int sec;
    int H;
    int M;
    int S;
};


#endif // TIME_H_INCLUDED
