// Problem Link: https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int i= 0;
    while(pow(k,i) <= n)  i++;
    cout << i;
    return 0;
}