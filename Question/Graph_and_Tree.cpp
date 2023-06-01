#include "Graph_and_Tree.h"

GraphNode::GraphNode(int val)
{
    this->data = val;
}
TreeNode::TreeNode(int val)
{
    this->data = val;
    this->Left = nullptr;
    this->Right = nullptr;
}

bool Graph_and_Tree::IsPath(Graph *node, GraphNode *start, GraphNode *end)
{
    if (start == end)
        return true;
    std::queue<GraphNode *> queue;
    for (auto i : node->Nodes)
    {
        i->state = Unvisted;
    }
    start->state = visting;
    queue.push(start);
    GraphNode *current;
    while (!queue.empty())
    {
        current = queue.front();
        queue.pop();
        if (current != nullptr)
        {
            for (auto i : current->children)
            {
                if (i->state == Unvisted)
                {
                    if (i == end)
                    {
                        return true;
                    }
                    else
                    {
                        i->state = visting;
                        queue.push(i);
                    }
                }
            }
            current->state = visted;
        }
    }
    return false;
}

std::vector<std::list<TreeNode *>> *Graph_and_Tree::DepthArray(TreeNode *root)
{
    std::vector<std::list<TreeNode *>> *result = new std::vector<std::list<TreeNode *>>();
    std::list<TreeNode *> *current = new std::list<TreeNode *>();
    if (root != nullptr)
    {
        current->push_back(root);
    }

    while (current->size() > 0)
    {
        result->push_back(*current);
        std::list<TreeNode *> *parents = current;
        current = new std::list<TreeNode *>();
        for (auto parent : *parents)
        {
            if (parent->Left != nullptr)
            {
                current->push_back(parent->Left);
            }
            if (parent->Right != nullptr)
            {
                current->push_back(parent->Right);
            }
        }
    }

    return result;
}