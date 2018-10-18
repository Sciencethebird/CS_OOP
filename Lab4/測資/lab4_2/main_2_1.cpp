#include <iostream>
#include <stdio.h>
using namespace std;
#include "ListStack.h"

int main(){
    ListStack<int> test;
    printf("%d\n", test.getSize());
    printf("%d\n", test.isEmpty());
    return 0;
}