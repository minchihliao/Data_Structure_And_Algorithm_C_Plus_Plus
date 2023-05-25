#ifndef _MyLinkedList_
#define _MyLinkedList_
#include <string>
#include <iostream>
class Node
{
private:
    /* data */
public:
    Node(int data);
    ~Node();
    int Data;
    Node *next;
};

class MyLinkedList
{
private:
    Node *head;

public:
    ~MyLinkedList();
    void Push(int value);
    void Insert(int index, int value);
    void Append(int value);
    void DeleteNode(int index);
    void PrintAllLinkedList();
};

// Push
// Insert
// Append
// DeletNode
// PrintLinkedList

#endif