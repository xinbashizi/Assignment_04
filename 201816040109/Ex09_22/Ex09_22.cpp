#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;

int main()
{
    time_t nowtime;
    struct tm *now;
    time( &nowtime );
    now = localtime( &nowtime );//存有当前时间的一个结构体
    Time t(now->tm_hour,now->tm_min,now->tm_sec);
    cout<<"国际时间为:";
    t.printUniversal();//输出国际时间
    cout<<"标准时间为:";
    t.printStandard();//输出标准时间
    return 0;
}
