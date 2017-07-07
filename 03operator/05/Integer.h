#ifndef _INTEGER_H_
#define _INTEGER_H_

class Integer
{
public:
	Integer(int n);
	~Integer();

	Integer& operator++();
	// friend Integer& operator++(Integer& n);

	Integer operator++(int);
	// friend Integer operator++(Integer& n,int);

	// 类型转换运算符
	// 1.必须是成员函数，不能是友元函数
	// 2.没有参数
	// 3.没有返回值(其实返回值已经指定了)
	operator int();

	friend std::ostream& operator<<(std::ostream& os,const Integer& n);
private:
	int n_;
};


#endif