// Sort students by marks
// I/P: roll[] = {101,108,103,105}
//      marks[] = {44,100,64,72}
// O/P: roll no     marks
//      108         100
//      105         72
//      103         64
//      101         44

#include <bits/stdc++.h>
using namespace std;
bool myComp(const pair<int, int> p1, const pair<int, int> p2)
{
    return p1.second > p2.second;
}

vector<pair<int, int>> sortMarks(vector<int> a, vector<int> b)
{
    vector<pair<int, int>> p;
    for (int i = 0; i < a.size(); i++)
    {
        p.push_back({a[i], b[i]}); //we can use makr_pair() also
    }
    sort(p.begin(), p.end(), myComp);
    return p;
}

int main()
{
    vector<int> a{101, 108, 103, 105};
    vector<int> b{44, 100, 64, 72};
    vector<pair<int, int>> res = sortMarks(a, b);
    for (auto i : res)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}