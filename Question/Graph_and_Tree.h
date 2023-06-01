#include <vector>
#include <list>
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

class TreeNode
{
private:
    /* data */
public:
    TreeNode(int val);
    int data;
    TreeNode *Left;
    TreeNode *Right;
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
    std::vector<std::list<TreeNode *>> *DepthArray(TreeNode *tree);
};
