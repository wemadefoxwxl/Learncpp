#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{
	int a[] = {4,1,5,2,5,65,23,12,42,5};
	std::vector<int> v(std::begin(a),std::end(a));
	
	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	for(std::vector<int>::iterator it = v.begin();it != v.end();)
	{
		if(5 == *it)
			it = v.erase(it);
		else
			++it;
	}

	for(int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}