class MyStack
{
private:
    /* data */
    int top;
    int *arr;
    int length;
    bool isEmpty();
    bool isFull();

public:
    MyStack(int size);
    ~MyStack();
    void Push(int value);
    int Pop();
    int Peek();
};
