// Problem Link: https://codeforces.com/problemset/problem/1859/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; vvi a(n);
        for(int i=0; i<n; i++) {
            int m; cin >> m;
            vi b(m);
            pii sm = {INT_MAX, -1};
            int sm2 = INT_MAX;
            for(int j=0; j<m; j++) {
                cin >> b[j];
                if(b[j] < sm.first) sm = {b[j],j};
            }
            for(int j=0; j<m; j++) {
                if(j==sm.second) continue;
                sm2 = min(sm2, b[j]);
            }
            a[i].push_back(sm.first);
            a[i].push_back(sm2);
        }
        pii sm = {INT_MAX, -1};
        for(int i=0; i<n; i++) {
            if(a[i][1]<sm.first) sm = {a[i][1],i};
        }
        ll sum = 0;
        for(int i=0; i<n; i++) {
            if(sm.second==i) continue;
            else sum += a[i][1];
        }
        int mn = INT_MAX;
        for(int i=0; i<n; i++) {
            if(a[i][0]<mn) mn = a[i][0];
        }
        sum += mn;
        cout << sum << endl;
    }
    return 0;
}