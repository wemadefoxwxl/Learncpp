#include <iostream>
#include <cassert>
#include "Clock.h"

using std::cout;
using std::endl;

Clock::Clock(int hour,int minute,int second)
{
	hour_ = hour;
	minute_ = minute;
	second_ = second;
	cout << "Clock::Clock " << endl;
}

Clock::~Clock()
{
	cout << "Clock::~Clock()" << endl;
}

void Clock::Display()
{
	cout << hour_ << " : " << minute_ << " : " << second_ << endl;
}

void Clock::Update()
{
	second_++;
	if(60 == second_)
	{
		++minute_;
		second_ = 0;
	}
	if(60 == minute_)
	{
		++hour_;
		minute_ = 0;
	}
	if(24 == hour_)
	{
		hour_ = 0;
	}
}

int Clock::GetHour()
{
	return hour_;
}

int Clock::GetMinute()
{
	return minute_;
}


int Clock::GetSecond()
{
	return second_;
}

void Clock::setHour(int hour)
{
	assert(hour <= 24 && hour >= 0);
	hour_ = hour;
}


void Clock::setMinute(int minute)
{
	assert(minute <= 60 && minute >= 0);
	minute_ = minute;
}

void Clock::setSecond(int second)
{
	assert(second <= 60 && second >= 0);
	second_ = second;
}














