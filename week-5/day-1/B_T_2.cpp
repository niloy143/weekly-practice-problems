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

int main()
{
    cin >> n;
    a = vi(n); cinArr(a,n); srt(a);

    cin >> q;
    while(q--) {
        int x; cin >> x;
        int prv = INT_MIN, nxt = INT_MAX;

        int l=0, r=n-1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(a[mid] < x) {
                if(mid+1 >= n || a[mid+1] >= x) {
                    prv = a[mid]; break;
                } else {
                    l = mid+1;
                }
            } else {
                r = mid-1;
            }
        }

        l=0, r=n-1;
        while(l<=r) {
            int mid = (l+r)/2;
            if(a[mid] > x) {
                if(mid <= 0 || a[mid-1] <= x) {
                    nxt = a[mid]; break;
                } else {
                    r = mid-1;
                }
            } else {
                l = mid+1;
            }
        }

        prv == INT_MIN ? cout << "X" : cout << prv;
        cout << " ";
        nxt == INT_MAX ? cout << "X" : cout << nxt;

        cout << endl;
    }
    return 0;
}