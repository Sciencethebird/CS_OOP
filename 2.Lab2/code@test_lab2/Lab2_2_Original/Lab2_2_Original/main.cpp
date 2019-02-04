//
//  main.cpp
//  Lab2_2_Original
//
//  Created by Sciencethebird on 2018/7/19.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
using namespace std;

void print(int a[], int size){
    for(int i = 0; i < size; i++)
        cout << a[i];
    cout << endl;
}
int main()
{
    long a;
    int i = 0, data[50], ans[50]; /// i is array size
    int cnt = 0, cntz = 1;
    
    cin >>a;
    while(a!= 0)
    {
        /// turn decimal to binary in reverse order
        while( a > 0 ){
            data[i] = a % 2;
            a /= 2;
            i++;
        }
        /// reverse the order
        for(int j = i - 1  ;  j>=0 ; j--)
            ans[i - j - 1] = data[j];
        /// count for adjecent one
        for(int j = 0  ;  j < i-1 ; j++){
            if(ans[j] == 1 && ans[j+1] == 1){
                //cout << "index = " << j << endl;
                cnt++;
            }
        }
        /// count for tailing zero
        for(int j = i - 1  ;  j>=0 ; j--)
        {
            if(ans[i-1] != 0)
                cntz = 0;
            if(ans[j] == 0 && ans[j-1] == 0)
                cntz++;
            else
                break;
        }
        //print(ans, i);
        cout << cnt << " " << cntz << endl;
        cnt = 0;
        cntz = 1;
        i = 0;
        cin >> a;
    }
    return 0;
}
