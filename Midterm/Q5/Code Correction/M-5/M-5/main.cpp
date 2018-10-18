//
//  main.cpp
//  M-5
//
//  Created by Sciencethebird on 2018/8/7.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <string>
template<typename U>
U add(U a, U b){
    return a + b;
}
int main(int argc, const char * argv[]) {
    int condition;
    while(std::cin >> condition){
        if(condition == 1){
            int a, b;
            std::cin >> a >> b;
            std::cout << add(a, b) << std::endl;
            
        }else if(condition == 2){
            std::string a, b;
            std::cin >> a >> b;
            std::cout << add(a, b) << std::endl;
            
        }else if(condition == 0)
            break;
        
    }
    return 0;
}
