//
//  main.cpp
//  Final-2
//
//  Created by Sciencethebird on 2018/8/25.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include "ZipCode .h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
void itoc(int n, char* &code){
    int sz = log10(n)+1;
    code = new char [sz+1];
    for(int i = 0; i< sz; i++){
        code[sz-1- i] = '0' + (n%10);
        n /= 10;
    }
    code[sz] = '\0';
}
ZipCode::ZipCode(){
    code =(char*)malloc(sizeof(char) * 4);
    strcpy(code, "???");
}
ZipCode::ZipCode(const char*n){
    code = new char [strlen(n)+1];
    strcpy(code, n);
}

/*ZipCode::ZipCode(int n){ /// cheating method
    string temp = to_string(n);
    code =(char*)malloc(temp.length()+1);
    strcpy(code, temp.c_str());
}*/
ZipCode::ZipCode(int n){
    itoc(n, code);
}
ZipCode::ZipCode(ZipCode &old){
    code = new char [strlen(old.code)+1];
    strcpy(code, old.code);
}
void ZipCode::extend(int n){
    char *temp;
    itoc(n, temp);
    strcat(code, "-");
    strcat(code, temp);
}
void ZipCode::extend(const char* n){
    strcat(code, "-");
    strcat(code, n);
}
ZipCode::~ZipCode(){
    free(code);
    //delete [] code;
}
ostream &operator << (ostream &out, const ZipCode& n){
    out << n.code;
    return out;
}
int main(int argc, const char * argv[]) {
    ZipCode zc1("ABC");
    zc1.extend(45);
    ZipCode zc2("123");
    zc2.extend("CD");
    
    ZipCode zc3 = zc2;
    zc3.extend("lol");
    std::cout << zc1 << std::endl << zc3 << std::endl;
    cin.get();
    return 0;
}
