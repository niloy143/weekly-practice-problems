// Problem Link: https://cses.fi/problemset/task/1661/

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

ll zero = 0;

int main()
{
    ll n,x; cin >> n >> x;
    deque<int> a(n); cinArr(a,n);
    ll cur = 0; ll cnt = 0;
    map<ll,ll> pr; pr[0]=1;
    for(ll i=0; i<n; i++) {
        cur += a[i];
        pr[cur]++;
        cnt+=pr[cur-x];
    }
    if(x==0) cnt-=n;
    cout << cnt;
    return 0;
}