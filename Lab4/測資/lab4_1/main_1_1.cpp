#include <iostream>
#include <stdio.h>
using namespace std;
#include "ArrayStack.h"

int main(){
    ArrayStack<int> test;
    printf("%d\n", test.getSize());
    printf("%d\n", test.isEmpty());
    return 0;
}