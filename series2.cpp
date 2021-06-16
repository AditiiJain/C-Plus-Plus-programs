#include <iostream>

using namespace std;
int main()
{

    int n, fact = 1, den_sum = 0, num = 0, den_prod = 1;
    int result = 0,den;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        num += i;
        den_sum += fact;
        den_prod *= fact;
        den=den_sum*den_prod;
        result = result + (num / den);
    }
    cout<< "result is : "<<result<<" \n";

    return 0;
}