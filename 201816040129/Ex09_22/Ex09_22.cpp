#include <iostream>
#include<ctime>
#include "Time.h"
#include<stdexcept>
#include<iomanip>
using namespace std;

int main()
{
    int Hour,Mini,Sec,H,M,S,second;
    Time time;// conversion constructor
    H=time.getH();//assign the data value to the H
    M=time.getM();//assign the data value to the M
    S=time.getS();//assign the data value to the S
    Hour=time.getHour();//assign the data value to the Hour
    Mini=time.getMini();//assign the data value to the Mini
    Sec=time.getSec();//assign the data value to the Sec
    second=(Hour*60*60+Mini*60+Sec);//get the second
    cout<<setfill('0')<<"The hour: "<<setw(2)<<Hour<<" "<<"The minite: "<<setw(2)<<Mini<<" "<<"The Second: "<<setw(2)<<Sec<<endl;
    cout<<"The time is: "<<setfill('0')<<setw(2)<<Hour<<":"<<setw(2)<<Mini<<":"<<setw(2)<<Sec<<endl;
    cout<<"The allsecond: "<<second<<endl;
    cout<<"The addtime is: "<<setfill('0')<<setw(2)<<H<<":"<<setw(2)<<M<<":"<<setw(2)<<S<<endl;

}
