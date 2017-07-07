#ifndef _TEST_H_
#define _TEST_H_

class Test
{
public:
	// 如果类不提供任何一个构造函数，系统将为我们提供一个不带参数
	// 的默认构造函数
	Test();
	explicit Test(int num);
	~Test();
	Test(const Test& other);
	Test& operator=(const Test& other);


	void Display();
private:
	int num_;	
};


#endif