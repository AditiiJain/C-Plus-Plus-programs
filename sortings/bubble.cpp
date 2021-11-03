// BUBBLE SORT

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // for n-1 passes
    {
        // naive approach
        // for (int j = 0; j < n - 1; j++) // n-1 because we check for adjacent elements, so in order to prevent out of bound
        // {
        //     if (arr[j] > arr[j + 1])
        //     {
        //         // swap elements
        //         int temp = arr[j + 1];
        //         arr[j + 1] = arr[j];
        //         arr[j] = temp;
        //     }
        // }
        bool swapped = false;
        // efficient approach
        // n - i - 1 because "i" elements are already get sorted when we are on "i" iteration
        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                // swap elements
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "After sorting: ";
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}