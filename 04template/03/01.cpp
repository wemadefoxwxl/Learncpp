#include <iostream>
#include <vector>
#include "Stack.h"

using std::cout;
using std::endl;
using wl::Stack;

int main()
{
	Stack<int,std::vector<int> > s;

	for(int i = 1;i <= 10;++i)
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