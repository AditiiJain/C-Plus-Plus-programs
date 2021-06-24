/*
WAP to reverse elements of an array

input :
3 4 5 6 7 8 9

output :
9 8 7 6 5 4 3
*/

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}
void array_reverse(int size, int a[])
{
    int low = 0, high = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (low < high)
        {
            swap(a[low], a[high]);
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
    {
        cin >> a[i];
    }
    array_reverse(n, a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
