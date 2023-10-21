#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())

int main()
{
    ll t; cin >> t; while(t--) {
        ll n,m,h; cin >> n >> m >> h;
        vi a(n), b(m); cinArr(a,n); cinArr(b,m);
        srt(a); rvs(a); srt(b); rvs(b);
        
        ll cnt = 0;
        for(ll i=0; i<n&&i<m; i++) {
            cnt += min(b[i]*h, a[i]);
        }

        cout << cnt << endl;
    }
    return 0;
}