#include <iostream>

using std::cout;
using std::endl;

class BB
{
public:
	virtual void vfbb()
	{
		cout << "BB::vfbb" << endl;
	}

	virtual void vfbb2()
	{
		cout << "BB::vfbb2" << endl;
	}

	BB():bb_(1)
	{

	}
private:
	long bb_;
};


class B1 : virtual public BB
{
public:
	virtual void vfb1()
	{
		cout << "B1::vfb1" << endl;
	}

	B1():b1_(2)
	{

	}

public:
	long b1_;
};

class B2 : virtual public BB
{
public:
	virtual void vfb2()
	{
		cout << "B2::vfb2" << endl;
	}

	B2():b2_(2)
	{

	}
private:
	long b2_;
};


class DD : public B1 ,public B2
{
public:
	virtual void vfdd()
	{
		cout << "DD::vfdd" << endl;
	}

	DD():dd_(3)
	{

	}
public:
	long dd_;
};

typedef void (*FUNC)();

int main()
{
	cout << sizeof(BB) << endl;
	cout << sizeof(B1) << endl;
	cout << sizeof(B2) << endl;
	cout << sizeof(DD) << endl;
	cout << sizeof(FUNC) << endl;
	cout << sizeof(long) << endl;
	cout << endl;

	BB bb;
	long** p;
	p = (long**)&bb;
	FUNC fun;
	fun = (FUNC)p[0][0];
	fun();
	fun = (FUNC)p[0][1];
	fun();
	long* q = (long*)&bb;
	cout << q[1] << endl;
	cout<< endl;


	B1 b1;
	p = (long**)&b1;
	fun = (FUNC)p[0][0];
	fun();
	fun = (FUNC)p[2][0];
	fun();
	fun = (FUNC)p[2][1];
	fun();
	q = (long*)&b1;
	cout << q[1] << endl;
	cout << q[3] << endl;
	cout << endl;


	DD dd;
	p = (long**)&dd;
	fun = (FUNC)p[0][0];
	fun();
	fun = (FUNC)p[0][1];
	fun();
	fun = (FUNC)p[2][0];
	fun();
	fun = (FUNC)p[5][0];
	fun();
	fun = (FUNC)p[5][1];
	fun();
	

	cout << endl;
	q = (long*)&dd;
	cout << q[1] << endl;
	cout << q[3] << endl;
	cout << q[4] << endl;
	cout << q[6] << endl;

	return 0;
}














