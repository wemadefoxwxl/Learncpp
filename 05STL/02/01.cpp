#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void showVec(const vector<int>& v)
{
	std::vector<int>::const_iterator it = v.begin();
	while(it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	showVec(v);

	return 0;
}