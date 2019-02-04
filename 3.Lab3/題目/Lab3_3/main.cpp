#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	// We offer you this main.cpp to help you
	// debug your code.
	// This main.cpp will not be used
	// when judging.

	IntegerNumber n1(10);
	IntegerNumber n2(5);
	
	IntegerNumber n4(2);
	IntegerNumber n3(n1 + n2);
	cout << n3.getNumber() << endl;
	n4 = n3;
	cout << n4.getNumber() << endl;
	return 0;
}