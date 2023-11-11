// Problem Link: https://codeforces.com/problemset/problem/678/C

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
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl

ll lcm(ll x, ll y) {
    unordered_map<int,int> xmp;
    unordered_map<int,int> ymp;
    for(int i=2; i*i<=x; i++) {
        while(x%i==0) {
            xmp[i]++;
            x /= i;
        }
    }
    if(x>1) xmp[x]++;
    for(int i=2; i*i<=y; i++) {
        while(y%i==0) {
            ymp[i]++;
            y /= i;
        }
    }
    if(y>1) ymp[y]++;
    ll rs = 1;
    for(auto xm: xmp) {
        ll mx = max(xm.second, ymp[xm.first]);
        ll v = pow(xm.first, mx);
        rs *= v;
        xmp[xm.first] = 0;
        ymp[xm.first] = 0;
    }
    for(auto ym: ymp) {
        ll mx = max(ym.second, xmp[ym.first]);
        ll v = pow(ym.first, mx);
        rs *= v;
        xmp[ym.first] = 0;
        ymp[ym.first] = 0;
    }
    return rs;
}

int main()
{
    ll n,a,b,p,q; cin >> n >> a >> b >> p >> q;
    ll mx = 0;
    ll cmn = n/(lcm(a,b));
    a = (n/a);
    b = (n/b);
    a -= cmn; b -= cmn;
    mx += (a*p);
    mx += (b*q);
    mx += (max(p,q)*cmn);
    cout << mx;
    return 0;
}