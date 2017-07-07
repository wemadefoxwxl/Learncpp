#include <iostream>
#include "Stack2.h"

using std::cout;
using std::endl;
using wl2::Stack;

int main()
{
	Stack<int> s;
	for(int i = 0;i < 10;++i)
		s.push(i);
	cout << "size is : " << s.size() << endl;
	
	while(!s.empty())
	{
		cout << s.top() << "  ";
		s.pop();
	}
	cout << endl;
	cout << "size is : " << s.size() << endl;


	return 0;
}