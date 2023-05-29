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
