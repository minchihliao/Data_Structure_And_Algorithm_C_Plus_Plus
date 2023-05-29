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