#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::string;


int main()
{
	std::map<string,int> mapTest;

	mapTest["aaa"] = 100;
	mapTest.insert(std::map<string,int>::value_type("bbb",200));
	mapTest.insert(std::pair<string,int>("ccc",300));
	mapTest.insert(std::make_pair("ddd",400));

	cout  << "bbb   " << mapTest["bbb"] << endl;
	mapTest["bbb"] = 1234;

	std::map<string,int>::iterator it;
	it = mapTest.find("ccc");
	if(it != mapTest.end())
	{
		it->second = 1000;
	}
	else
	{
		cout << "Not Found" << endl;
	}

	for(it = mapTest.begin();it != mapTest.end();++it)
	{
		cout << it->first << "   " << it->second << endl;
	}

	return 0;
}