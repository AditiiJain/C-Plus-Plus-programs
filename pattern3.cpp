/*
 pattern printing:

 if n=4

*     * 
  * *
  * *
*     *

if n=5

*       * 
  *   * 
    * 
  *   * 
*       *


*/

#include <iostream>
using namespace std;

void pattern(int n)
{

    //printing upper part
    for (int row = 1; row <= n / 2; row++)
    {
        int total_spaces = (row - 1) * 2;
        int total_stars = n - total_spaces;

        //printing spaces
        for (int spaces = 1; spaces <= total_spaces / 2; spaces++)
        {
            cout << "  ";
        }

        //printing stars
        for (int stars = 1; stars <= total_stars; stars++)
        {
            if (stars == 1 || stars == total_stars)
            {
                cout << "* ";
            }
            else{
                cout<<"  ";
            }
        }

        //print new line
        cout << "\n";
    }

    //printing middle part

    if (n % 2 == 1)
    {
        int t_spaces = n - 1;
        for (int space = 1; space <= t_spaces / 2; space++)
        {

            cout << "  ";
        }
        cout << "* ";
        cout << "\n";
    }

    //printing lower part
    for (int row = n / 2; row >= 1; row--)
    {
        int total_spaces = (row - 1) * 2;
        int total_stars = n - total_spaces;

        //printing spaces
        for (int spaces = 1; spaces <= total_spaces / 2; spaces++)
        {
            cout << "  ";
        }

        //printing stars
        for (int stars = 1; stars <= total_stars; stars++)
        {
            if (stars == 1 || stars == total_stars)
            {
                cout << "* ";
            }
            
            else{
                cout<<"  ";
            }
        }

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
