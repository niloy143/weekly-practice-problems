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
        int n,k,l; cin >> n >> k >> l;
        vi a;
        while(n--) {
            int m,ln; cin >> m >> ln;
            if(ln==l) a.push_back(m);
        }
        if(a.size() < k) cout << -1;
        else {
            srt(a); rvs(a);
            ll sum = 0;
            for(int i=0; i<k; i++) sum += a[i];
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}