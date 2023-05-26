#include "MyLinkedList.h"

Node::Node(int data)
{
    this->Data = data;
    this->next = nullptr;
}
Node::~Node()
{
    std::cout << "Release Node :" << this->Data << std::endl;
}

MyLinkedList::~MyLinkedList()
{
    delete head;
}
void MyLinkedList::Push(int value)
{
    Node *newNode = new Node(value);
    newNode->next = this->head;
    this->head = newNode;
}

void MyLinkedList::Insert(int targetPosition, int value)
{
    Node *temp = this->head;
    for (int i = 1; i < targetPosition - 1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(value);
    Node *NextNode = temp->next;
    temp->next = newNode;
    newNode->next = NextNode;
}

void MyLinkedList::Append(int value)
{
    Node *newNode = new Node(value);
    if (this->head == NULL)
        this->head = newNode;
    Node *temp = this->head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void MyLinkedList::DeleteNode(int value)
{
    Node *temp = this->head;
    Node *prev = nullptr;

    if (temp != NULL & temp->Data == value)
    {
        this->head = this->head->next;
        return;
    }

    while (temp != NULL && temp->Data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;

    prev->next = temp->next;
}

void MyLinkedList::PrintAllLinkedList()
{
    Node *temp = this->head;
    while (temp != NULL)
    {
        std::cout << temp->Data;
        temp = temp->next;
    }
    std::cout << std::endl;
}