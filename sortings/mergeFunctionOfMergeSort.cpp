//Merge function of merge sort
//Input: a[] = {10,15,20,40,8,11,15,22,25}
//       l=0, h=8, m=3
//Output: 8 10 11 15 15 20 22 25 40
//Here, it is given that from 0(l) to 3(m) array is sorted and from 4(m+1) to 8(h)
//array is sorted. Now task is to sort the whole array.
//Condition: l <= m && m < h

//Time complexity - O(size1 + size2) or O(n)
//Auxilary space - O(n)
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int h, int n)
{
    int size1 = m - l + 1, size2 = h - m;
    int left[size1], right[size2];
    for (int i = 0; i < size1; i++)
    {
        left[i] = a[l + i];
    }
    for (int i = 0; i < size2; i++)
    {
        right[i] = a[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < size1 && j < size2)
    {
        //Here, equal sign leads to stability of algorithm as same elements will be sorted in same order
        if (left[i] <= right[j])
        {
            a[k++] = left[i++];
        }
        else
            a[k++] = right[j++];
    }
    while (i < size1)
        a[k++] = left[i++];
    while (j < size2)
        a[k++] = right[j++];
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[20], m, n, l, h;
    cin >> n;
    cin >> l >> m >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    merge(a, l, m, h, n);
    return 0;
}