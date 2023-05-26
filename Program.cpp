#include <iostream>
#include "Data_Structure\MyLinkedList.h"
#include "Data_Structure\MyDoubleLinkedList.h"
#include "Data_Structure\MyStack.h"
#include "Data_Structure\MyQueue.h"

void TestLinkedList();
void TestDoubleLinkedList();
void TestStack();
void TestQueue();
int main()
{
    TestQueue();
}

void TestLinkedList()
{
    MyLinkedList *linkedList = new MyLinkedList();
    linkedList->Push(2);
    linkedList->Push(3);
    linkedList->Push(4);
    linkedList->Push(5);
    linkedList->Insert(3, 9);
    linkedList->Append(10);
    linkedList->Append(11);
    linkedList->DeleteNode(5);
    linkedList->DeleteNode(2);
    linkedList->PrintAllLinkedList();
}
void TestDoubleLinkedList()
{
    MyDoubleLinkedList *doubleLinkedList = new MyDoubleLinkedList();
    doubleLinkedList->Push(2);
    doubleLinkedList->Push(3);
    doubleLinkedList->Push(4);
    doubleLinkedList->Push(5);
    doubleLinkedList->Insert(3, 9);
    doubleLinkedList->Append(10);
    doubleLinkedList->Append(11);
    doubleLinkedList->DeleteNote(5);
    doubleLinkedList->DeleteNote(2);
    doubleLinkedList->PrintAllNode();
}
void TestStack()
{
    MyStack *stack = new MyStack(3);
    stack->Push(1);
    stack->Push(2);
    stack->Push(3);

    int x = stack->Pop();
    int y = stack->Peek();
    std::cout << x << y << std::endl;
}
void TestQueue()
{
    MyQueue *queue = new MyQueue(3);
    queue->Enqueue(1);
    queue->Enqueue(2);
    queue->Enqueue(3);
    int x = queue->Dequeue();

    int y = queue->Peek();
    std::cout << x << y << queue->Dequeue() << std::endl;
}