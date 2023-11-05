// Problem Link: https://codeforces.com/problemset/problem/1772/C

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
 
int main()
{
    int t; cin >> t; while(t--) {
        int k,n; cin >> k >> n;
        vi a(k); int d = 0;
        for(int i=k-1; i>=0; i--) {
            a[i] = max(n-d, 0); 
            n -= d;
            d++;
        }
        if(a[0] == 0) {
            a[0] = 1;
            int i=1;
            while(a[i-1] >= a[i] && i < k) {
                a[i] = a[i-1]+1; i++;
            }
        }
        for(int x: a) cout << x << " ";
        cout << endl;
    }
    return 0;
}