#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Shape
{
public:
	// 纯虚函数
	virtual void Draw() = 0;
	virtual ~Shape() {}
};

class Circle : public Shape
{
public:
	virtual void Draw()
	{
		cout << "Circle::Draw..." << endl;
	}

	virtual ~Circle()
	{
		cout << "~Circle" << endl;
	}
};

class Square : public Shape
{
public:
	virtual void Draw()
	{
		cout << "Square::Draw..." << endl;
	}

	~Square()
	{
		cout << "~Square ..." << endl; 
	}
};

class Rectangle : public Shape
{
public:
	virtual void Draw()
	{
		cout << "Dectangle::Draw..." << endl;
	}

	virtual ~Rectangle()
	{
		cout << "~Rectangle" << endl;
	}
};

// 多态实现不同的方法调用
// ptr_vector的实现
void DrawAllShapes(const vector<Shape*>& v)
{
	for(auto it  = v.begin();it != v.end();++it)
	{
		(*it)->Draw();
	}
}

void DeleteAllShapes(std::vector<Shape*>& v)
{
	for(auto it = v.begin();it != v.end();++it)
	{
		// 销毁对象
		delete(*it);
	}
	// 销毁指针
	v.clear();
}

// 简单工厂模式
class ShapeFactory
{
public:
	static Shape* CreateShape(const string& name)
	{
		Shape* ps = 0;
		if(name == "Circle")
		{
			ps = new Circle;
		}
		else if(name == "Square")
		{
			ps = new Square;
		}
		else if(name == "Rectangle")
		{
			ps = new Rectangle;
		}

		return ps;
	}
};

int main()
{
	vector<Shape*> v;
	Shape* ps;
	ps = ShapeFactory::CreateShape("Circle");
	v.push_back(ps);
	ps = ShapeFactory::CreateShape("Square");
	v.push_back(ps);
	ps = ShapeFactory::CreateShape("Rectangle");
	v.push_back(ps);

	ps = NULL;
	DrawAllShapes(v);
	DeleteAllShapes(v);
	cout << v.size() << endl;



	return 0;
}














