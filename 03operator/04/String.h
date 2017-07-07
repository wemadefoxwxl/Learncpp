#ifndef __STRING_H_
#define __STRING_H_

#include <iostream>

namespace wl
{
class String
{
public:
	String(const char* str="");
	String(const String& other);
	String& operator=(const String& other);
	String& operator=(const char* str);
	~String();

	bool operator!() const;
	char& operator[](size_t index);
	const char& operator[](size_t index) const;

	friend String operator+(const String& str1,const String& str2);
	String& operator+=(const String& other);

	friend std::ostream& operator<<(std::ostream& os,const String& str);
	friend std::istream& operator>>(std::istream& os,String& str);

	void Display() const;
	bool empty() const;
private:
	char* str_;
};



}

#endif


