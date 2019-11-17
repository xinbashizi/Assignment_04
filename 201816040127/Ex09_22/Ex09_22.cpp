#include <iostream>
#include <ctime>
#include "Time.h"
#include <time.h>
using namespace std;
int main()
{
   Time t;
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );
   printf("当前的本地时间和日期：%s", asctime(info));

	cout << "the init time is: ";
	t.printUniversal();
	cout << "\nthe time is: ";
	t.printfStandard();

    return 0;

}
