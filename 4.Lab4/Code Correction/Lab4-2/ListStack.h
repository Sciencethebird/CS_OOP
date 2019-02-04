//
//  Header.h
//  Lab4-2
//
//  Created by Sciencethebird on 2018/8/10.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#ifndef Header_h
#define Header_h
template <typename T>
struct Node {
    T data;
    Node *next;
};

template <class T>
class ListStack {
public:
    ListStack() {
        size = 0;
    }
    T Top() {
        return top->data;
    }
    void pop() {
        Node<T> *temp;
        temp = top->next;
        delete top;
        top = temp;
        size--;
    }
    void push(T data) {
        if(size == 0){
            top = new Node<T>;
            top->data = data;
            top->next = nullptr;
            size ++;
        }else{
            Node<T> *temp = new Node<T>;
            temp->next = top;
            temp->data = data;
            top = temp;
            size ++;
        }
    }
    bool isEmpty() const {
        if(size == 0) return true;
        else return false;
    }
    int getSize() {
        return size;
    }
    T operator[] (int idx){
        if(idx+1 > size){
            std::cout << "Nothing ";
            return -1;
        }else{
            Node<T> *ptr = top;
            for(int i = 0; i< size - idx - 1; i++)
                ptr = ptr->next;
            return ptr->data;
        }
    }
private:
    Node<T> *top; // pointer to top element
    int size;     //  number of allocated nodes
};


#endif /* Header_h */
