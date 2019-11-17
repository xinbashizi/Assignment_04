#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		throw invalid_argument("seccond must be 0-59");
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::tick()
{
	second = second + 1;
	if (second == 60)
	{
		second = 0;
		minute = minute + 1;
		if (minute == 60)
		{
			second = 0;
			hour = hour + 1;
		}

	}
	cout << hour * 3600 + minute * 60 + second;
}
void Time::printSecond() const
{
	cout << hour * 3600 + minute * 60 + second;
}
