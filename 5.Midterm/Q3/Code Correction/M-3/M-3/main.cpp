//
//  main.cpp
//  M-3
//
//  Created by Sciencethebird on 2018/8/2.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

template<class M>
class Matrix
{
private:
    int row;
    int column;
    M element[2][2];
public:
    /// constructors
    Matrix(){
        for(int i = 0; i< 2; i++)
            for(int j = 0; j< 2; j++)
                element[i][j] = 0;
    }
    Matrix(int a,int b){}
    
    /// set value funciton
    void set(int i,int j , M n){
        element[i][j] = n;
    }
    
    Matrix operator*(Matrix &m){
        Matrix ans;
        for(int i = 0; i< 2; i++){
            for(int j = 0; j< 2; j++){
                M sum = 0;
                for(int k = 0; k<2; k++){
                    sum += element[i][k]*m.element[k][j];
                }
                ans.element[i][j] = sum;
            }
        }
        return ans;
    }
    
    void operator ^(int p){
        Matrix temp(*this);
        
        cout << &temp <<" " << this << endl;
        for(int i = 1; i<p; i++){
            *this = *this * temp;
        }
    }
    
    M operator ()(){
        return element[0][0]*element[1][1] - element[0][1]*element[1][0];
    }
    
    template<typename U>
    friend ostream & operator<<(ostream &out,const Matrix<U> &m);
};

template<typename U>
ostream& operator<<(ostream&out, const Matrix<U> &m){
    for(int i = 0; i<2; i++)
        for(int j = 0; j< 2; j++)
            out << m.element[i][j]<< " ";
    return out;
}

template<typename U>
void answer(){
    
    Matrix<U> m;
    for(int i = 0; i< 2; i++)
        for(int j = 0; j < 2; j++){
            U buffer;
            cin >> buffer;
            m.set(i, j, buffer);
        }
    
    int power;
    cin >> power;
    
    Matrix<U> temp(m);
    cout << temp() << endl;
    
    m^power;
    cout << m << endl;
}

int main(){
    int condition;
    cin >> condition;
    while(condition != 0){
        
        if(condition == 1)
            answer<int>();
        if(condition == 2)
            answer<float>();
        
        cin >> condition;
    }
    return 0;
}


