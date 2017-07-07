#include <iostream>

using std::cout;
using std::endl;

class Furniture
{
public:
	Furniture(int weight) : weight_(weight)
	{
		cout << "Furniture(int weight)" << endl;
	}

	int weight_;
};


class Bed : public Furniture
{
public:
	Bed(int weight):Furniture(weight)
	{
		cout << "Bed(int weight)" << endl;
	}

	void sleep() const
	{
		cout << "sleep..." << endl;
	}
};

class Sofa : public Furniture
{
public:
	Sofa(int weight):Furniture(weight)
	{
		cout << "Sofa(int weight)" << endl;
	}

	void watchTv() const
	{
		cout << "watchTv..." << endl;
	}
};


class SofaBed : public Bed,public Sofa
{
public:
	// sofaBed中有两个weight
	SofaBed(int weight):Bed(weight),Sofa(weight)
	{
		FoldIn();
	}

	void FoldIn() const
	{
		cout << "FoldIn..." << endl;
	}

	void FoldOut() const
	{
		cout << "FoldOut..." << endl;
	}
};

int main()
{	
	SofaBed sofabed(10);
	// 访问weight_时，会出现访问的不明确，因为有两个weight_
	sofabed.Bed::weight_ = 100;
	sofabed.Sofa::weight_ = 200;

	sofabed.watchTv();
	sofabed.FoldOut();
	sofabed.sleep();

	return 0;
}









