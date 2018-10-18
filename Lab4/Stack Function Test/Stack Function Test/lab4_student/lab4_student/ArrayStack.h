template <class T>
class ArrayStack {
    public:
        ArrayStack() {
            capacity = 1; //don't change this line
			/* your code here */
        }
        T Top() {
            /* your code here */
        }
        void pop() {
            /* your code here */
        }
        void push(T data) {
            /* your code here */
        }
        bool isEmpty() {
            /* your code here */
        }
        int getSize() {
            /* your code here */
        }
        bool isFull(){
            /* your code here */
        }
    private:
        int top;               // index of top element
        int capacity;          // allocated memory space of array
        T *stack;              // array
        void doubleCapacity(){
            /* your code here */
        }
};