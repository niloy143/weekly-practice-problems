// Problem Link: https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x, y;
    cin >> x >> y;
    int cnt = 0;
    while (x <= y)
    {
        cnt++;
        x *= 2;
    }
    cout << cnt;
    return 0;
}