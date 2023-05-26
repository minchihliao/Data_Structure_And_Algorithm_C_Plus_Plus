#include "MyStack.h"

MyStack::MyStack(int size)
{
    this->arr = new int[size];
    this->length = size;
    this->top = -1;
}

MyStack::~MyStack()
{
    delete arr;
}

bool MyStack::isEmpty()
{
    return this->top == -1;
}
bool MyStack::isFull()
{
    return this->top >= this->length;
}

void MyStack::Push(int value)
{
    if (isFull())
    {
        return;
    }
    this->arr[++this->top] = value;
    // == *(this->arr + (++this->top)) = value;
}
int MyStack::Pop()
{
    if (isEmpty())
    {
        return -1;
    }
    return this->arr[this->top--];
    // *(this->arr+(this->top--))
}
int MyStack::Peek()
{
    if (isEmpty())
    {
        return -1;
    }
    return arr[top];
}