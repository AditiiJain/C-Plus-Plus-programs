/*WAP to print result of given series

let us consider an array of length N and elements of array be a1,a2,a3.....aN
then series will be

(a1*a2*a3*...*a(N-1) + a2*a3*a4*...*aN + a3*a4*a5*...*aN*a1 +... ) / (a1 + a2 + ... + aN)

p.s.- 1,2,3,...,(N-1),N are in subscript

*/

#include <iostream>
using namespace std;

int main()
{

    int n, num_sum = 0;
    cin >> n;
    int a[20];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int den_sum = 0, total_product = 1;
    for (int i = 0; i < n; i++)
    {
        total_product *= a[i];
        den_sum+=a[i];
    }

    for (int i = 0; i < n; i++)
    {
       num_sum = num_sum + (total_product/a[i]);
    }

    cout << "\n"
         << num_sum/den_sum;
}