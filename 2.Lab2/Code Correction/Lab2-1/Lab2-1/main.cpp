//
//  main.cpp
//  Lab2-1
//
//  Created by Sciencethebird on 2018/7/18.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
using namespace std;
void gcd(int a, int b){
    while(b != 0){
        int t = b;
        b = a%b;
        a = t;
    }
    if(a<0)
        a = -a;
    cout << a << endl;
}
int main() {
    int a, b, cnt;
    cin >> cnt;
    for(int i = 0; i< cnt; i++){
        cin >> a >> b;
        gcd(a, b);
    }
    return 0;
}
