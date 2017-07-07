#ifndef _TELEVISION_H
#define _TELEVISION_H

class TeleController;

class Television
{
public:
	friend class TeleController;
	Television(int volume,int chanel);
private:
	int volume_;
	int chanel_;
};

#endif