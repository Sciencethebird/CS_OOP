//
//  main.cpp
//  Lab3-3
//
//  Created by Sciencethebird on 2018/7/20.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include "IntegerNumber.h"
using namespace std;
int main(int argc, const char * argv[]) {
    
    IntegerNumber n1(15);
    IntegerNumber n2(3);
    
    IntegerNumber n3;
    IntegerNumber n4;
    
    n3 = n1 + n2;
    n4 = n2;
    n4++;
    n4 = -n4;
    cout << n3.getNumber() << endl; // 18
    cout << n4.getNumber() << endl; // 3
    
    ++n4;
    cout << n4.getNumber() << endl; // 4
    
    n3--;
    cout << n3.getNumber() << endl; // 17
    
    --n3;
    cout << n3.getNumber() << endl; // 16
    
    IntegerNumber n5;
    n5 = n3--;
    cout << n5.getNumber() << endl; //16
    cout << n3.getNumber() << endl; //15
    
    n5 += n3;
    cout << n5.getNumber() << endl; //31
    
    n5 -= n3;
    cout << n5.getNumber() << endl;
    
    IntegerNumber n6;
    n6 = n5++;
    cout << n6.getNumber() << endl;
    cout << n5.getNumber() << endl;
    
    n6 = ++n5;
    cout << n6.getNumber() << endl;
    cout << n5.getNumber() << endl;
    
    return 0;
}
