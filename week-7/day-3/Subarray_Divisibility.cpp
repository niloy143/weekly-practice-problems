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
    ll x,n,k=0,ans=0; cin >> n;
    vi a(n,0); a[0] = 1;
	for (int i = 0; i < n; i++) {
		cin >> x; k += x;
        ll m = (k%n)+n;
        a[m%n]++;
	}
	for (ll x : a) ans += ((x*(x-1))/2);
	cout << ans;
    return 0;
}