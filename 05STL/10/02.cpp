#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;

struct MyGreater
{
	bool operator()(int left, int right)
	{
		return left > right;
	}
};

int main()
{
	std::map<int,std::string,std::greater<int> > mapTest;
	mapTest.insert(std::map<int,std::string>::value_type(1,"aaa"));
	mapTest.insert(std::make_pair(2,"bbn"));
	mapTest.insert(std::pair<int,std::string>(3,"ccc"));

	for(std::map<int,std::string,std::greater<int> >::iterator it = mapTest.begin();it != mapTest.end();++it)
	{
		cout << it->first << "   " << it->second << endl;
	}


	return 0;
}