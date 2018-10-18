//
//  main.cpp
//  Lab1
//
//  Created by Sciencethebird on 2018/7/17.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
    
    string buffer;
    cout << "Enter Number: ";
    while(getline(cin, buffer)){
        
        long long *number = new long long [100];
        int i = 0;
        while(1){
            try{
                stoi(buffer);
            }catch(const std::invalid_argument& ia){
                //cout << ia.what() << endl;
                delete [] number;
                break;
            }
            number[i] = stoi(buffer);
            //int digit[100];
            long long sum = 0, product = 1;
            while(number[i] > 0){
                long long temp = number[i]%10;
                number[i] /= 10;
                sum += temp;
                product *= temp;
            }
            //cout << "sum = " << sum << " pdt = " << product << endl;
            if(sum % 5 == 0){
                cout << "computer";
                if(product % 9 == 0)
                    cout << " science" << endl;
                else
                    cout << endl;
            }else{
                if(product % 9 == 0)
                    cout << "science"<< endl;
                else
                    cout << "bug" << endl;
            }
            size_t idx = buffer.find(' ');
            buffer.erase(buffer.cbegin(), buffer.cbegin()+ idx + 1);
            if(idx == string::npos){
                delete [] number;
                break;
            }
            i++;
        }
        cout << "Enter Number: ";
    }
}
