#ifndef _INTEGER_H_
#define _INTEGER_H_

class Integer
{
public:
	Integer(int n);
	~Integer();

	// 前置++
	Integer& operator++();
	// friend Integer& operator++(Integer& i);
	// 后置++
	Integer operator++(int);
	// friend Integer operator++(Integer& i,int);
	void Display() const;
private:
	int n_;
};

#endif