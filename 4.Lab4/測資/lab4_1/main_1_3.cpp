#include <iostream>
#include <stdio.h>
using namespace std;
#include "ArrayStack.h"

int main(){
    ArrayStack<int> test;
    test.push(5);
    test.push(7);
    test.push(6);
    printf("%d\n", test.getSize());
    printf("%d\n", test.isEmpty());
    printf("%d\n", test.Top());
    test.pop();
    printf("%d\n", test.Top());
    test.pop();
    printf("%d\n", test.Top());
    test.pop();
    printf("%d\n", test.isEmpty());
    return 0;
}