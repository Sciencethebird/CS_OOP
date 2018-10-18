#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	IntegerNumber n1(10);
	IntegerNumber n2;
	n1.add(n1);
	printf("%d\n", n1.getNumber());
	n1.add(n1);
	printf("%d\n", n1.getNumber());
	n1.add(n1);
	printf("%d\n", n1.getNumber());
	n1.mul(n1);
	printf("%d\n", n1.getNumber());
	n2.div(IntegerNumber(10));
	printf("%d\n", n2.getNumber());
	n2.setNumber(9);
	printf("%d\n", n2.getNumber());
	n1.mod(n2);
	printf("%d\n", n1.getNumber());
	return 0;
}