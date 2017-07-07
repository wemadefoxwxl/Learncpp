#include <iostream>

using std::cout;
using std::endl;

class Test
{
public:
	Test(int n): n_(n)
	{
		cout << "Test(int n): n_(n)" << endl;
	}

	Test(const Test& other):n_(other.n_)
	{
		cout << "Test(const Test& other)" << endl;
	}

	~Test()
	{
		cout << "~Test()" << endl;
	}

	void* operator new(size_t size)
	{
		cout << "void* operator new(size_t size)" << endl;
		void* p = malloc(size);
		return p;
	}

	void operator delete(void* p)
	{
		cout << "void operator delete(void* p)" << endl;
		free(p);
	}

	void* operator new(size_t size,void *p)
	{
		cout << "void operator new(size_t size,void *p)" << endl;
		return p;
	}

	void operator delete(void *p, size_t size)
	{
		cout<<"void operator delete(void* p, size_t size)"<<endl;
		free(p);
	} 

	void operator delete(void *, void *)
	{
	}

	void* operator new(size_t size, const char* file, long line)
	{
		cout << "void* operator new(size_t size, const char* file, long line)" << endl;
		cout<<file<<":"<<line<<endl;
		void* p = malloc(size);
		return p;
	}

	void operator delete(void* p, const char* file, long line)
	{
		cout << "void operator delete(void* p, const char* file, long line)" << endl;
		cout<<file<<":"<<line<<endl;
		free(p);
	}

	void operator delete(void* p, size_t size, const char* file, long line)
	{
		cout << "void operator delete(void* p, size_t size, const char* file, long line)" << endl;
		cout<<file<<":"<<line<<endl;
		free(p);
	}
public:
	int n_;
};

void* operator new(size_t size)
{
	cout << "gloable void* operator new(size_t size)" << endl;
	void* p = malloc(size);
	return p;
}

void operator delete(void* p)
{
	cout << "gloable void operator delete(void* p)" << endl;
	free(p);
}

void* operator new[](size_t size)
{
	cout << "gloable void* operator new[](size_t size)" << endl;
	void* p = malloc(size);
	free(p);
}

void operator delete[](void* p)
{
	cout << "gloable void operator delete[](void* p)" << endl;
	free(p);
}

void operator delete[](void* p,size_t size)
{
	cout << "gloable void operator delete[](void* p,size_t size)" << endl;
	free(p);
}



int main()
{
	// new operator = operator new + 构造函数的调用
	Test* p1 = new Test(100);
	cout << endl;

	//delete operator = 析构函数的调用 + operator delete
	delete p1;
	cout << endl;

	char* str = new char[10];
	// delete[] str;
	cout << endl;

	char chunk[10];
	// operator new(size_t size,void* p)
	// placement new ，不分配内存 + 构造函数的调用
	Test* p2 = new(chunk) Test(200);
	cout << endl;
	cout << p2->n_ << endl;
	p2->~Test();
	// delete p2;

	Test* p3 = reinterpret_cast<Test*>(chunk);
	cout << p3->n_ << endl;
	cout << endl;


#define new new(__FILE__,__LINE__)
	Test* p4 = new Test(999);
	delete p4;
	return 0;
}



