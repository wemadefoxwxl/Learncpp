#include <iostream>
#include "CountObject.h"

using std::cout;
using std::endl;

int main()
{
	cout << CountObject::GetCount() << endl;
	CountObject c1;
	cout << CountObject::GetCount() << endl;
	CountObject* p = new CountObject;
	cout << p->GetCount() << endl;
	delete p;
	cout << CountObject::GetCount() << endl;
	
	return 0;
}