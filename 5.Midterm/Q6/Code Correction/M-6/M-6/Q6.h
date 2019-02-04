//
//  Q6.h
//  M-6
//
//  Created by Sciencethebird on 2018/8/7.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#ifndef Q6_h
#define Q6_h
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class myVector:  public vector<int>{
private:
public:
    int sum();
    void concat(myVector &);
    void sort();
    void show();
    int size();
    
};

int myVector::sum(){
    int sum = 0;
    for(int i = 0; i< vector::size(); i++){
        sum += (*this)[i];   /// the arrow pointer will not work here
    }
    return sum;
}

void myVector::concat(myVector &other){
    for(int i = 0; i< other.vector::size(); i++)
        this->push_back(other[i]);
}

void myVector::sort(){
    std::__1::sort(this->begin(), this->end());
}

void myVector::show(){
    for(int i = 0; i< this->vector<int>::size(); i++)
        std::cout << (*this)[i] << " ";
    std::cout << endl;
}

int myVector::size(){
    return 0;
}
#endif /* Q6_h */
