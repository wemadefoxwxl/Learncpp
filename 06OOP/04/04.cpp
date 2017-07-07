#include <iostream>

using std::cout;
using std::endl;

class Furnitue
{
public:
	Furnitue(int weight):weight_(weight)
	{
		cout << "Furnitue(int weight) " << endl;
	}

	~Furnitue()
	{
		cout << "~Furnitue..." << endl;
	}

	int getWeight() const
	{
		return weight_;
	}
public:
	int weight_;
};

class Bed : virtual public Furnitue
{
public:
	Bed(int weight) : Furnitue(weight)
	{
		cout << "Bed ..." << endl;
	}

	~Bed()
	{
		cout << "~Bed..." << endl;
	}

	void sleep() const
	{
		cout << "sleep..." << endl;
	}
};

class Sofa : virtual public Furnitue
{
public:
	Sofa(int weight) : Furnitue(weight)
	{
		cout << "Sofa ..." << endl;
	}

	~Sofa()
	{
		cout << "~Sofa..." << endl;
	}

	void watchTV() const
	{
		cout << "watchTV..." << endl;
	}
};

class SofaBed : public Sofa,public Bed
{
public:
	SofaBed(int weight)
			:Sofa(weight),Bed(weight),Furnitue(weight)
	{
		cout << "SofaBed..." << endl;	
		foldIn();
	}

	~SofaBed()
	{
		cout << "~SofaBed..." << endl;
	}

	void foldOut() const
	{
		cout << "foldOut..." << endl;
	}

	void foldIn() const
	{
		cout << "foldIn..." << endl;
	}

};

int main()
{
	SofaBed sofabed(5);

	cout << sofabed.getWeight() << endl;

	sofabed.watchTV();
	sofabed.sleep();
	sofabed.foldOut();


	return 0;
}










