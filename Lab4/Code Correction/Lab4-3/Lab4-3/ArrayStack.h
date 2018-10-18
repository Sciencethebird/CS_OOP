//
//  ArrayStack.h
//  Lab4-1
//
//  Created by Sciencethebird on 2018/8/7.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#ifndef ArrayStack_h
#define ArrayStack_h

template <class T>
class ArrayStack {
public:
    ArrayStack() {
        capacity = 1; //don't change this line
        stack = new T [capacity] ;
        top = -1;
    }
    T Top() {
        return stack[top];
    }
    void pop() {
        top--;
    }
    void push(T data) {
        if(isFull()) doubleCapacity();
        stack[++top] = data;
    }
    bool isEmpty() {
        if (top == -1) return true;
        else return false;
    }
    int getSize() {
        return top+1;
    }
    bool isFull(){
    
        if (top+1 == capacity) return true;
        else return false;
    }
private:
    int top;               // index of top element
    int capacity;          // allocated memory space of array
    T *stack;              // array
    void doubleCapacity(){
        
        T *temp = new T [capacity*2];
        for(int i = 0; i<= top ; i++)
            temp[i] = stack[i];
        delete [] stack;
        stack = temp;
    }
};


#endif /* ArrayStack_h */
