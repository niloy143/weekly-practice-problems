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
        int n,q; cin >> n >> q; vi a(n); 
        int odd = 0, even = 0; 
        ll sum = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i]; sum += a[i];
            if(a[i]%2) odd++;
            else even++;
        }
        while(q--){ 
            int c,x; cin >> c >> x;
            if(c == 0) {
                sum += (x * even);
                if(x%2) {
                    odd += even;
                    even = 0;
                }
            } else {
                sum += (x * odd);
                if(x%2) {
                    even += odd;
                    odd = 0;
                }
            }

            cout << sum << endl;
        }
    }
    return 0;
}