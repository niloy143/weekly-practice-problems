// Problem Link: https://codeforces.com/problemset/status?my=on

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long int sm = 0;
        for (int i = 0; i < n; i++)
        {
            sm += (a[i] - a[0]);
        }
        cout << sm << endl;
    }
    return 0;
}