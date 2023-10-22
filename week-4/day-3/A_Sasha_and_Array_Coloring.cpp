// Problem Link: https://codeforces.com/problemset/problem/1843/A

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
        int n; cin >> n; vi a(n); 
        cinArr(a,n); srt(a); int sum = 0;
        for(int i=0,j=n-1; i<j; i++,j--) {
            sum += (a[j]-a[i]);
        }
        cout << sum << endl;
    }
    return 0;
}