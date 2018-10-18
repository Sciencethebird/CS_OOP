//
//  main.cpp
//  Stack Function Test
//
//  Created by Sciencethebird on 2018/8/21.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include "MyStack.h"
int main(int argc, const char * argv[]) {

    Stack<int> test;
    for(int i = 0; i< 10; i++){
        test.push(i);
    }
    test.erase(9);
    std::cout << test << std::endl;
    return 0;
}
