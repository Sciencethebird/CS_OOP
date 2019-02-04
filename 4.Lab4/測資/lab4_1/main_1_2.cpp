#include <iostream>
#include <stdio.h>
using namespace std;
#include "ArrayStack.h"

int main(){
    ArrayStack<int> test;
    test.push(5);
    printf("%d\n", test.getSize());
    printf("%d\n", test.isEmpty());
    printf("%d\n", test.Top());
    return 0;
}