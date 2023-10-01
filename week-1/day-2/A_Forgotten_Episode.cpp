// Problem Link: https://codeforces.com/problemset/problem/440/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;
    vector<int> a(n, -1);
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] = x;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] == -1)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}