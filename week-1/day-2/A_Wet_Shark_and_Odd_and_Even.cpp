// Problem Link: https://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    ll sm = 0, x;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sm += x;
        if (x % 2 == 1)
            a.push_back(x);
    }
    if (sm % 2 == 0)
        cout << sm;
    else
    {
        sort(a.begin(), a.end());
        int i = 0;
        while (sm % 2 == 1 && i < a.size())
        {
            sm -= a[i];
            i++;
        }
        cout << sm;
    }
    return 0;
}