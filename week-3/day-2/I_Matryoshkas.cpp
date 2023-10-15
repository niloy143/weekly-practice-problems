// Problem Link: https://codeforces.com/problemset/problem/1790/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; vector<int> a(n); int cnt = 0;
        map<int, int> mp;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a.begin(), a.end(), greater<int>());

        for(int x: a) {
            if(mp[x+1] > 0) {
                mp[x+1]--;
            } else {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}