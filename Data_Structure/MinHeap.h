#include <iostream>
#include <vector>
class MinHeap
{
private:
    std::vector<int> heap;
    void swap(int *x, int *y);
    int parent(int childIndex) { return (childIndex - 1) / 2; }
    int left(int parentIndex) { return 2 * parentIndex + 1; }
    int right(int parentIndex) { return 2 * parentIndex + 2; }
    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void Insert(int value);
    int ExtractMin();
    bool IsEmpty() { return heap.empty(); }
};
