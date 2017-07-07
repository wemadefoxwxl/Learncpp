#include <cstring>
#include <iostream>
#include "String.h"

using namespace wl;

String::String(const char* str)
{
	str_ = allocAndcpy(str);
}

String::String(const String& other)
{
	str_ = allocAndcpy(other.str_);
}

String& String::operator=(const String& other)
{
	if(&other == this)
		return *this;
	delete[] str_;
	str_ = allocAndcpy(other.str_);
	return *this;
}

String& String::operator=(const char* str)
{
	delete[] str_;
	str_ = allocAndcpy(str);
	return *this;
}

bool String::operator!() const
{
	return strlen(str_) != 0;
}

String::~String()
{
	delete[] str_;
}

char* String::allocAndcpy(const char* str)
{
	int len = strlen(str)+1;
	char* newstr = new char[len];
	memset(newstr,0,len);
	strcpy(newstr,str);
	return newstr;
}


void String::Display() const
{
	std::cout << str_ << std::endl;
}















