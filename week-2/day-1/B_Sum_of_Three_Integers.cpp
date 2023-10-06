// Problem Link: https://atcoder.jp/contests/abc051/tasks/abc051_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll k, s;
    cin >> k >> s;
    ll cnt = 0;
    for(ll i=0; i<=k; i++) 
        for(ll j=0; j<=k; j++) 
            if(i+j >= s-k && s-(i+j) >= 0) cnt++;
    cout << cnt;
    return 0;
}