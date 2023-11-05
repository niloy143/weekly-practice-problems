// Problem Link: https://codeforces.com/problemset/problem/1714/B

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
        int n; cin >> n; vi a(n); cinArr(a,n);
        vi fr(2e5+10, 0); int i;
        for(i=n-1; i>=0; i--) { 
            fr[a[i]]++;
            if(fr[a[i]] > 1) break;
        }
        cout << ++i << endl;
    }
    return 0;
}