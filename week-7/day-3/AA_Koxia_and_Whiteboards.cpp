// Problem Link: https://codeforces.com/problemset/problem/1770/A

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
        int n,m; cin >> n >> m;
        vi a(n), b(m);
        cinArr(a,n); cinArr(b,m);

        priority_queue<int, vi, greater<int>> pq;
        for(int i=0; i<n; i++) pq.push(a[i]);

        for(int i=0; i<m; i++) {
            pq.pop();
            pq.push(b[i]);
        }

        ll sum = 0;
        while(!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }
    return 0;
}