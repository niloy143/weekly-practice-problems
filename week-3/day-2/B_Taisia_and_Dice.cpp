// Problem Link: https://codeforces.com/problemset/problem/1790/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int n,s,r; cin >> n >> s >> r;
        int ct = s-r;
        int x = r/(n-1), xr = r%(n-1);
        vector<int> a(n-1, x);

        int i=0;
        while(xr > 0) {
            a[i]++; i++; xr--;
        }

        a.push_back(ct);

        for(int dc: a) cout << dc << " ";

        cout << endl;
    }
    return 0;
}