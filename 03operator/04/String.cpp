#include <cstring>
#include "String.h"

using namespace wl;

String::String(const char* str)
{
	int len = strlen(str)+1;
	str_ = new char[len];
	memset(str_,0,len);
	strcpy(str_,str);
}

String::String(const String& other)
{
	int len = strlen(other.str_) + 1;
	str_ = new char[len];
	memset(str_,0,len);
	strcpy(str_,other.str_);
}

String& String::operator=(const String& other)
{
	if(this == & other)
	{
		return *this;
	}
	delete[] str_;
	int len = strlen(other.str_) + 1;
	str_ = new char[len];
	memset(str_,0,len);
	strcpy(str_,other.str_);
	return *this;
}

String& String::operator=(const char* other)
{
	delete[] str_;
	int len = strlen(other) + 1;
	str_ = new char[len];
	memset(str_,0,len);
	strcpy(str_,other);
	return *this;
}

String::~String()
{
	delete[] str_;
	str_ = NULL;
}


bool String::empty() const
{
	return strlen(str_) == 0;
}


bool String::operator!() const
{
	return !empty();
}

char& String::operator[](size_t index) 
{
	int len = strlen(str_);
	if(index > len)
			return str_[len];
	return str_[index];
}


const char& String::operator[](size_t index) const
{
	int len = strlen(str_);
	if(index > len)
			return str_[len];
	return str_[index];
}

// wl 下的operator
String wl::operator+(const String& str1,const String& str2)
{
	int len = strlen(str1.str_) + strlen(str2.str_) + 1;
	char* p = new char[len];
	strcpy(p,str1.str_);
	strcat(p,str2.str_);

	return p;

	// String str = str1;
	// str += str2;
	// return str;
}


String& String::operator+=(const String& other)
{
	int len = strlen(str_) + strlen(other.str_) + 1;
	char* p = new char[len];
	strcpy(p,str_);
	strcat(p,other.str_);
	delete[] str_;
	str_ = p;
	p = NULL;

	return *this;
}


std::ostream& wl::operator<<(std::ostream& os,const String& str)
{
	os << str.str_ ;
	return os;
}

std::istream& wl::operator>>(std::istream& is,String& str)
{
	char tmp[1024];
	is >> tmp;
	str = tmp;
	return is;
}





















