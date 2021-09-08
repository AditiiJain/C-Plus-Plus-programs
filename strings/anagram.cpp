#include <bits/stdc++.h>
using namespace std;
void anagram(string s1, string s2)
{
    int count[256] = {0};
    if (s1.length() != s2.length())
    {
        cout << "not an anagram";
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            count[s1[i]]++;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            count[s2[i]]--;
        }

        for (int i = 0; i < 256; i++)
        {
            if (count[i] != 0)
                cout << "not an anagram";
        }
        cout << "yes anagram";
    }
}

int main()
{
    string s1 = "geeks";
    string s2 = "eeksge";
    anagram(s1, s2);
    return 0;
}