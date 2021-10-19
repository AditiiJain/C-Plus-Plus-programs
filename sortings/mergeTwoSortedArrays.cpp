//Merge two sorted arrays
//Input: A[] = {20,45,90}
//       B[] = {32,88}
//Output: 20 32 45 88 90

#include <bits/stdc++.h>
using namespace std;

//Efficient Approach - O(m+n)
void merge_two_sorted_arrays(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else
        {
            cout << b[j++] << " ";
        }
    }
    while (i < m)
        cout << a[i++] << " ";
    while (j < n)
        cout << b[j++] << " ";
}

//Naive Approach - O((m+n)*log(m+n))
// void merge_two_sorted_arrays(int a[],int b[],int m,int n)
// {
//     int c[m+n];
//     //inserting all a's array elements into new array c
//     for(int i=0;i<m;i++)
//     {
//         c[i]=a[i];
//     }
//     //inserting all b's array elements into new array c
//     for(int i=0;i<n;i++)
//     {
//         c[i+m]=b[i];
//     }
//     sort(c,c+m+n);
//     for(int i=0;i<n+m;i++)
//     {
//         cout<<c[i]<<" ";
//     }
// }

int main()
{
    int a[20], b[20], m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    merge_two_sorted_arrays(a, b, m, n);
    return 0;
}