// Problem Link: https://codeforces.com/problemset/problem/1759/B

#include <bits/stdc++.h>
using namespace std;
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
        int n,x; cin >> n >> x;
        vi a(n); cinArr(a,n);
        vi fr(1001, false); vi b;
        for(int i=0; i<n; i++) fr[a[i]] = true;
        for(int i=1; i<=1000; i++) if(!fr[i]) b.push_back(i);
        srt(b); rvs(b);
        
        while(x > 0) {
            if(b.size() < 1) break;
            int ep = b[b.size()-1];
            a.push_back(ep);
            x -= ep;
            b.pop_back();
        } srt(a);

        bool ok = x==0;
        for(int i=0; i<a.size()-1; i++) {
            if(a[i]+1 != a[i+1]) {
                ok = false; break;
            }
        }

        if(ok) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    return 0;
}