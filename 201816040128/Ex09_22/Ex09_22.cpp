#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
	Time  time(1,1,1) ;
	time.printSecond();
	cout << "\n";
	time.tick();
}
