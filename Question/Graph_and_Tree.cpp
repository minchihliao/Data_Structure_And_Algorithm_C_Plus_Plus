#include "Graph_and_Tree.h"

GraphNode::GraphNode(int val)
{
    this->data = val;
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
                    if (i = end)
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