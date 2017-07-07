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

	// map直接删除key
	mapTest.erase("bbb");

	std::map<string,int>::iterator it = mapTest.find("ccc");
	if(it == mapTest.end())
	{
		cout << "Not Found " << endl;
	}
	else
	{
		// map的迭代器删除
		mapTest.erase(it);
	}

	for(it = mapTest.begin();it != mapTest.end();++it)
	{
		cout << it->first << "  " << it->second << endl;
	}

	return 0;
}