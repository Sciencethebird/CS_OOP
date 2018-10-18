//
//  main.cpp
//  M-1
//
//  Created by Sciencethebird on 2018/8/2.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
int gcd(int a, int b){
    while(a > 0){
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}
int main(int argc, const char * argv[]) {
    int test;
    std::cin >> test;
    for(int i = 0; i< test ; i++){
        int a, b;
        std::cin >> a >> b;
        std::cout << gcd(a, b) << std:: endl;
    }
    
}
