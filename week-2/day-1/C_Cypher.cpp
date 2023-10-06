// Problem Link: https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        
        for(int i=0; i<n; i++) {
            int sn; string s; cin >> sn >> s;
            for(char c: s) {
                if(c == 'U') {
                    a[i]--;
                    if(a[i] < 0) a[i] = 9;
                } else {
                    a[i]++;
                    if(a[i] > 9) a[i] = 0;
                }
            }
        }

        for(int x: a) cout << x << " ";
        
        cout << endl;
    }
    return 0;
}