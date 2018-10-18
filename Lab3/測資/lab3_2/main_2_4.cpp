#include <iostream>
using namespace std;
#include "MyStack.h"
int main()
{
	MyStack s1;
	s1.print();
	s1.pop();
	s1.print();
	s1.push(2);
	s1.push(3);
	s1.print();
	MyStack s2(s1);
	s2.print();
	s2.push(5);
	s1.print();
	s2.print();

}