// Problem Link: https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ns = "";
    for (int i = 0; i < s.size(); i += 2)
        ns += s[i];
    cout << ns;
    return 0;
}