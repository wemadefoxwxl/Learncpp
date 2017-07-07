#include <iostream>

using namespace std;

int var = 100;
int main()
{
	int var = 200;
	cout << "local "  <<  var << endl;
	cout << "global " << ::var << endl;

	return  0;
} 