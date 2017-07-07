#include <iostream>
#include "Clock.h"

int main()
{
	Clock c;
	c.Init(10,10,10);
	c.Display();
	c.Update();
	c.Display();

	c.SetHour(11);
	c.Display();


	return 0;
}