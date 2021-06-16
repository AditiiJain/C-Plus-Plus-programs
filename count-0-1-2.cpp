/*
Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
*/

#include <iostream>
using namespace std;

void sort012(int n, int a[])
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count0++;
        }
        else if (a[i] == 1)
            count1++;
        else
            count2++;
    }
    int i = 0;
    while (count0)
    {
        a[i] = 0;
        count0--;
        i++;
    }
    while (count1)
    {
        a[i] = 1;
        count1--;
        i++;
    }
    while (count2)
    {
        a[i] = 2;
        count2--;
        i++;
    }
}

int main()
{
    int n, a[20];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort012(n, a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}