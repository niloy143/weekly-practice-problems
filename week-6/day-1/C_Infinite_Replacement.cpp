// Problem Link: https://codeforces.com/problemset/problem/1674/C

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
        string s,t; cin >> s >> t;
        int ai = t.find('a');

        if(ai == -1) {
            ll x = pow(2, s.size());
            cout << x;
        }
        else if(t.size() == 1) cout << 1;
        else cout << -1;

        cout << endl;
    }
    return 0;
}