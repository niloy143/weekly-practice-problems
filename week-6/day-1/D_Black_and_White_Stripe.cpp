// Problem Link: https://codeforces.com/problemset/problem/1690/D

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
        int n,k; cin >> n >> k;
        string s; cin >> s;

        int mx = 0; int cur = 0;
        for(int i=0; i<k; i++) {
            if(s[i] == 'B') cur++;
        }
        mx = cur;
        for(int i=1,j=k; j<n; i++,j++) {
            if(s[i-1]=='B') cur--;
            if(s[j]=='B') cur++;

            mx = max(mx, cur);
        }

        cout << k-mx << endl;
    }
    return 0;
}