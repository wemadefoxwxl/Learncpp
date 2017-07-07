#include <iostream>
#include "Integer.h"

using std::cout;
using std::endl;

Integer::Integer(int n):n_(n)
{
}

Integer::~Integer()
{
}


Integer& Integer::operator++()
{
	++n_;
	return *this;
}

Integer Integer::operator++(int)
{
	Integer tmp(this->n_);
	++n_;
	return tmp;
}

void Integer::Display() const
{
	cout << n_ << endl;
}