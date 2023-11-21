// Problem Link: https://codeforces.com/problemset/problem/1846/E1

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
        int n; cin >> n;

        if(n<7) cout << "NO" << endl;
        else {
            bool ok = false;
            for(int i=2; i*i<=n; i++) {
                int cur = 0;
                for(int j=1; cur<n; j *= i) {
                    cur += j;
                }
                if(cur==n) {
                    ok = true; break;
                }
            }
            yesNo(ok);
        }
    }
    return 0;
}