#include <iostream>
#include "Integer.h"

using std::cout;
using std::endl;

int main()
{
	Integer n(100);
	n.Display();

	Integer n2 = ++n;
	n.Display();
	n2.Display();

	Integer n3 = n++;
	n.Display();
	n3.Display();


	return 0;
}