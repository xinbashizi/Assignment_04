#include<time.h>

class Time
{
public:
    explicit Time(int =0,int =0,int =0);//初始化时间
    void timechange();
    void printTime();//打印时间函数
    void setTime(int,int,int);//构造函数初始化时间
    void setHour(int);//小时初始化
    void setMinute(int);//分钟初始化
    void setSecond(int);//秒数初始化
    void tick();//时间递增一秒
    void incometime(int);//初始化午夜时间并获取午夜时间

    unsigned int getHour()const;//return hour
    unsigned int getMinute()const;//return minute
    unsigned int getSecond()const;//return second

    void printUniversal()const;//打印普通时间
    void printStandard()const;//打印标准时间
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned int totalsecond;//来自午夜的总秒

};

