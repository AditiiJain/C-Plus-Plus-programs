// Given an array arr of n integers. Find the contiguous sub-array with maximum sum.

// Input:
// n = 5
// arr[] = {1,2,3,-2,5}
// Output:
// 9

#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_sum = a[0];
    int cur_sum = a[0];
    for (int i = 1; i < n; i++)
    {
        cur_sum = max(cur_sum + a[i], a[i]);
        max_sum = max(max_sum, cur_sum);
    }
    cout << max_sum;
}