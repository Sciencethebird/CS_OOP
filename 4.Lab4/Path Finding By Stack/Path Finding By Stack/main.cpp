//
//  main.cpp
//  Path Finding By Stack
//
//  Created by Sciencethebird on 2018/8/18.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include "MyStack.h"
#include "map.h"

enum{N, E, S, W};

struct movement{
    movement():di(0), dj(0){}
    int di, dj;
};
movement offset[4];
void set_movement(){
    offset[N].di = -1;
    offset[E].dj =  1;
    offset[S].di =  1;
    offset[W].dj = -1;
}

struct next_move{
    next_move()
        :i(0), j(0), dir(0) {};
    next_move(int i, int j, int dir)
        :i(i), j(j), dir(dir) {}
    int i, j, dir;
};

void Print_path(Map map, Stack<next_move> &path){
  
    while(!path.isEmpty()){
        next_move top = path.Top();
        map[top.i][top.j] = -1;
        path.pop();
    }
    
    int m = map.get_rows();
    int n = map.get_cols();
    
    for(int i = 1; i< m-1; i++){
        for(int j = 1; j< n-1; j++){
            if (map[i][j] == -1) std::cout << "* ";
            else std::cout << map[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Path_optimize(Stack<next_move> &path){
    
    size_t length = path.getsize();
    int m = path.Top().i, n = path.Top().j;
    int deleted_element = 0;
    Map map(m+2, n+2, 0);
    
    for(int p = 0; p< length ; p++)
        map[path[p].i][path[p].j] = p;
    
    for(int p = 0; p< length - deleted_element; p++){
        
        int m = path[p].i, n = path[p].j;
        int d = N, max = map[m][n], point = 0;
        
        while(d < 4){
            int g = m + offset[d].di;
            int h = n + offset[d].dj;
            if(map[g][h]> max){
                max = map[g][h];
                point++;
            }
            d++;
        }
        if(point > 1){
            int temp_cnt = 0;
            for(int k = p+1; k< max - deleted_element; k++){
                path.erase(p+1);
                temp_cnt++;
                std::cout << map << std::endl;
                std::cout << "erase" << k << std::endl;
            }
            deleted_element += temp_cnt;
        }
    }
}

void Path(Map &maze){

    int curr_i, curr_j;
    
    int m = maze.get_rows(), n = maze.get_cols();
    if(maze[m-2][n-2]){
        std::cout << "No Path\n";
        return;
    }
    Stack<next_move> path;
    Map mark(m, n, 0);
    mark[1][1] = 1;
    
    next_move start(1, 1, E);
    path.push(start);
    
    while(!path.isEmpty()){
        int dir;
        next_move temp = path.Top();
        curr_i = temp.i; curr_j = temp.j; dir = temp.dir;
        path.pop();
        
        while(dir <4){
            int i = curr_i + offset[dir].di;
            int j = curr_j + offset[dir].dj;
            if(curr_i == m-2 && curr_j == n-2){
                std::cout << "Path Found!" << std::endl;
                next_move exit_point(curr_i, curr_j, dir++);
                path.push(exit_point);
                Path_optimize(path);
                Print_path(maze, path);
                return;
            }
            if(!maze[i][j] && !mark[i][j]){
                mark[i][j] = 1;
                next_move newly_visited(curr_i, curr_j, dir++);
                path.push(newly_visited);
                curr_i = i; curr_j = j;
                dir = N;
            }else dir ++;
        }
    }
    std::cout << "No Path\n";
}


int main(int argc, const char * argv[]) {
    set_movement();
    int cases;
    std::cout << "Enter Number of Cases: ";
    std::cin >> cases;
    for(int i = 0; i< cases; i++){
        int m, n;
        std::cout << "Enter Dimension m, n: ";
        std::cin >> m >> n;
        std::cout << "Enter Map:\n";
        
        Map maze(m+2, n+2, 1);
        
        for(int i = 1; i< m+1; i++)
            for(int j = 1; j< n+1; j++)
                std::cin >> maze[i][j];
        
        //std::cout << maze << std::endl;
        Path(maze);
                
    }
    return 0;
}
