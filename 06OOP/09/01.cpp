#include <iostream>

using std::cout;
using std::endl;

class Shape
{
public:
	virtual void Draw() const = 0;
	virtual ~Shape() {}
};

class Circle : public Shape
{
public:
	virtual void Draw() const 
	{
		cout << "Circle Draw ..." << endl;
	}
};

class Square : public Shape
{
public:
	virtual void Draw() const 
	{
		cout << "Square Draw..." << endl;
	}
};

int main()
{
	Shape* p;
	Circle c;

	p = &c;
	p->Draw();

	// dynamic_cast进行安全的向下转型
	if(dynamic_cast<Circle*>(p))
	{
		cout << "p is point to a Circle object" << endl;
		Circle* cp = dynamic_cast<Circle*>(p);
		cp->Draw(); 
	}
	else if(dynamic_cast<Square*>(p))
	{
		cout << "p is point to a Square object" << endl;
	}
	else
	{
		cout << "p is point to a Other object" << endl;
	}
	cout << endl;

	//  RTII 运行时类型识别
	cout << typeid(*p).name() << endl;
	cout << typeid(Circle).name() << endl;
	if(typeid(Circle).name() == typeid(*p).name())
	{
		cout << "p is point to a Circle object" << endl;
		((Circle*)p)->Draw();
	}
	else if(typeid(Square).name() == typeid(*p).name())
	{
		cout<<"p is point to a Square object" << endl;
		((Square*)p)->Draw();
	}
	else
	{
		cout << "p is point to a other object" << endl;
	}


	return 0;
}