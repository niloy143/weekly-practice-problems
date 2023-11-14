// Problem Link: https://cses.fi/problemset/task/1660

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

int main()
{
    ll n,x; cin >> n >> x;
    deque<int> a(n); cinArr(a,n);
    ll cur = 0; int cnt = 0; int k = 0;
    for(int i=0; i<n; i++) {
        cur += a[i];
        while(cur>x&&k<n) {
            cur -= a[k]; k++;
        }
        if(cur==x) cnt++;
    }
    cout << cnt;
    return 0;
}