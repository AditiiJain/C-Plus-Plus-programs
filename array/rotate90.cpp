// Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.

// Example:

// Input:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// 7 4 1
// 8 5 2
// 9 6 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 3, m = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
        reverse(arr[i], arr[i] + m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "  ";
        cout << "\n";
    }
}