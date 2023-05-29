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

LinkedListNode *LinkedList::DeleteMidNode(LinkedListNode *targetNode)
{
    if (targetNode == NULL)
        return nullptr;
    LinkedListNode *next = targetNode->Next;
    targetNode->Data = next->Data;
    targetNode->Next = next->Next;
    return targetNode;
}
LinkedListNode *LinkedList::ReverseLinkedList(LinkedListNode *head)
{
    LinkedListNode *newHead = nullptr;
    while (head != NULL)
    {
        LinkedListNode *n = new LinkedListNode(head->Data);
        n->Next = newHead;
        newHead = n;
        head = head->Next;
    }
    return newHead;
}
bool LinkedList::IsPalindrom(LinkedListNode *head)
{
    LinkedListNode *reverseLinkedList = ReverseLinkedList(head);
    while (head != NULL && reverseLinkedList != NULL)
    {
        if (head->Data != reverseLinkedList->Data)
        {
            return false;
        }
        head = head->Next;
        reverseLinkedList = reverseLinkedList->Next;
    }
    return head == nullptr && reverseLinkedList == nullptr;
}
