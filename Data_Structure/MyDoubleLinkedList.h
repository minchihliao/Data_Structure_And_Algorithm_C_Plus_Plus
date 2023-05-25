#include <iostream>

class DoubleNode
{
private:
public:
    DoubleNode(int value);
    ~DoubleNode();
    int Data;
    DoubleNode *prev;
    DoubleNode *next;
};

class MyDoubleLinkedList
{
private:
    DoubleNode *head;

public:
    ~MyDoubleLinkedList();
    void Push(int value);
    void Insert(int targetPosition, int value);
    void Append(int value);
    void DeleteNote(int targetValue);
    void PrintAllNode();
};
