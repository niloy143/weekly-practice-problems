// Problem Link: https://codeforces.com/problemset/problem/1675/A

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
        int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
        x = max(0, x-a);
        y = max(0, y-b);

        yesNo(c >= (x+y));
    }
    return 0;
}