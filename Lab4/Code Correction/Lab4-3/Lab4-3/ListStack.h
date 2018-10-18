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
class ListStack{
public:
    ListStack() { size = 0;}
    T Top() {
        return top->data;
    }
    /// copy constructor is needed if you want ListStack supports call-by-value functions!!!
    ListStack(const ListStack<T> &old){
        size = 0;
        for(int i = 0; i< old.size; i++)
            this->push(old[i]);
    }
    void pop() {
        if(top == nullptr){
            std::cout << "Nothing to Delete\n";
            return;
        }
        Node<T> *temp;
        temp = top->next;
        delete top;
        top = temp;
        size--;
    }
    void push(T data) {
        if(size == 0){
            top = new Node<T>;
            top->next = nullptr;
            top->data = data;
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
        if(!size) return true;
        else return false;
    }
    int getSize() {
        return size;
    }
    T operator[] (int idx) const{
    
            Node<T> *ptr = top;
            for(int i = 0; i< size - idx - 1; i++)
                ptr = ptr->next;
            return ptr->data;
    }
    template<typename U>
    friend std::ostream &operator << (std::ostream &out, const ListStack<U> &stack);
private:
    Node<T> *top; // pointer to top element
    int size;     //  number of allocated nodes
};

template <typename U>
std::ostream &operator << (std::ostream &out, const ListStack<U> stack){
                        
}

#endif /* Header_h */
