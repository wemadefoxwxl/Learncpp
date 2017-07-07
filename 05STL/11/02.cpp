#include <iostream>
#include <list>
#include <vector>
#include <queue>

using std::cout;
using std::endl;

int main()
{
	std::queue<int,std::list<int>> q;
	for(int i = 0 ; i < 5;++i)
	{
		q.push(i);
	}

	while(!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;


	return 0;
}