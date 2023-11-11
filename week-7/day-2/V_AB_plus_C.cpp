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

int main()
{
    int t; cin >> t; while(t--) {
        ll x; cin >> x;
        if(x<2) cout << -1;
        else if(x<=1e6) cout << 1 << " " << x-1 << " " << 1;
        else {
            ll a = 1e6;
            if(x%a) cout << a << " " << x/a << " " << x%a;
            else cout << a << " " << (x/a)-1 << " " << a;
        }
        cout << endl;
    }
    return 0;
}