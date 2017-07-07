#include <iostream>
#include "Integer.h"

Integer::Integer(int n) : n_(n)
{
}


Integer::~Integer()
{}

Integer& Integer::operator++()
{
	std::cout << "Integer& Integer::operator++()" << std::endl;
	++n_;
	return *this;
}

// Integer& operator++(Integer& n)
// {
// 	std::cout << "Integer& operator++(Integer& n)" << std::endl;
// 	++n.n_;
// 	return n;
// }

Integer Integer::operator++(int)
{
	std::cout << "Integer Integer::operator++(int)" << std::endl;
	Integer tmp(this->n_);
	++n_;
	return tmp;
}

// Integer operator++(Integer& n,int)
// {
// 	std::cout << "Integer operator++(Integer& n,int)" << std::endl;
// 	Integer tmp(n);
// 	++n.n_;
// 	return tmp;
// }

Integer::operator int()
{
	std::cout << "Integer::operator int()" << std::endl;
	return n_;
}

std::ostream& operator<<(std::ostream& os,const Integer& n)
{
	os << n.n_;
	return os;
}
