// Problem Link: https://codeforces.com/problemset/problem/1702/C
 
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
 
int main()
{
    int t; cin >> t; while(t--) {
        int n,q; cin >> n >> q; vi a(n);
        map<int, vi> mp;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
        while(q--) {
            int ai,bi; cin >> ai >> bi;
            vi &ar = mp[ai]; int an = ar.size();
            vi &br = mp[bi]; int bn = br.size();
            if(an < 1 || bn < 1) cout << "NO";
            else if(ar[0] <= br[bn-1]) cout << "YES";
            else cout << "NO";
 
            cout << endl;
        }
    }
    return 0;
}