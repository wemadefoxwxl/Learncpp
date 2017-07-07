#ifndef _CLOCK_H_
#define _CLOCK_H_

class Clock
{
public:
	void Display();
	void Init(int hour,int minute,int second);
	void Update();

	int GetHour();
	int GetSecond();
	int GetMinute();

	void SetHour(int hour);
	void SetMinute(int minute);
	void SetSecond(int second);
private:
	int hour_;
	int minute_;
	int second_;
};
#endif