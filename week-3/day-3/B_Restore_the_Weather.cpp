// Problem Link: https://codeforces.com/problemset/problem/1833/B

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define vpi vector<pii>
#define vi vector<int>
#define vvi vector<vi>

int main()
{
    int t; cin >> t; while(t--) {
        int n, k; cin >> n >> k;
        vpi a(n), b(n);
        for(int i=0; i<n; i++) {
            int x; cin >> x; a[i] = {x, i};
        }
        for(int i=0; i<n; i++) {
            int x; cin >> x; b[i] = {x, i};
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vi c(n);

        for(int i=0; i<n; i++) {
            c[a[i].second] = b[i].first;
        }

        for(int i=0; i<n; i++) cout << c[i] << " ";
        cout << endl;
    }
    return 0;
}