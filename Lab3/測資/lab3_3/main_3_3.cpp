#include <iostream>
using namespace std;
#include "IntegerNumber.h"
int main()
{
	//advanced + - * / %
	IntegerNumber n1(15);
	IntegerNumber n2(3);
	
	IntegerNumber n3;
	IntegerNumber n4;
	
	n3 = n1 + n2;
	n4 = n2;
	n4++;
	cout << n3.getNumber() << endl;
	cout << n4.getNumber() << endl;

	++n4;
	cout << n4.getNumber() << endl;

	n3--;
	cout << n3.getNumber() << endl;

	--n3;
	cout << n3.getNumber() << endl;
	
	IntegerNumber n5;
	n5 = n3--;
	cout << n5.getNumber() << endl;
	cout << n3.getNumber() << endl;

	n5 += n3;
	cout << n5.getNumber() << endl;

	n5 -= n3;
	cout << n5.getNumber() << endl;

	IntegerNumber n6;
	n6 = n5++;
	cout << n6.getNumber() << endl;
	cout << n5.getNumber() << endl;	

	n6 = ++n5;
	cout << n6.getNumber() << endl;
	cout << n5.getNumber() << endl;		

	return 0;
}
