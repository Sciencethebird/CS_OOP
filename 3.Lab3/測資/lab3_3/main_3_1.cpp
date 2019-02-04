#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	//basic + - * / %
	IntegerNumber n1(10);
	IntegerNumber n2(5);
	
	IntegerNumber n3(n1 + n2);
	IntegerNumber n4(n1 - n2);
	IntegerNumber n5(n1 * n2);
	IntegerNumber n6(n1 / n2);
	IntegerNumber n7(n1 % n2);
	IntegerNumber n8(n1 + 5);
	IntegerNumber n9(n1 - 5);
	IntegerNumber n10(n1 * 5);
	IntegerNumber n11(n1 / 5);
	IntegerNumber n12(n1 % 7);
	cout << n3.getNumber() << endl;
	cout << n4.getNumber() << endl;
	cout << n5.getNumber() << endl;
	cout << n6.getNumber() << endl;
	cout << n7.getNumber() << endl;
	cout << n8.getNumber() << endl;
	cout << n9.getNumber() << endl;
	cout << n10.getNumber() << endl;
	cout << n11.getNumber() << endl;
	cout << n12.getNumber() << endl;

	return 0;
}