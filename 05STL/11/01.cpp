#include <iostream>
#include <vector>
#include <list>
#include <stack>

using std::cout;
using std::endl;

int main()
{
	// stack底层使用std::list
	std::stack<int,std::list<int> > s;
	for(int i = 0; i < 5;++i)
	{
		s.push(i);
	}

	while(!s.empty())
	{
		cout << s.top() << "  ";
		s.pop();
	}

	cout << endl;

	return 0;
}