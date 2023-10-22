// Problem Link: https://codeforces.com/problemset/problem/1714/C

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
        int n; cin >> n;
        string s = "";

        int x = 9;
        while(n > x) {
            n -= x;
            char num = '0' + x;
            s += num;
            x--;
        }

        char c = '0' + n;
        s += c; rvs(s);

        cout << s << endl;
    }
    return 0;
}