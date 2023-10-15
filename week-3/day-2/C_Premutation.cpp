// Problem Link: https://codeforces.com/problemset/problem/1790/C

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        vvi a(n, vi(n-1));
        for(int i=0; i<n; i++) {
            for(int j=0; j<n-1; j++) {
                cin >> a[i][j];
            }
        }

        vvi mrr(n+1, vi(n-1));

        for(int i=0; i<n; i++) {
            vi fr(n+1, 0); int mi;
            for(int j=0; j<n-1; j++) {
                fr[a[i][j]] = 1;
            }
            for(int k=1; k<=n; k++) {
                if(fr[k] != 1) {
                    mi = k; break;
                }
            }
            mrr[mi] = a[i];
        }

        vi xrr = mrr[1]; int i=0;
        while(i < n-1) {
            vi yrr = mrr[xrr[i]];

            if(i+1 == n-1) {
                for(int y: yrr) cout << y << " "; 
                cout << xrr[i]; break;
            }

            if(yrr[0] == xrr[i+1]) {
                cout << xrr[i] << " "; 
                for(int y: yrr) cout << y << " "; 
                break;
            }

            i++;
        }

        cout << endl;
    }
    return 0;
}