#include <iostream>

class MyBinaryTreeNode
{
private:
public:
    MyBinaryTreeNode(int val);
    int data;
    MyBinaryTreeNode *leftNode;
    MyBinaryTreeNode *rightNode;
};

class MyBinaryTree
{
private:
public:
    MyBinaryTree(/* args */);
    ~MyBinaryTree();
    MyBinaryTreeNode *root;
    void Insert(int val);
    void Delete(int val);
    void PreOrder(MyBinaryTreeNode *node);
    void InOrder(MyBinaryTreeNode *node);
    void PostOrder(MyBinaryTreeNode *node);
};
