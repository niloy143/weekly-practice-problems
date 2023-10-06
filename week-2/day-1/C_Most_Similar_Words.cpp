// Problem Link: https://codeforces.com/problemset/problem/1676/C

#include <bits/stdc++.h>
using namespace std;

int diff(string a, string b) {
    int cnt = 0;

    for(int i=0; i<a.size(); i++) {
        if(a[i] == b[i]) continue;

        if(a[i] > b[i]) cnt += (a[i]-b[i]);
        else cnt += (b[i]-a[i]);
    }

    return cnt;
}

int main()
{
    int t; cin >> t; while(t--) {
        int n, m; cin >> n >> m;
        vector<string> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int mn = INT_MAX;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                int df = diff(a[i], a[j]);
                mn = min(mn, df);
            }
        }

        cout << mn << endl;
    }
    return 0;
}