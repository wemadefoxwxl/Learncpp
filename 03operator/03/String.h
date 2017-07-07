#ifndef _String_H_
#define _String_H_

namespace wl
{
class String
{
public:
	explicit String(const char* str="");
	String(const String& other);
	String& operator=(const String& other);
	String& operator=(const char* str);

	bool operator!() const;
	~String();
	void Display() const;

private:
	char* str_;
	char* allocAndcpy(const char* str);
};

};

#endif