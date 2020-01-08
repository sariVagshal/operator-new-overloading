#include <iostream>
#include "class.h"
using std::cout;
using std::endl;

int main()
{
	ClassExample * ce0 = new ClassExample();
	ce0->foo();
	delete ce0;

	cout << endl;

	ClassExample * ce1 = new ClassExample[4];
	ce1->foo();
	delete[] ce1;
	return 0;
}
