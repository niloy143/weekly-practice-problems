// Problem Link: https://codeforces.com/problemset/problem/1352/C

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
#define lng(n) static_cast<ll>(n)

int main()
{
    int t; cin >> t; while(t--) {
        ll n,k; cin >> n >> k;

        ll nrk = (k/(n-1))*(n-1);
        ll ans = ((k/(n-1))*n)-1;

        if(nrk != k) ans += (k-nrk+1);

        cout << ans << endl;
    }
    return 0;
}