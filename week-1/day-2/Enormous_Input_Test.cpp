// Problem Link: https://www.spoj.com/problems/INTEST/en/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % k == 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}