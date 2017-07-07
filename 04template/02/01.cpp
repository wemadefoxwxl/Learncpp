#include <iostream>
#include "Stack.h"

using std::cout;
using std::endl;
using wl::Stack;

int main()
{	
	Stack<int> s(10);

	for(int i = 0; i < 10;++i)
		s.push(i);

	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}