#include <vector>
#include <queue>
enum State
{
    Unvisted,
    visted,
    visting
};

class GraphNode
{
private:
    /* data */
public:
    GraphNode(int val);
    State state;
    int data;
    std::vector<GraphNode *> children;
};

class Graph
{
private:
    /* data */
public:
    std::vector<GraphNode *> Nodes;
};

class Graph_and_Tree
{
private:
    /* data */
public:
    bool IsPath(Graph *node, GraphNode *start, GraphNode *end);
};
