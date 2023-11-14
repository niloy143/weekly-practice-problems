// Problem Link: https://codeforces.com/problemset/problem/1857/C

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
        int n; cin >> n; vi a;
        int m = (n*(n-1))/2;
        vi b(m); cinArr(b,m);
        srt(b); rvs(b);
        int k=1;
        for(int i=0; i<m;) {
            a.push_back(b[i]);
            i += k;
            k++;
        }
        a.push_back(1e9);
        for(int x: a) cout << x << " ";
        cout << endl;
    }
    return 0;
}