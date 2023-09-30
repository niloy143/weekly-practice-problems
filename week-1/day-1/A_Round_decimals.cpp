// Problem Link: https://atcoder.jp/contests/abc226/tasks/abc226_a?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;

    int xint = x;

    if (x - xint < 0.5)
        cout << xint;
    else
        cout << ++xint;

    return 0;
}