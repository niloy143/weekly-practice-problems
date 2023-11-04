// Problem Link: https://codeforces.com/problemset/problem/1690/C

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

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; 
        vi s(n), f(n+1, 0); vi rs(n);
        cinArr(s,n);

        for(int i=1; i<=n; i++) {
            cin >> f[i];
            rs[i-1] = f[i] - max(s[i-1], f[i-1]);
        }
        for(int x: rs) cout << x << " ";

        cout << endl;
    }
    return 0;
}