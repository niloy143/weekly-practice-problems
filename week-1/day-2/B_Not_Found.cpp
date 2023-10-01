// Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<bool> a(26, true);
    for (char c : s)
        a[c - 'a'] = false;
    for (int i = 0; i < 26; i++)
    {
        if (a[i])
        {
            cout << (char)(i + 'a');
            return 0;
        }
    }

    cout << "None";
    return 0;
}