// Problem Link: https://codeforces.com/problemset/problem/1800/D

#include <bits/stdc++.h>
using namespace std;
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
        int n; string s; cin >> n >> s;
        vector<string> srr;
        string sx = ""; sx += s[0]; sx += s[1];
        srr.push_back(sx);
            
        for(int i=1; i<n-1; i++) {
            string ts = ""; ts += s[i]; ts += s[i+1];
            string tsc = ts;
            rvs(tsc); string cs = srr[srr.size()-1];
            if(!(tsc == cs || ts == cs)) srr.push_back(ts);
        }

        cout << srr.size() << endl;
    }
    return 0;
}