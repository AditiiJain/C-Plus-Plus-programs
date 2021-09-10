// Given an unsorted array of N elements and an element X. The task is to write a recursive function to check whether the element X is present in the given array or not.

#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    if (n < 0)
        return false;
        
    if (key != arr[n])
    {
       return search(arr, --n, key);
    }
    return true;
}

int main()
{

    int a[] = {10, 20, 13, 45, 78};
    int size = 5;
    int key = 40;
    bool result = search(a, size - 1, key);
    cout << result;
    return 0;
}