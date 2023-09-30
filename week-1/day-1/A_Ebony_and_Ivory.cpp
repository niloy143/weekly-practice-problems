// Problem Link: https://codeforces.com/problemset/problem/633/A

#include <bits/stdc++.h>
using namespace std;

int a, b, c;

vector<int> memo(1e5, -1);

bool fn(int curr)
{
    if (curr == c)
        return true;
    if (curr > c)
        return false;

    if (memo[curr] != -1)
        return memo[curr];

    return memo[curr] = fn(curr + a) || fn(curr + b);
}

int main()
{
    cin >> a >> b >> c;
    if (fn(0))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}