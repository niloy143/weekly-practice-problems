// Problem Link: https://codeforces.com/problemset/problem/467/B

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

int x,n;

int cmp(int y) {
    int cnt = 0;

    for(int i=n-1; i>=0; i--) {
        bool bx = ((1<<i)&x);
        bool by = ((1<<i)&y);
        if(bx != by) cnt++;
    }

    return cnt;
}

int main()
{
    int m,k; cin>>n>>m>>k; m++;
    vi a(m); cinArr(a,m); int cnt = 0;
    x = a[m-1];

    for(int i=0; i<m-1; i++) {
        int d = cmp(a[i]);
        if(d <= k) cnt++;
    }

    cout << cnt;

    return 0;
}