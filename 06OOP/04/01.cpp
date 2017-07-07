#include <iostream>

using std::cout;
using std::endl;

class Bed
{
public:
	Bed(int weight):weight_(weight)
	{

	}

	void sleep() const
	{
		cout << "sleep..." << endl;
	}
public:
	int weight_;
};


class Sofa
{
public:
	Sofa(int weight):weight_(weight)
	{

	}

	void watchTV() const
	{
		cout << "watchTV..." << endl;
	}

public:
	int weight_;
};

// 多重继承
class SofaBed : public Bed,public Sofa
{
public:
	SofaBed():Sofa(10),Bed(10)
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
	SofaBed sofabed;

	//Error 指代不明	
	//sofabed.weight_ = 100;

	sofabed.Sofa::weight_ = 100;
	sofabed.Bed::weight_ = 200;

	sofabed.watchTV();
	sofabed.FoldOut();
	sofabed.sleep();

	return 0;
}





















