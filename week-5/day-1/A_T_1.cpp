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

int n,q;
vi a;

int findX (int x) {
    int pos = -1;

    int l = 0, r = n-1;
    while(l <= r) {
        int mid = (l+r)/2;
        if(a[mid] == x) {
            pos = mid; break;
        }

        if(a[mid] > x) {
            r = mid-1;
        } else {
            l = mid+1;
        }
    }

    if(pos != -1) {
        while(a[pos] == x && pos < n) pos--;

        pos++;
    }

    return pos;
}

int main()
{
    int cs = 0;
    while(true) {
        cin >> n >> q; cs++;
        if(n==0 && q==0) break;

        a = vi(n);
        cinArr(a,n); srt(a);

        cout << "CASE# " << cs << ":" << endl;

        while(q--) {
            int x; cin >> x;
            int pos = findX(x);
            if(pos == -1) cout << x << " not found" << endl;
            else cout << x << " found at " << pos+1 << endl;
        }

    }
    return 0;
}