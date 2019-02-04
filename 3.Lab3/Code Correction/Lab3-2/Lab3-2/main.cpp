//
//  main.cpp
//  Lab3-2
//
//  Created by Sciencethebird on 2018/7/20.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include "MyStack.h"
MyStack::MyStack(){
    arr = new int [5];
    cap = 5;
    len = 0;
};
MyStack::MyStack(int c){
    arr = new int [c];
    cap = c;
    len = 0;
};
MyStack::MyStack(const MyStack & s){
    cap = s.cap;
    len = s.len;
    arr = new int [cap];
    for(int i = 0; i< len ; i++)
        arr[i] = s.arr[i];
};
MyStack::~MyStack(){
    delete [] arr;
}
void MyStack::push(int n){
    if(len < cap){
        arr[len] = n;
        len++;
    }
}
void MyStack::pop(){
    if(len > 0)
        len--;
}
int getAvailCap(MyStack &s){
    return s.cap - s.len;
}
int main(int argc, const char * argv[]) {
    using namespace std;

    
    MyStack s1;
    s1.print();
    s1.pop();
    s1.print();
    s1.push(2);
    s1.push(3);
    s1.print();
    MyStack s2(s1);
    s2.print();
    s2.push(5);
    s1.print();
    s2.print();

    
    
    return 0;
}
