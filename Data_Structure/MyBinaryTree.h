#include <iostream>

class MyBinaryNode
{
private:
public:
    MyBinaryNode(int val);
    int data;
    MyBinaryNode *leftNode;
    MyBinaryNode *rightNode;
};

class MyBinaryTree
{
private:
public:
    MyBinaryTree(/* args */);
    ~MyBinaryTree();
    MyBinaryNode *tree;
    void PreOrder(MyBinaryNode *node);
    void InOrder(MyBinaryNode *node);
    void PostOrder(MyBinaryNode *node);
};
