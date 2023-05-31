#include "Stack_And_Queue.h"

int StackWithMin::Min()
{
    if (this->minstack.empty())
        return INT_MAX;
    return this->minstack.top();
}
void StackWithMin::Push(int val)
{
    if (val <= Min())
    {
        this->minstack.push(val);
    }
    this->stack.push(val);
}
int StackWithMin::Pop()
{
    int val = this->stack.top();
    this->stack.pop();
    if (val == Min())
    {
        this->minstack.pop();
    }
    return val;
}
void StackWithMin::Display()
{
    std::stack<int> tem = this->stack;

    while (!tem.empty())
    {
        std::cout << tem.top() << std::endl;
        tem.pop();
    }
}

bool QueueUsingTwoStacks::isSecondEmpty()
{
    return this->second.empty();
}
void QueueUsingTwoStacks::PushFirsttoSecond()
{
    while (!this->first.empty())
    {
        int val = this->first.top();

        this->second.push(val);
        this->first.pop();
    }
}

void QueueUsingTwoStacks::Push(int val)
{
    this->first.push(val);
}
int QueueUsingTwoStacks::Pop()
{
    if (isSecondEmpty())
    {
        PushFirsttoSecond();
    }
    int val = this->second.top();
    this->second.pop();
    return val;
}
int QueueUsingTwoStacks::Peek()
{
    if (isSecondEmpty())
    {
        PushFirsttoSecond();
    }
    return this->second.top();
}