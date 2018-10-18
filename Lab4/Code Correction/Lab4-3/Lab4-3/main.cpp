//
//  main.cpp
//  Lab4-3
//
//  Created by Sciencethebird on 2018/8/11.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include "ListStack.h"

struct offset{int a, b;};
offset move[4];

struct Items{
    Items(){}
    Items(int a,int b, int d):x(a), y(b), dir(d){}
    int x, y, dir;
};
enum directions{N, E, S, W};

void set_array(int *arr[], int m, int n, int set){
    for(int i = 0; i< m; i++)
        for(int j = 0; j< n; j++)
            arr[i][j] = set;
}
void setmove(int idx, int a, int b){
    move[idx].a = a;
    move[idx].b = b;
}

void print_path(ListStack<Items> stack, int* const maze[], int m, int p){
    int i, j;
    while(!stack.isEmpty()){
        i = (stack.Top()).x;
        j = (stack.Top()).y;
        maze[i][j] = -1;
        stack.pop();
    }
    for(int i=1; i<m+1; i++){
        for(int j=1; j<p+1; j++){
            if(maze[i][j] == -1) std::cout << "*";
            else if(i==m && j==p) std::cout << "*";
            else std::cout << maze[i][j];
        }
        std::cout << "\n";
    }
}
void Path(int m,int p, int* maze[]){

    int mark[m+2][p+2];
    
    for(int i=0; i<m+2 ; i++)
        for(int j=0; j<p+2; j++)
            mark[i][j] = 0;
    
    mark[1][1] = 1;
    ListStack<Items> stack;
    Items temp(1, 1, E);
    stack.push(temp);
    
    if(m==1 && p==1){
        print_path(stack, maze, m, p);
        return;
    }
    while(!stack.isEmpty()){
        temp = stack.Top();
        stack.pop();
        
        std::cout << "pop" << std::endl;
        int i = temp.x; int j = temp.y; int d = temp.dir;
        while(d<4){
            int g = i+move[d].a;
            int h = j+move[d].b;
            if(g==m && h==p && !maze[m][p]){
                std::cout << "Path Found!" << std::endl;
                temp.x = i;temp.y = j; temp.dir = d+1;
                stack.push(temp);
                print_path(stack, maze, m, p);
                return;
            }
            if((!maze[g][h])&&(!mark[g][h])){
                mark[g][h] = 1;
                temp.x = i;temp.y = j; temp.dir = d+1;
                std::cout << "push" << std::endl;
                stack.push(temp);
                i = g; j = h; d = N;
            }else d++;
        }
    }
    for(int i=1; i<m+1; i++){
        for(int j=1; j<p+1 ; j++)
            std::cout<< mark[i][j] << " ";
        std::cout <<"\n";
    }
    std::cout << "NOWAY" << std::endl;
}

int main(int argc, const char * argv[]) {
    
    ///set move[]
    setmove(N,-1, 0);
    setmove(E, 0, 1);
    setmove(S, 1, 0);
    setmove(W, 0,-1);
    
    /// cases count input
    int cnt;
    std::cin >> cnt;
    
    for(int q = 0; q< cnt; q++){
        
        /// array dimension
        int m, p;
        std::cin >> m >> p;
        
        /// 2D array initialization
        int *maze[m+2];
        for(int i = 0; i<m+2; i++) maze[i] = new int [p+2];
        
        /// set all array element to 1 (for walls)
        set_array(maze, m+2, p+2, 1);
        
        /// input actual maze fugure
        for(int i=1; i<m+1; i++)
            for(int j=1; j<p+1 ; j++)
                std::cin>> maze[i][j];
    
        Path(m, p, maze);
    }
    return 0;
}
