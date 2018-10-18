//
//  main.cpp
//  Final-2-string
//
//  Created by Sciencethebird on 2018/8/26.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include "ZipCode.h"
/*
ZipCode::ZipCode(){
    std::string temp = "???";
    code = new char [temp.length()+1];
    strcpy(code, temp.c_str());
}*/
ZipCode::ZipCode(){
    code = new char [4];
    strcpy(code, "???");
}
/*ZipCode::ZipCode(int n){
    std::string num = std::to_string(n);
    code  = new char[num.length()+1];
    strcpy(code, num.c_str());
}*/
ZipCode::ZipCode(int n){
    size_t sz = log10(n)+1;
    code = (char*)malloc(sz+1);
    for(int i = 0; i< sz; i++){
        code[sz - i - 1] = '0'+ n%10;
        n/=10;
    }
    code[sz] = '\0';
}
ZipCode::ZipCode(const char* n){
    code = new char [strlen(n)+1];
    strcpy(code, n);
}
void ZipCode::extend(int n){
    std::string temp = code;
    delete [] code;
    temp = temp + Hyphen + std::to_string(n);
    code = new char [temp.length()+1];
    strcpy(code, temp.c_str());
}
void ZipCode::extend(const char* n){
    std::string temp = code;
    delete [] code;
    temp = temp + Hyphen + n;
    code = new char [temp.length()+1];
    strcpy(code, temp.c_str());
}
ZipCode::~ZipCode(){
    delete [] code;
}
std::ostream &operator << (std::ostream &out, const ZipCode&n){
    out << n.code;
    return out;
};
int main(int argc, const char * argv[]) {
    ZipCode test("I Love Her this very moment"), test2(123456);
    test.extend("OMG");
    std::cout << test2 << std::endl;
    return 0;
}
