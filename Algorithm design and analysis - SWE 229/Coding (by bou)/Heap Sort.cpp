#include <bits/stdc++.h>
using namespace std;

vector<int>arr;

void heapify(int _size, int currentIndex)
{
    int largest = currentIndex;
    int leftChild = 2*currentIndex + 1;
    int rightChild = 2*currentIndex + 2;

    if(leftChild < _size && arr[leftChild] > arr[largest]) largest = leftChild;
    if(rightChild < _size && arr[rightChild] > arr[largest]) largest = rightChild;
    if(currentIndex != largest)
    {
        swap(arr[currentIndex], arr[largest]);
        heapify(_size,largest);
    }
}

void heapSort(int _size)
{
    for (int i = _size / 2 - 1; i >= 0; i-- ) heapify(_size,i);
    for (int i = _size -1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(i,0);
    }
}

int main()
{
    arr = {5,6,1,2,3,7};
    heapSort(arr.size());
    for(int i = 0 ; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    return 0;
}
