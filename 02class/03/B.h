#ifndef _B_H
#define _B_H


class A;

class B
{
public:
	B(void);
	~B(void);

	void fun(A& a)
	{

	}
	
	A* a_; 	//前向声明的类不能实例化对象。
};



#endif 