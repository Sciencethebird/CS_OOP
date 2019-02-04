//
//  main.cpp
//  Lab2-3
//
//  Created by Sciencethebird on 2018/7/19.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <vector>
//#include <
using namespace std;

ostream& operator << (ostream &out , vector<int> &in){
    int sz = (int)in.size();
    for(int i = 0; i< sz; i++)
        out << in[i] << ' ';
    return out;
}
int main() {
    
    int t;
    cin >> t;
    for(int s = 0; s < t; s++){
        int h, w, e;
        cin >> h >> w;
        vector< vector<int> > map;
        vector<int> temp;
        for(int j = 0 ; j < h; j++){
            for(int i = 0 ; i < w; i++){
                cin >> e;
                temp.push_back(e);
            }
            //cout << temp << endl;
            map.push_back(temp);
            temp.clear();
        }
        
        ///finding answer
        int h_cnt = 0, v_cnt = 0;
        ///horizontal
        for(int i = 0; i< h; i++){
            for(int j = 0; j < w; j++){
                if(map[i][j] == 1){
                    h_cnt +=2;
                    while(j <= w-2){
                        if(map[i][j+1] == 1){
                            j++;
                        }else{
                            break;
                        }
                    }
                }
            }
        }
        
        for(int j = 0; j< w; j++){
            for(int i = 0; i < h ; i++){
                if(map[i][j] == 1){
                    v_cnt += 2;
                    while(i <= h-2){
                        if(map[i+1][j] == 1){
                            i++;
                        }else{
                            break;
                        }
                        
                    }
                }
            }
        }
        cout << h_cnt+v_cnt << endl;
        map.clear();
    }
    return 0;
}

