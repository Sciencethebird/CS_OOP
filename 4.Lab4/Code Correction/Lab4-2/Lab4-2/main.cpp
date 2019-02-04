//
//  main.cpp
//  Lab4-2
//
//  Created by Sciencethebird on 2018/8/10.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//
#include <iostream>
#include <stdio.h>
using namespace std;
#include "ListStack.h"

int main(){
    ListStack<int> test;
    const ListStack<float> test1;
    //cout << "const size" << test1.getSize() << endl;
    test.push(15);
    test.push(20);
    test.push(30);
    for(int i = 0; i< 5; i++) cout << "XD = " << test[i] << endl;
    printf("%d\n", test.getSize());
    printf("%d\n", test.isEmpty());
    printf("%d\n", test.Top());
    test.pop();
    printf("%d\n", test.Top());
    test.pop();
    printf("%d\n", test.Top());
    test.pop();
    test.push(231);
    printf("%d\n", test.isEmpty());
    return 0;
}

