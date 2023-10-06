// Problem Link: https://codeforces.com/problemset/problem/1669/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; 
    while(t--) {
        int n; cin >> n; 
        vector<int> a(n+1, 0);
        bool printed = false;
        for(int i=0; i<n; i++) {
            int x; cin >> x; a[x]++;
            if(a[x] >= 3 && !printed) {
                cout << x << endl;
                printed = true;
            }
        }
        if(!printed) cout << -1 << endl;
    }
    return 0;
}