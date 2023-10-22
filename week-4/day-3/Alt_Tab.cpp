// Problem Link: https://www.codechef.com/problems/ALTTAB

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
    int n; cin >> n;
    vector<string> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    rvs(a); vector<pair<string,int>> b(n);
    for(int i=0; i<n; i++) {
        b[i] = {a[i], i};
    }
    srt(b);

    vector<string> c(n, "");
    c[b[0].second] = b[0].first;
    
    for(int i=1; i<n; i++) {
        if(b[i].first != b[i-1].first)
            c[b[i].second] = b[i].first;
    }

    for(string s: c) {
        int m = s.size();
        if(m > 0)
            cout << s[s.size()-2] << s[s.size()-1];
    }

    return 0;
}