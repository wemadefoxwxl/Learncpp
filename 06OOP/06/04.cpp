#include <iostream>

using std::cout;
using std::endl;


class CObject
{
public:
	virtual void Serialize()
	{
		cout << "CObject::Serialize..." << endl;
	}
};

class CDocument : public CObject
{
public:
	void func()
	{
		cout << "CDocument::func..." << endl;
		Serialize();
	}

	virtual void Serialize() 
	{
		cout << "CDocument::Serialize..." << endl;
	}

	CDocument()
	{
		cout << "CDocument()" << endl;
	}

	CDocument(const CDocument& other)
	{
		cout << "CDocument(const CDocument& other)" << endl;
	}

private:
	int data_;
};

class CMyDoc : public CDocument
{
public:
	virtual void Serialize()
	{
		cout << "CMyDoc::Serialize..." << endl;
	}
private:
	int data2_;
};


int main()
{
	CMyDoc mydoc;
	CMyDoc* pmydoc = new CMyDoc;

	cout << "#1  testing" << endl;
	mydoc.func();

	// 基类指针指向子类对象，多态
	cout << "#2  testing" << endl;
	((CDocument*)(&mydoc))->func();

	cout << "#3  testing" << endl;
	pmydoc->func();

	cout << "#4  testing" << endl;
	// mydoc对象强制转换为CDocument对象,向上转型
	// 完完全全将派生类对象转换为了基类对象
	((CDocument)(mydoc)).func();


	return 0;
}










