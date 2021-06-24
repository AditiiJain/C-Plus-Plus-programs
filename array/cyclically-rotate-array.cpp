// Given an array, rotate the array by one position in clock-wise direction.

// Input:
// n = 5
// a[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int n, a[20];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int last = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = last;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}