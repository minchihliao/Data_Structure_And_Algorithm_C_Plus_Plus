#include <unordered_set>
#include <list>
#include <iostream>
#include <typeinfo>
class LinkedListNode
{
private:
public:
    LinkedListNode(int val);
    int Data;
    LinkedListNode *Next;
};

class LinkedList
{
private:
    /* data */
public:
    std::list<int> DeleteRepeatNode(std::list<int> head);
    LinkedListNode *NthToLast(LinkedListNode *head, int k);
};
