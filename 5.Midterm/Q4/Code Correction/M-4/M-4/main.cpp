//
//  main.cpp
//  M-4
//
//  Created by Sciencethebird on 2018/8/6.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <string>
#include <exception>
using namespace std;

struct MyException: public exception{
    const char * what() const throw(){
        return "No Such Fruit!";
    }
};

class guest{
public:
    guest(string &);
    int total();
    void set_num(string &, int);
    string get_name();
private:
    string name;
    int apple, banana, orange, watermelon, lemon;
};

guest::guest(string &n){
    name = n;
    apple = 0;
    banana = 0;
    orange = 0;
    watermelon = 0;
    lemon = 0;
}

string guest::get_name(){
    return name;
}

void guest::set_num(string &fruit, int num){
    if(fruit =="apple")
        apple = num;
    else if(fruit =="banana")
        banana = num;
    else if(fruit =="orange")
        orange = num;
    else if(fruit =="watermelon")
        watermelon = num;
    else if(fruit =="lemon")
        lemon = num;
    else{
        throw MyException();
    }
}

int guest::total(){
    return apple*10+
           banana*5+
           orange*20+
           watermelon*50+
           lemon*15;
}

int main(int argc, const char * argv[]) {
    while(1){
        int cnt = 0;
        string name;
        cin >> name;
        if(name == "end")
            break;
        
        guest A(name);
        cin >> cnt;
        for(int i = 0; i<cnt; i++){
            string fruit;
            int amount;
            cin >> fruit >> amount;
            try{
                A.set_num(fruit, amount);
            }catch(MyException &n){
                cout << n.what() << endl;
                i--;
                continue;
            }
            A.set_num(fruit, amount);
        }
        cout << A.get_name() << " " << A.total() << endl;
    }
    return 0;
}
