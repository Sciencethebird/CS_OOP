//
//  main.cpp
//  Lab2-2
//
//  Created by Sciencethebird on 2018/7/19.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    long in;
    while(cin >> in){
        
        if(in == 0)
            break;
        
        string binary = bitset<32>(in).to_string();
        
        /// count for adjecent ones
        int adj = 0;
        for(int i = 0;i < 32; i++ ){
            if(binary[i] == '1'){
                if(binary[i+1] == '1')
                    adj++;
            }
        }
        /// count for tailing zero
        int tail = 0;
        for(int i = 31;i >= 0; i-- ){
            if(binary[i] != '0')
                break;
            else
                tail++;
        }
        cout << adj << " " << tail << endl;
    }
    return 0;
}
