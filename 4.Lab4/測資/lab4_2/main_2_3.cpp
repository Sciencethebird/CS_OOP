#include <iostream>
#include <stdio.h>
using namespace std;
#include "ListStack.h"

int main(){
    ListStack<int> test;
    test.push(15);
    test.push(20);
    test.push(30);
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