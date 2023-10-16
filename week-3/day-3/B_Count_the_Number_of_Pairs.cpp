// Problem Link: https://codeforces.com/problemset/problem/1800/B

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())

bool isSame(char a, char b) {
    if(a==b) return true;
    if(a >= 'A' && a <= 'Z') return a = (char)(a-'A'+'a');
    else b = (char)(b-'A'+'a');
    
    return a==b;
}

int main()
{
    int t; cin >> t; while(t--) {
        int n,k; cin >> n >> k;
        vvi fr(2, vi(26, 0));
        for(int i=0; i<n; i++) {
            char c; cin >> c;
            if(c >= 'A' && c <= 'Z') fr[1][c-'A']++;
            else fr[0][c-'a']++;
        }

        int cnt = 0;
        for(int i=0; i<26; i++) {
            int mn = min(fr[0][i], fr[1][i]);
            cnt += mn;
            fr[1][i] = fr[1][i] - mn;
            fr[0][i] = fr[0][i] - mn;
        }

        int psb = 0;
        for(int i=0; i<26; i++) {
            int mx = max(fr[0][i], fr[1][i]);
            psb += (mx/2);
        }

        cnt += min(psb, k);

        cout << cnt << endl;
    }
    return 0;
}