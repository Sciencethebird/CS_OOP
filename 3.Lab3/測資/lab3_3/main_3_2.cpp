#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	//advanced + - * / %
	IntegerNumber n1(15);
	IntegerNumber n2(3);
	
	IntegerNumber n3(n1 + n2);
	IntegerNumber n4(n1 - n2 + n3);
	IntegerNumber n5(-n1);
	IntegerNumber n6(-n1 - n2 * n3);
	IntegerNumber n7(n1 % n2);
	IntegerNumber n8(5 + n1);
	IntegerNumber n9(5 - n2);
	IntegerNumber n10(5 * n3);
	IntegerNumber n11(25 / n2);
	IntegerNumber n12(25 % n1);
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