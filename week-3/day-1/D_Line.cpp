// Problem Link: https://codeforces.com/problemset/problem/1722/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t; cin >> t; while(t--) {
        ll n; string s; cin >> n >> s;
        vector<ll> a(n, 0);
        ll sum = 0;
        for(ll i=0; i<n; i++) {
            a[i] = s[i] == 'L' ? i : n-i-1;
            sum += a[i];
        }

        vector<ll> b;
        for(ll i=0; i<n; i++) {
            ll L = i, R = n-i-1;

            if(s[i] == 'L' && L < R) {
                s[i] = 'R'; b.push_back(R-L);
            } else if(s[i] == 'R' && R < L) {
                s[i] = 'L'; b.push_back(L-R);
            }
        }
        sort(b.begin(), b.end(), greater<ll>());

        ll bn = b.size();
        ll k=0;
        for(ll i=0; i<n; i++) {
            if(k < bn) {
                sum += b[k];
                k++;
            }
            cout << sum << " ";
        }

        cout << endl;
    }
    return 0;
}