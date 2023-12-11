// Problem Link: https://codeforces.com/problemset/problem/1225/B1

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
#define zero static_cast<ll>(0)

int main()
{
    int t; cin >> t; while(t--) {
        int n,k,d; cin >> n >> k >> d;
        vi a(n); cinArr(a,n);

        int mn = INT_MAX;
        for(int i=0,j=d-1; j<n; i++,j++) {
            set<int> st;
            for(int i2=i; i2<=j; i2++) st.insert(a[i2]);
            mn = min(mn, static_cast<int>(st.size()));
        }
        cout << mn << endl;
    }
    return 0;
}