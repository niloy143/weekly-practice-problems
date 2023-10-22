// Problem Link: https://www.codechef.com/problems/PALIXOR

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())

bool isPal(ll x) {
    string s = to_string(x);
    ll n = s.size();

    for(ll i=0,j=n-1; i<j; i++,j--) {
        if(s[i] != s[j]) return false;
    }

    return true;
}

int main()
{
    vi pals;
    for(int i=0; i<33e3; i++) {
        if(isPal(i)) pals.push_back(i);
    }

    ll t; cin >> t; while(t--) {
        ll n; cin >> n; vi a(n); cinArr(a,n);
        ll cnt = 0;

        unordered_map<int,int> mp;
        
        for(auto num:a){
            mp[num]++;

            for(auto pal: pals){
                cnt += mp[num^pal];
            }
        }

        cout << cnt << endl;
    }
    return 0;
}