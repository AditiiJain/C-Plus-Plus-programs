/*
pattern printing

if n= 8,

      * * 
    * * * *
  * * * * * * 
* * * * * * * *
* * * * * * * *
  * * * * * *
    * * * *
      * * 


if n=7

      * 
    * * *
  * * * * *
* * * * * * * 
  * * * * *
    * * * 
      *

*/

#include <iostream>
using namespace std;

void pattern(int n)
{

    int counter = (n % 2 == 1) ? 1 : 2;
    //printing upper part
    for (int row = 1; row <= n / 2; row++)
    {
        int total_stars = counter + (row - 1) * 2;
        int total_spaces = (n-total_stars)/2;

        //printing spaces
        for (int spaces = 1; spaces <= total_spaces; spaces++)
        {
            cout << "  ";
        }

        //printing stars
        for (int stars = 1; stars <= total_stars; stars++)
            cout << "* ";

        //print new line
        cout << "\n";
    }

    //printing middle part

    if (n % 2 == 1)
    {
        for (int star = 1; star <= n; star++)
        {

            cout << "* ";
        }
            cout << "\n";
    }

    //printing lower part
   for (int row = n/2; row >= 1; row--)
    {
        int total_stars = counter + (row - 1) * 2;
        int total_spaces = (n-total_stars)/2;

        //printing spaces
        for (int spaces = 1; spaces <= total_spaces ; spaces++)
        {
            cout << "  ";
        }

        //printing stars
        for (int stars = 1; stars <= total_stars; stars++)
            cout << "* ";

        //print new line
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}