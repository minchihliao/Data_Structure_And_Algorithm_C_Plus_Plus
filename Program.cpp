#include <iostream>
#include "Data_Structure\MyLinkedList.h"
#include "Data_Structure\MyDoubleLinkedList.h"
#include "Data_Structure\MyStack.h"
#include "Data_Structure\MyQueue.h"
#include "Data_Structure\MyBinaryTree.h"
#include "Question\Array_And_String.h"
#include "Question\LinkedList.h"
#include <list>

void TestLinkedList();
void TestDoubleLinkedList();
void TestStack();
void TestQueue();
void TestBinaryTree();
void TestIsUniqueChar();
void TestPermmutation();
void TestReplaceSpace();
void TestCompress_charArray();
void TestLinkedListDeleteRepeatNode();

int main()
{
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
void TestBinaryTree()
{
    MyBinaryTree *binaryTree = new MyBinaryTree();
    binaryTree->tree = new MyBinaryNode(1);
    binaryTree->tree->leftNode = new MyBinaryNode(2);
    binaryTree->tree->rightNode = new MyBinaryNode(3);
    binaryTree->tree->leftNode->leftNode = new MyBinaryNode(4);
    binaryTree->tree->leftNode->rightNode = new MyBinaryNode(5);

    std::cout << "Preorder Traversal of binary tree is " << std::endl;
    binaryTree->PreOrder(binaryTree->tree);
    std::cout << std::endl
              << "InOrder Traversal of binary tree is " << std::endl;
    binaryTree->InOrder(binaryTree->tree);
    std::cout << std::endl
              << "PostOrder Traversal of binary tree is " << std::endl;
    binaryTree->PostOrder(binaryTree->tree);
}
void TestIsUniqueChar()
{
    Array_And_String *problem = new Array_And_String();
    char charArray[] = {"aasdfgh"};
    bool result1 = problem->isUniqueChar_CharArray(charArray);
    std::string str("asdfgh");
    bool result2 = problem->isUniqueChar_String(str);
    std::cout << result1 << result2 << std::endl;
}
void TestPermutation()
{
    Array_And_String *problem = new Array_And_String();
    std::string source("abcc");
    std::string compare("bcac");
    bool result = problem->IsPermmutation(source, compare);
    std::cout << result << std::endl;
}
void TestReplaceSpace()
{
    Array_And_String *problem = new Array_And_String();
    char str[14] = "Mr John Smith";
    char charArray[] = {"aasdfgh"};
    std::cout << sizeof(charArray) << std::endl;
    problem->ReplaceSpace(str, 13, sizeof(str));
}
void TestCompress_charArray()
{
    Array_And_String *problem = new Array_And_String();
    char str[] = "AAAABCDDD";
    char *result = problem->Compress_charArray(str, sizeof(str) - 1);
    for (int i = 0; i < sizeof(result); i++)
    {
        std::cout << result[i];
    }
}
void TestLinkedListDeleteRepeatNode()
{
    LinkedList *problem = new LinkedList();
    std::list<int> data = {1, 2, 3, 4, 5, 5, 6, 3, 4};
    std::list<int> result = problem->DeleteRepeatNode(data);
    for (int n : result)
    {
        std::cout << n;
    }
}
