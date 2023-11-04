// Problem Link: https://codeforces.com/problemset/problem/1702/D

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
        string w; int p; cin >> w >> p;
        int cur = 0; int n = w.size();

        vector<pii> a(n);
        for(int i=0; i<n; i++) {
            int cn = w[i]-'a'+1;
            a[i] = {cn, i};
            cur += cn;
        }

        if(cur <= p) cout << w;
        else {
            srt(a); int i=n-1;
            while(cur > p && i>=0) {
                cur -= a[i].first;
                a.pop_back(); i--;
            }
            for(int i=0; i<a.size(); i++) {
                int idx = a[i].second;
                int cx = a[i].first;
                a[i] = {idx, cx};
            }
            srt(a);
            for(pii pr: a) {
                char c = (pr.second-1)+'a';
                cout << c;
            }
        }

        cout << endl;
    }
    return 0;
}