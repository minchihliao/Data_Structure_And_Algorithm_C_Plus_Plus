#include <stack>
#include <iostream>
#include <climits>
class Stack_And_Queue
{
private:
    /* data */
public:
};

class StackWithMin
{
private:
    std::stack<int> stack;
    std::stack<int> minstack;

public:
    void Push(int val);
    int Pop();
    int Min();
    void Display();
};
