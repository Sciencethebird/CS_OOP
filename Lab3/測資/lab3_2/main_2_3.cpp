#include <iostream>
using namespace std;
#include "MyStack.h"
int main()
{
	MyStack s1;
	MyStack s2;
	MyStack s3;
	MyStack s4;
	MyStack s5;
	MyStack s6(s1);
	MyStack s7(s2);
	MyStack s8(s3);
	MyStack s9(s4);
	MyStack s10(s5);

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s6.push(5);
	s1.print();
	s6.print();
	int n = getAvailCap(s3);
	cout << n << endl;
}