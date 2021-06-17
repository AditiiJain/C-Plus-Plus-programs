// An array contains both positive and negative numbers in random order. Rearrange the array elements
// so that all negative numbers appear before all positive numbers.

// Examples :
// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5

// Note: Order of elements is not important here.

#include <iostream>
using namespace std;

void negpos(int a[], int n)
{
    int low = 0, high = n - 1;

    while(low<high)
    {
          if(a[low]<0 && low<n-1)
          {
                low++;
          }
          else if(a[high]>0 && high>0)
          {
                high--;
          }
          else{
               int temp = a[high];
            a[high] = a[low];
            a[low] = temp;
            low++;
            high--;
          }
    }
}

int main()
{
    int a[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    negpos(a, n);
    for (int i = 0; i < n; i ++)
    {
        cout << a[i] << "   ";
    }
    return 0;
}