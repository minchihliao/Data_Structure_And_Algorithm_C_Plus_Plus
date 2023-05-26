#include "MyDoubleLinkedList.h"

DoubleNode::DoubleNode(int value)
{
    this->Data = value;
    this->prev = nullptr;
    this->next = nullptr;
}

DoubleNode::~DoubleNode()
{
}

MyDoubleLinkedList::~MyDoubleLinkedList()
{
    delete head;
}

void MyDoubleLinkedList::Push(int value)
{
    DoubleNode *newNode = new DoubleNode(value);
    newNode->next = this->head;
    if (this->head != NULL)
        this->head->prev = newNode;
    this->head = newNode;
}

void MyDoubleLinkedList::Insert(int targetPosition, int value)
{
    DoubleNode *temp = this->head;
    DoubleNode *newNode = new DoubleNode(value);
    for (int i = 1; i < targetPosition; i++)
    {
        temp = temp->next;
    }
    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev->next = newNode;
    temp->prev = newNode;
}
void MyDoubleLinkedList::Append(int value)
{
    DoubleNode *temp = this->head;
    DoubleNode *newNode = new DoubleNode(value);
    if (this->head == NULL)
    {
        this->head = newNode;
        return;
    }

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void MyDoubleLinkedList::DeleteNote(int targetValue)
{
    DoubleNode *temp = this->head;

    if (temp != NULL && temp->Data == targetValue)
    {
        this->head = temp->next;
        temp->next->prev = nullptr;
        delete temp;
        return;
    }

    while (temp != NULL && temp->Data != targetValue)
    {
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}
void MyDoubleLinkedList::PrintAllNode()
{
    DoubleNode *temp = this->head;
    while (temp != NULL)
    {
        std::cout << temp->Data;
        temp = temp->next;
    }
    std::cout << std::endl;
}