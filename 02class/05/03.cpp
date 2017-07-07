#include "Test.h"

int main()
{
	// Test t = 10;  //ERROR
	Test t(10);

	// t = 20;	 ERROR  

	Test t2;
	t = t2;   //赋值操作 t.operator=(t2);

	return 0;
}