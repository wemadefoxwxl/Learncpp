#include <iostream>
#include "Test.h"

using std::cout;
using std::endl;

int main()
{
	Test t;
	t.Init();
	t.Display();

	Test t1;
	t1.Init(1,2,3);
	t1.Display();


	return 0;
}
