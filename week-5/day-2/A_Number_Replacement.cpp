// Problem Link: https://codeforces.com/problemset/problem/1744/A

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
        string s; cin >> s;
        vector<char> fr(51, '\0');
        bool ok = true;
 
        for(int i=0; i<n; i++) {
            if(fr[a[i]] == '\0') fr[a[i]] = s[i];
            else if(fr[a[i]] != s[i]) {
                ok = false; break;
            }
        }
 
        if(ok) cout << "YES";
        else cout << "NO";
 
        cout << endl;
 
    }
    return 0;
}