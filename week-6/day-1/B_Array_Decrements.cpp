// Problem Link: https://codeforces.com/problemset/problem/1690/B

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
        vi a(n), b(n); cinArr(a,n); cinArr(b,n);
        bool ok = true; int mx = 0;
        for(int i=0; i<n; i++) {
            mx = max(mx, a[i]-b[i]);
        }
        for(int i=0; i<n; i++) {
            a[i] = max(a[i]-mx, 0);
        }
        for(int i=0; i<n; i++) {
            if(a[i] != b[i]) {
                ok = false; break;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    return 0;
}