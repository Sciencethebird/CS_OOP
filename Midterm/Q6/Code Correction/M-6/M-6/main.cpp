//
//  main.cpp
//  M-6
//
//  Created by Sciencethebird on 2018/8/7.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Q6.h"
using namespace std;



int main(int argc, const char * argv[]) {
    
    myVector v1, v2;
    cout<< v1.size() <<endl;
    for(int i=0; i<5; i++) v1.push_back(i);
    for(int i=10; i>3; i--) v2.push_back(i);
    cout<< v1.size() <<endl;
    cout<< "sum :" << v1.sum() << endl;
    v1.concat(v2);
    cout<< "sum :" << v1.sum() << endl;
    v1.show();
    v1.sort();
    v1.show();
    return 0;
}
