
template <class T>
class ArrayStack
{
public:
    ArrayStack()
    {
        capacity = 1; //don't change this line
        stack = new T[capacity];
        top = -1;
    }
    T Top()
    {
        return stack[top];
    }
    void pop()
    {
        if (isEmpty())
        {

        }
        top--;
    }

    void push(T data)
    {
        if (isFull())
        {
            top++;
            stack[top] = data;
        }
        else
        {
            top++;
            stack[top] = data;
        }

    }
    bool isEmpty()
    {
        if (top==-1)
            return true;
        else
            return false;
    }
    int getSize()
    {
        return top + 1;
    }
    bool isFull()
    {
        if (top==capacity-1)
        {
            doubleCapacity();
            return true;
        }
        else
            return false;
    }
private:
    int top;               // index of top element
    int capacity;          // allocated memory space of array
    T *stack;              // array
    void doubleCapacity()
    {
        capacity *= 2;
        //std::cout << "new doubled capacity = " << capacity << std::endl;
        T* newstack = new T [capacity];
        for(int i = 0; i<= top ; i++)
        {
            newstack[i] = stack[i];
        }
        delete[] stack;
        stack = newstack;
    }
};
