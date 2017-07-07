#include "Clock.h"

int main()
{	
	Clock c(10,10,10);
	c.Display();
	c.Update();

	c.setHour(11);
	c.Display();


	return 0;
}