#include <iostream>
#include <functional>
#include <vector>
#include <queue>

using std::cout;
using std::endl;

int main()
{	
	int a[] = {5,1,4,2,5,17,4};

	// 小顶堆
	std::priority_queue<int,std::vector<int>,std::greater<int> > q(std::begin(a),std::end(a));
	while(!q.empty())
	{
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
	cout << endl;

	// 大顶堆
	std::priority_queue<int,std::vector<int>,std::less<int> > p(std::begin(a),std::end(a));
	while(!p.empty())
	{
		cout << p.top() << " ";
		p.pop();
	}
	cout << endl;

	return 0;
}