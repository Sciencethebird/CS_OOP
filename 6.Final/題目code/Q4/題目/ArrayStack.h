template <class T>
class ArrayStack {
    public:
        ArrayStack() {
            top = -1;
            capacity = 1;
            stack = new T[capacity];
        }
        T Top() {
            T cpy = stack[top];
            return cpy;
        }
        void pop() {
            if(isEmpty()){
                return;
            }
            top--;
        }
        void push(T data) {
            if(isFull()){
                doubleCapacity();
                //std::cout<<"isfull";
            }
            stack[++top] = data;
        }
        bool isEmpty() {
            return top == -1;
        }
        int getSize() {
            return top + 1;
        }
        bool isFull(){
            return top == capacity - 1;
        }
    private:
        int top;                 // index of top element
        int capacity;            // allocated memory space of array
        T *stack;              // array representing stack
        void doubleCapacity(){
            capacity *= 2;             
            T *newStack = new T[capacity];
            for (int i = 0 ; i < capacity/2; i++) {   // copy element to newStack
                newStack[i] = stack[i];
                //std::cout<<"copy"<<i<<std::endl;
            }
            delete [] stack;              // release the memory of stack
            stack = newStack;             // redirect stack to newStack
        }   // double the capacity of stack
};