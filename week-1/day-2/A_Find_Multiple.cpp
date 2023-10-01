// Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = b / c;

    if (c * x < a)
        cout << -1;
    else
        cout << c * x;

    return 0;
}