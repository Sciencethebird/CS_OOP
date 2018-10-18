#include <iostream>
using namespace std;
#include "IntegerNumber.h"


IntegerNumber :: IntegerNumber(int n)
{
    number = n;
    printf("constructor\n");
}

void IntegerNumber :: add(IntegerNumber n)
{
    number += n.number;
}
void IntegerNumber ::sub(IntegerNumber n)
{
    number -=n.number;
}
void IntegerNumber ::mul(IntegerNumber n)
{
    number *=n.number;
}
void IntegerNumber ::div(IntegerNumber n)
{
    number /=n.number;
}
void IntegerNumber ::mod(IntegerNumber n)
{
    number %=n.number;
}
int IntegerNumber :: getNumber(){
    return number;
}
void IntegerNumber ::setNumber(int n){
    number = n;
}
