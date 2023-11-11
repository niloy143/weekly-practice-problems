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
#define yesNo(c) if(c) cout<<"Yes"<<endl; else cout<<"No"<<endl

int main()
{
    int t; cin >> t; while(t--) {
        ll a,b; cin >> a >> b;

        bool ok = true;
        ll g = __gcd(a,b); 
        while(b!=1) {
            if(g==1) {
                ok = false; break;
            }
            b /= g;
            g = __gcd(g,b);
        }

        yesNo(ok);
    }
    return 0;
}