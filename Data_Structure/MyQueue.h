class MyQueue
{
private:
    int *arr;
    int length;
    int front;
    int rear;
    int size;
    bool isEmpty();
    bool isFull();

public:
    MyQueue(int size);
    ~MyQueue();
    void Enqueue(int val);
    int Dequeue();
    int Peek();
};
