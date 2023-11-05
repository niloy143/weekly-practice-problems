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

ll mod = 1e9+7;

int main()
{
    ll t; cin >> t; while(t--) {
        ll n,k; cin >> n >> k;

        ll rs = 1;
        for(int i=0; i<n&&k>0; i++,k--) 
            rs = (k*rs)%mod;

        cout << rs << endl;
    }
    return 0;
}