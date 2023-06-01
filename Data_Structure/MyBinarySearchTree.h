#include <iostream>

class MyBinarySearchTreeNode
{
private:
public:
    MyBinarySearchTreeNode(int val);
    int data;
    MyBinarySearchTreeNode *leftNode;
    MyBinarySearchTreeNode *rightNode;
};

class MyBinarySearchTree
{
private:
public:
    ~MyBinarySearchTree();
    MyBinarySearchTreeNode *root;
    void Insert(int val);
    void Delete(int val);
    bool Search(int val);
    void PreOrder(MyBinarySearchTreeNode *node);
    void InOrder(MyBinarySearchTreeNode *node);
    void PostOrder(MyBinarySearchTreeNode *node);
};
