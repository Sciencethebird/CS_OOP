//
//  MyStack.h
//  Path Finding By Stack
//
//  Created by Sciencethebird on 2018/8/18.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#ifndef MyStack_h
#define MyStack_h
#include <iostream>

template<class T>
struct Node{
    Node* next;
    T data;
};

template <class T>
class Stack{
public:
    Stack():size(0), top(nullptr){}
    
    Stack(const Stack &old){
        size = 0; top = nullptr;
        size_t sz = old.getsize();
        for(int i = 0; i< sz; i++){
            this->push(old[i]);
        }
    }
    T Top(){
        return top->data;
    }
    void push(const T &n){
        Node<T> *temp = new Node<T>;
        temp->data = n;
        temp->next = top;
        top = temp;
        size++;
    }
    void pop(){
        if(!isEmpty()){
            Node<T> *temp = top;
            top = top->next;
            delete temp;
            size--;
        }else{
            std::cout << "Nothing to Pop!" << std::endl;
            top = nullptr;
        }
    }
    void erase(int idx){
        if(idx == size -1){
            this->pop();
        }else{
            Node<T> *rptr = top, *lptr = top;
            for(int i = 0; i< size - idx - 2; i++)
                rptr = rptr->next;
            for(int i = 0; i< size - idx; i++)
                lptr = lptr->next;
            delete rptr->next;
            rptr->next = lptr;
            size--;
        }
    }
    bool isEmpty() const{
        if(top == nullptr) return true;
        else return false;
    }
    size_t getsize() const{
        return size;
    }
    T operator[](int idx) const{
        Node<T> *ptr = top;
        for(int i = 0; i< size - idx - 1; i++)
            ptr = ptr->next;
        return ptr->data;
    }
    template<class U>
    friend std::ostream& operator<<(std::ostream& out, const Stack<U> &n);
private:
    Node<T>* top;
    size_t size;
};
template <class T>
std::ostream& operator<<(std::ostream& out, const Stack<T> &n){
    size_t sz = n.getsize();
    for(int i = 0; i< sz; i++)
        out << n[i] << " ";
    std::cout << std::endl;
    return out;
}
#endif /* MyStack_h */
