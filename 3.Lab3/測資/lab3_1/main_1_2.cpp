#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	IntegerNumber n1(10);
	IntegerNumber n2(100);
    IntegerNumber n3(1000);
    IntegerNumber n4(10000);
	n4.div(n1);
	printf("%d\n", n4.getNumber());
	n1.sub(n2);
	printf("%d\n", n1.getNumber());
	n3.mod(n1);
	printf("%d\n", n3.getNumber());
	n3.mul(n1);
	printf("%d\n", n3.getNumber());
	return 0;
}