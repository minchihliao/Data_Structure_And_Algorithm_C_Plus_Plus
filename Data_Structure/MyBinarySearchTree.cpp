
#include "MyBinarySearchTree.h"

MyBinarySearchTreeNode::MyBinarySearchTreeNode(int val)
{
    this->data = val;
    this->leftNode = nullptr;
    this->rightNode = nullptr;
}

MyBinarySearchTree::~MyBinarySearchTree()
{
    delete root;
}

void MyBinarySearchTree::Insert(int val)
{
    MyBinarySearchTreeNode *newNode = new MyBinarySearchTreeNode(val);
    if (this->root == NULL)
    {
        this->root = newNode;
        return;
    }
    MyBinarySearchTreeNode *current = this->root;
    MyBinarySearchTreeNode *parent;
    while (current != NULL)
    {
        parent = current;
        if (current->data > val)
        {
            current = current->leftNode;
        }
        else
        {
            current = current->rightNode;
        }
    }
    /*while()迴圈結束後，parent是在leaf的位置*/
    if (parent->data > val)
    {
        parent->leftNode = newNode;
    }
    else
    {
        parent->rightNode = newNode;
    }
}
void MyBinarySearchTree::Delete(int val)
{
    MyBinarySearchTreeNode *current = this->root;
    MyBinarySearchTreeNode *parent;
    while (current != NULL && current->data != val)
    {
        parent = current;
        if (val < current->data)
        {
            current = current->leftNode;
        }
        else
        {
            current = current->rightNode;
        }
    }
    /*while()迴圈結束後，parent是在leaf的位置*/

    if (current != nullptr)
    {
        if (current->leftNode == nullptr)
        {
            if (parent == nullptr)
            {
                this->root = current->rightNode;
            }
            else if (parent->leftNode == current)
            {
                parent->leftNode = current->rightNode;
            }
            else
            {
                parent->rightNode = current->rightNode;
            }
            delete current;
        }
        else if (current->rightNode == nullptr)
        {
            if (parent == nullptr)
            {
                this->root = current->leftNode;
            }
            else if (parent->leftNode == current)
            {
                parent->leftNode = current->leftNode;
            }
            else
            {
                parent->rightNode = current->leftNode;
            }
        }
        else
        {
            MyBinarySearchTreeNode *rightMinNode = current->rightNode;
            MyBinarySearchTreeNode *rightParent = current;
            while (rightMinNode->leftNode != nullptr)
            {
                rightParent = rightMinNode;
                rightMinNode = rightMinNode->leftNode;
            }

            if (rightParent != current)
            {
                rightParent->leftNode = rightMinNode->rightNode;
            }
            else
            {
                rightParent->rightNode = rightMinNode->rightNode;
            }
            current->data = rightMinNode->data;
            delete rightMinNode;
        }
    }
}

bool MyBinarySearchTree::Search(int val)
{
    MyBinarySearchTreeNode *current = this->root;
    while (current != nullptr && current->data != val)
    {
        if (val < current->data)
        {
            current = current->leftNode;
        }
        else
        {
            current = current->rightNode;
        }
    }
    return current != nullptr && current->data == val;
}

void MyBinarySearchTree::PreOrder(MyBinarySearchTreeNode *node)
{
    if (node == nullptr)
        return;
    std::cout << node->data;
    PreOrder(node->leftNode);
    PreOrder(node->rightNode);
}
void MyBinarySearchTree::InOrder(MyBinarySearchTreeNode *node)
{
    if (node == nullptr)
        return;
    InOrder(node->leftNode);
    std::cout << node->data;
    InOrder(node->rightNode);
}
void MyBinarySearchTree::PostOrder(MyBinarySearchTreeNode *node)
{
    if (node == nullptr)
        return;
    PostOrder(node->leftNode);
    PostOrder(node->rightNode);
    std::cout << node->data;
}