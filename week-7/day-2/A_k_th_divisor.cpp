// Problem Link: https://codeforces.com/problemset/problem/762/A

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

ll n,k;

unordered_map<ll,ll> mp;

ll fn(ll i, ll x) {
    ll y = n/x;
    mp[i] = x;

    for(++x; x*x<=n; x++) {
        if(n%x==0) break;
    }

    ll j = i;
    if(x*x>n) {
        if(y!=mp[i]) j++;
    } else {
        j = fn(i+1, x); j++;
    }

    mp[j] = y;
    return j;
}

int main()
{
    cin >> n >> k;
    fn(1, 1);

    if(mp[k]) cout << mp[k];
    else cout << -1;

    return 0;
}