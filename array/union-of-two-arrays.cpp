// Given two arrays a[] and b[] of size m and n respectively.
// The task is to find union between these two arrays.

// Example :

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3

// Output:
// 1 2 3 4 5

#include <iostream>
using namespace std;

void union_of_two_arrays(int a[], int m, int b[], int n)
{

    int c[n + m], k = 0;
    for (int i = 0; i < m; i++)
    {
        c[k] = a[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < m; j++)
            if (b[i] == c[j])
            {
                flag = 1;
            }
        if (flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << c[i] << "  ";
    }
}

int main()
{

    int n, m, a[20], b[20];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    union_of_two_arrays(a, m, b, n);

    return 0;
}