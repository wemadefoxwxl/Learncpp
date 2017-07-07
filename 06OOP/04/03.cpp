#include <iostream>

using std::cout;
using std::endl;

class Furniture
{
public:
	int weigth_;
};

// 虚继承
class Bed : virtual public Furniture
{
public:
	void sleep() const
	{
		cout << "sleep..." << endl;
	}
};

class Sofa : public virtual Furniture
{
public:
	void watchTV() const
	{
		cout << "watchTV..." << endl;
	}
};

class SofaBed : public Bed ,public Sofa
{
public:
	void FoldOut() const
	{
		cout << "FoldOut..." << endl;
	}

	void FoldIn() const
	{
		cout << "FoldIn..." << endl;
	}
};


int main()
{
	SofaBed sofabed;
	sofabed.weigth_ = 10;

	sofabed.watchTV();
	sofabed.FoldOut();
	sofabed.sleep();

	return 0;
}







