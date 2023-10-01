// Problem Link: https://codeforces.com/problemset/problem/1703/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<bool> a(26, false);
        int cnt = 0;
        for (char c : s)
        {
            if (a[c - 'A'])
                cnt++;
            else
            {
                cnt += 2;
                a[c - 'A'] = true;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}