#ifndef _CLOCK_H_
#define _CLOCK_H_

class Clock
{
public:
	Clock(int hour = 0,int minute = 0,int second = 0);
	~Clock();

	void Display();
	void Update();

	int GetHour();
	int GetMinute();
	int GetSecond();

	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);

private:
	int hour_;
	int minute_;
	int second_;
};
#endif