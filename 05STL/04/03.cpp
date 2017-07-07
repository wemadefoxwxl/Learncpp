#include <iostream>
#include <vector>
#include <ctime>

using std::cout;
using std::endl;

// reserve比没有reverse稍微快一点
int main()
{	
	const int n = 1000 * 1000;
	std::vector<int> v;

	clock_t startTime = clock();
	for(int i = 0 ;i < n;++i )
	{
		v.push_back(i);
	}
	clock_t endTime = clock();

	cout << "time is " << static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC << endl;

	std::vector<int> vec;
	vec.reserve(n);
	startTime = clock();
	for(int i = 0 ;i < n;++i )
	{
		v.push_back(i);
	}
	endTime = clock();
	cout << "time is " << static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC << endl;

	return 0;
}