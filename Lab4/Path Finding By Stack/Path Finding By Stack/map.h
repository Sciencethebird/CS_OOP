//
//  map.h
//  Path Finding By Stack
//
//  Created by Sciencethebird on 2018/8/19.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#ifndef map_h
#define map_h
#include <iostream>
#include <iomanip>
class Map{
public:
    
    Map():arr(nullptr), rows(0), cols(0){}
    
    Map(int m, int n){
        rows = m; cols = n;
        arr = new int*[m];
        for(int i = 0; i< n; i++)
            arr[i] = new int [n];
    }
    
    Map(int m, int n, int set){
        rows = m; cols = n;
        arr = new int*[m];
        for(int i = 0; i< m; i++)
            arr[i] = new int [n];
        for(int i = 0; i< m; i++)
            for(int j = 0; j< n; j++)
                arr[i][j] = set;
    }
    
    Map(const Map& old){
        rows = old.rows;
        cols = old.cols;
        arr = new int*[rows];
        for(int i = 0; i< rows; i++)
            arr[i] = new int [cols];
        for(int i = 0; i< rows; i++)
            for(int j = 0; j< cols; j++)
                arr[i][j] = old.arr[i][j];
    }
    
    ~Map(){
        for(int i = 0; i< rows; i++)
            delete [] arr[i];
        delete [] arr;
    }
    
    int get_rows() const{
        return rows;
    }
    
    int get_cols() const{
        return cols;
    }
    
    int max_width() const{
        int max = arr[0][0];
        for(int i = 0; i< rows; i++)
            for(int j = 0; j< cols; j++)
                if(arr[i][j] > max)
                    max =  arr[i][j];
        int width = 0;
        while(max>0){
            max/=10;
            width++;
        }
        return width;
    }
    
    int* operator[](int idx)const{
        return arr[idx];
    }
    friend std::ostream &operator << (std::ostream &out, const Map &n);

    
private:
    int **arr;
    int rows, cols;
};

std::ostream &operator << (std::ostream &out, const Map &n){
    int width = n.max_width() + 1;
    for(int i = 0; i< n.rows; i++){
        for(int j = 0; j < n.cols; j++)
            out << std::left << std::setw(width)<< n[i][j];
        out << "\n";
    }
    return out;
}
#endif /* map_h */
