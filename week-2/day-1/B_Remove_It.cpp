// Problem Link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    vector<int> a; for(int i=0; i<n; i++) {
        int y; cin >> y;
        if(y != x) a.push_back(y);
    }
    for(int x: a) cout << x << " ";
    return 0;
}