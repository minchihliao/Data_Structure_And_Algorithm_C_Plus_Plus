#include <iostream>
#include "Data_Structure\Fun1.h"
#include "Data_Structure\MyLinkedList.h"

int main()
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