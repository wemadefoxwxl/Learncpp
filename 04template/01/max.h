#ifndef _MAX_H_
#define _MAX_H_

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
const T& max(const T& a,const T& b)
{ 
	cout << "const T& max(const T& a,const T& b)" << endl;
	return a < b ? b : a;
}

// 函数模板重载
template <typename T>
const T& max(const T& a,const T& b,const T& c)
{
	cout << "const T& max(const T& a,const T& b,const T& c)" << endl;
	return ::max(a,b) < c ? c : ::max(a,b);
}

// 非模板函数重载
const int& max(const int& a,const int& b)
{
	cout << "non template function" << endl;
	return a < b ? b : a;
}

// 函数模板特化
template <>
const char* const& max(const char* const& a,const char* const& b)
{
	cout << "template <>  BBBBBBBBBBBB" << endl;
	return strcmp(a,b) < 0 ? b : a ;
}

// 非模板函数重载
const char* const& max(const char* const& a,const char* const& b)
{
	cout << "const char*  AAAAAAAAAA" << endl;
	return strcmp(a,b) < 0 ? b : a;
}


#endif