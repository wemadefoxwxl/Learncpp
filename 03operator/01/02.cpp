#include <iostream>
#include "Television.h"
#include "TeleController.h"

using std::cout;
using std::endl;

int main()
{
	Television tv(1,1);

	TeleController tc;
	tc.VolumeUp(tv);


	return 0;
}