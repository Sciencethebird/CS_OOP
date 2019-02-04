#include <iostream>
#include <stdio.h>
using namespace std;
#include "ListStack.h"

int main(){
    ListStack<int> test;
    test.push(3);
    printf("%d\n", test.getSize());
    printf("%d\n", test.isEmpty());
    printf("%d\n", test.Top());
    return 0;
}