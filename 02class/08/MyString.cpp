#include <cstring>
#include <iostream>
#include "MyString.h"

MyString::MyString(char* str)
{
	str_ = allocAndcpy(str);
}

char* MyString::allocAndcpy(char* str)
{
	int len = strlen(str) + 1;
	char* tmp = new char[len];
	memset(tmp,0,len);
	strcpy(tmp,str);
	return tmp;
}

MyString::~MyString()
{
	delete[] str_;
}

MyString::MyString(const MyString& other)
{
	str_ = allocAndcpy(other.str_);
}

MyString& MyString::operator=(const MyString& other)
{
	if(this == &other)
		return *this;
	delete[] str_;
	str_ = allocAndcpy(other.str_);
	return *this;
}

void MyString::Display()
{
	std::cout << str_ << std::endl;
}