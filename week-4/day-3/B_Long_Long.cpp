// Problem Link: https://codeforces.com/problemset/problem/1843/B

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
        int n; cin >> n; vi a; 
        ll sum = 0, op = 0;

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(x != 0) {
                a.push_back(x);
                sum += max(x, (x*(-1)));
            }
        }

        n = a.size();

        for(int i=1; i<n; i++) {
            if(a[i] > 0 && a[i-1] < 0) op++;
        }

        if(n >= 1 && a[n-1] < 0) op++;

        cout << sum << " " << op << endl;
    }
    return 0;
}