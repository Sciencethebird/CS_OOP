#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	IntegerNumber n2(2);
    IntegerNumber n3(3);
    IntegerNumber n4(0);
	n3.div(n2);
	printf("%d\n", n3.getNumber());
	n4.setNumber(11);
	printf("%d\n", n4.getNumber());
	n3.mul(n4);
	printf("%d\n", n3.getNumber());
	return 0;
}