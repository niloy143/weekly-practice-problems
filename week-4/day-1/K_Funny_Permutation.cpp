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

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        if(n==3) cout << -1 << endl;
        else {
            cout << n << " " << n-1 << " ";
            for(int i=1; i<n-1; i++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}