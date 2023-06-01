#include "MinHeap.h"

void MinHeap::heapifyUp(int index)
{
    int parentIndex = parent(index);
    while (index > 0 && this->heap[index] < this->heap[parentIndex])
    {
        std::swap(this->heap[index], this->heap[parentIndex]);
        index = parentIndex;
        parentIndex = (index - 1) / 2;
    }
}
void MinHeap::heapifyDown(int index)
{
    int leftIndex = left(index);
    int rightIndex = right(index);
    int smallestIndex = index;

    if (leftIndex < this->heap.size() && this->heap[leftIndex] < this->heap[smallestIndex])
    {
        smallestIndex = leftIndex;
    }
    if (rightIndex < this->heap.size() && this->heap[rightIndex] < this->heap[smallestIndex])
    {
        smallestIndex = rightIndex;
    }
    if (smallestIndex != index)
    {
        std::swap(this->heap[index], this->heap[smallestIndex]);
        heapifyDown(smallestIndex);
    }
}

void MinHeap::Insert(int value)
{
    this->heap.push_back(value);
    heapifyUp(this->heap.size() - 1);
}

int MinHeap::ExtractMin()
{
    if (this->heap.empty())
    {
        throw std::out_of_range("Heap is empty");
    }
    int minval = heap[0];
    std::swap(this->heap[0], this->heap[this->heap.size() - 1]);
    heap.pop_back();
    heapifyDown(0);
    return minval;
}