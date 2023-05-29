#include "LinkedList.h"
LinkedListNode::LinkedListNode(int val)
{
    this->Data = val;
    this->Next = nullptr;
}

std::list<int> LinkedList::DeleteRepeatNode(std::list<int> head)
{
    std::unordered_set<int> hashSet;
    std::list<int> *newLinkedList = new std::list<int>();

    for (int n : head)
    {
        if (!hashSet.count(n))
        {
            hashSet.insert(n);
            newLinkedList->push_back(n);
        }
    }
    return *newLinkedList;
}

LinkedListNode *LinkedList::NthToLast(LinkedListNode *head, int k)
{
    LinkedListNode *first = head;
    LinkedListNode *second = head;
    for (int i = 0; i < k; i++)
    {
        if (first == nullptr)
            return nullptr;
        first = first->Next;
    }

    while (first != NULL)
    {
        first = first->Next;
        second = second->Next;
    }

    return second;
}
