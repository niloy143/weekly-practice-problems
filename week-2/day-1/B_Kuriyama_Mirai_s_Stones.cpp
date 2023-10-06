// Problem Link: https://codeforces.com/problemset/problem/433/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n; cin >> n; n++;
    vector<ll> a(n, 0); for(int i=1; i<n; i++) cin >> a[i];
    vector<ll> sorted(a); sort(sorted.begin(), sorted.end());

    for(int i=1; i<n; i++) {
        a[i] += a[i-1];
        sorted[i] += sorted[i-1];
    }

    int q; cin >> q; 
    while(q--) {
        int t,l,r; cin>>t>>l>>r;
        if(t==2) {
            cout << sorted[r] - sorted[l-1];
        } else {
            cout << a[r] - a[l-1];
        }
        cout << endl;
    }
    return 0;
}