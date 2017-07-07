#include <iostream>
#include "add.h"
#include "sub.h"

using std::cout;
using std::endl;

int main()
{
	int a = 19;
	int b = 10;

	cout << "a + b " << add(a,b) << endl;
	cout << "a - b " << sub(a,b) << endl;

	return 0;
}