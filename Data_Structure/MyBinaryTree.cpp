#include "MyBinaryTree.h"

MyBinaryNode::MyBinaryNode(int val)
{
    this->data = val;
    this->leftNode = nullptr;
    this->rightNode = nullptr;
}

MyBinaryTree::MyBinaryTree(/* args */)
{
}

MyBinaryTree::~MyBinaryTree()
{
    delete tree;
}

void MyBinaryTree::PreOrder(MyBinaryNode *node)
{
    if (node == nullptr)
        return;
    std::cout << node->data;
    PreOrder(node->leftNode);
    PreOrder(node->rightNode);
}
void MyBinaryTree::InOrder(MyBinaryNode *node)
{
    if (node == nullptr)
        return;
    InOrder(node->leftNode);
    std::cout << node->data;
    InOrder(node->rightNode);
}
void MyBinaryTree::PostOrder(MyBinaryNode *node)
{
    if (node == nullptr)
        return;
    PostOrder(node->leftNode);
    PostOrder(node->rightNode);
    std::cout << node->data;
}