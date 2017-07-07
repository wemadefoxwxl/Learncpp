#include <iostream>

using std::cout;
using std::endl;

class BB
{
public:
	BB():bb_(0)
	{

	}

	long bb_;
};

class B1 : virtual public BB
{
public:	
	B1():b1_(1)
	{

	}

	long b1_;
};

class B2 : virtual public BB
{
public:
	B2():b2_(2)
	{

	}

	long b2_;
};

class DD : public B1 , public B2
{
public:
	DD():dd_(4)
	{

	}

	long dd_;
};


int main()
{
	cout << sizeof(long) << endl;
	cout << sizeof(BB) << endl;
	cout << sizeof(B1) << endl;
	cout << sizeof(DD) << endl;
	cout << endl;

	B1 b1;
	long** p;
	long*  q;

	p = (long**)&b1;
	q = (long*)&b1;
	cout << p[0][0] << endl;
	cout << p[0][1] << endl;
	cout << q[1] << endl;
	cout << q[2] << endl;
	cout << endl;
	

	DD dd;

	p = (long**)&dd;
	q = (long*)&dd;
	cout << p[0][0] << endl;
	cout << p[0][1] << endl;
	cout << q[1] << endl;
	cout << p[2][0] << endl;
	cout << p[2][1] << endl;
	cout << q[3] << endl;
	cout << q[4] << endl;
	cout << q[5] << endl;

	cout<<endl;

	

	BB* pp;
	//通过间接访问，这需要运行时的支持
	// pp->bb_;


	return 0;
}
