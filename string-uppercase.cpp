/* WAP to convert lowercase letters into uppercase letters without using inbuilt functions

example - string is "cODing is Cool@#$"

result - "CODING IS COOL@#$"

*/

#include <iostream>
#include <string>
using namespace std;

string uppercase(string s)
{
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c - 'a' <= 25 && c - 'a' >= 0)
        {
            c = c - 'a' + 'A';
        }
        result.push_back(c);
    }
    return result;
}

int main()
{
    string s;
    getline(cin, s);
    string result = uppercase(s);
    cout << result << "\n";
}