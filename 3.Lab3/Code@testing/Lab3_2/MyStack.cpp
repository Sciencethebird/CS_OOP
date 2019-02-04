#include <iostream>
#include<iomanip>
using namespace std;
#include "MyStack.h"

MyStack :: MyStack()
{
    cap = 5;
    len = 0;
    arr= new int[cap];
}
MyStack :: MyStack(int c)
{
    cap = c;
    len = 0;
    arr= new int[cap];
}
MyStack :: MyStack(const MyStack & s)
{
    int *temp;
    temp = new int[cap];
    for(int i=0; i<len; i++)
    {
        temp[i]=arr[i];
    }
    arr = temp;
}
MyStack:: ~MyStack()
{
    delete []arr;
}
void MyStack:: push(int n)
{
    if(len < cap)
    {
        arr[len] = n;
        len++;
    }
}
void MyStack:: pop()
{
    if(len > 0)
    {
        arr[len] = '\0';
        len--;
    }
}
int getAvailCap(MyStack & s){
    return s.cap - s.len;
}
