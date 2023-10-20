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
#define yesNo(ok) if(ok) cout << "YES" << endl; else cout << "NO" << endl

int main()
{
    int t; cin >> t; while(t--) {
        int n,b; cin >> n >> b;
        vi a(n); cinArr(a,n);
        bool ok = false;

        vi ar;
        for(int i=0; i<n; i++) {
            if((a[i]&b) == b) ar.push_back(a[i]);
        }

        int ib = INT_MAX;
        for(int x: ar) ib &= x;
        yesNo(ib == b);
    }
    return 0;
}