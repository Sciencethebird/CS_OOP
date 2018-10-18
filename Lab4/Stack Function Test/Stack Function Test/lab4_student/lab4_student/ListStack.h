template <typename T>
struct Node {
    T data;
    Node *next;
};

template <class T>
class ListStack {
    public:
        ListStack() {
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
    private:
        Node<T> *top; // pointer to top element
        int size;     //  number of allocated nodes
};