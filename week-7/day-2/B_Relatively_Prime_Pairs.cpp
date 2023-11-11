// Problem Link: https://codeforces.com/problemset/problem/1051/B

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
    ll l, r; cin >> l >> r;
    cout << "YES" << endl;
    for(ll i=l; i<=r; i+=2) cout << i << " " << i+1 << endl;
    return 0;
}