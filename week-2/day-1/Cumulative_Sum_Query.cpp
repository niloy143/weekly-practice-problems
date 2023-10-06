// Problem Link: https://www.spoj.com/problems/CSUMQ/en/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n; cin >> n; n++;
    vector<ll> a(n, 0);
    for(int i=1; i<n; i++) {
        cin >> a[i]; 
        a[i] += a[i-1];
    }
    int q; cin >> q;
    while(q--) {
        int i, j; cin >> i >> j;
        cout << a[j+1] - a[i] << endl;
    }
    return 0;
}