#include "MyQueue.h"

MyQueue::MyQueue(int size)
{
    this->arr = new int[size];
    this->length = size;
    this->front = 0;
    this->rear = -1;
    this->size = 0;
}

MyQueue::~MyQueue()
{
    delete arr;
}

bool MyQueue::isEmpty()
{
    return size == 0;
}
bool MyQueue::isFull()
{
    return size == length;
}
void MyQueue::Enqueue(int val)
{
    if (isFull())
        return;

    this->rear = (this->rear + 1) % this->length;
    this->arr[this->rear] = val;
    size++;
}
int MyQueue::Dequeue()
{
    if (isEmpty())
        return -1;
    int result = this->arr[this->front];
    this->front = (this->front + 1) % length;
    size--;
    return result;
}
int MyQueue::Peek()
{
    if (isEmpty())
        return -1;

    return this->arr[this->front];
}