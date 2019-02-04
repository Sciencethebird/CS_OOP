#include <iostream>
using namespace std;
#include "MyStack.h"
int main()
{
	MyStack s1;
	MyStack s2(10);
	s1.print();
	s2.print();
	for(int i = 0; i < 6; i ++){
	    s1.push(i);	
	    s2.push(i);
	}
	s1.print();
	s2.print();
	s1.pop();
	s1.print();
	MyStack s3(s1);
	s3.print();
	int n = getAvailCap(s3);
	cout << n << endl;
}