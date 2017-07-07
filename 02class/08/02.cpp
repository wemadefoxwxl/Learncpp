#include <iostream>

using std::cout;
using std::endl;

class Empty
{
public:
	Empty* operator&()
	{
		cout << "AAAAA" << endl;
		return this;
	}

	const Empty* operator&() const
	{
		cout << "BBBBB" << endl;
		return this;
	}
};

int main()
{
	Empty e;
	Empty* p = &e;   //e.operator&();

	const Empty e2;
	const Empty* p2 = &e2;

	cout << sizeof(Empty) << endl;		// 1	
	cout << sizeof(e) << endl;

	return 0;
}