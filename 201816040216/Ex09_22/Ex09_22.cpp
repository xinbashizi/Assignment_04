#include <iostream>
#include"Time.h"
using namespace std;

int main()
{
    Time time1(11,59,59);
    time1.printStandard();
    cout<<endl;
    time1.printUniversal();
    cout<<endl;

    for(int i=0;i<=6;i++)
    {
        time1.tick();
        time1.printStandard();
        cout<<endl;
        time1.printUniversal();
        cout<<endl;
    }//循环时间加1，共6次


    cout<<endl<<endl;


    time1.incometime(26641);//获取来自午夜的时间
    time1.printStandard();//打印午夜的标准时间
    cout<<endl;

    time1.printUniversal();//打印午夜时间
    cout<<endl<<endl;

    return 0;



}//end function main
