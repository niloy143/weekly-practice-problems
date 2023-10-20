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
        int n; cin >> n; vi a(n); int cnt = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            int k = 0;
            while(a[i]%2 == 0 && a[i] > 1) {
                a[i] /= 2; k++;
            }
            cnt += k;
        }
        if(cnt >= n) cout << 0 << endl;
        else {
            int nd = n-cnt; int op = 0;
            vi b;
            for(int i=n-(n%2); i>=2; i-=2) {
                int x = i, k = 0;
                while(x%2 == 0 && x > 1) {
                    x /= 2; k++;
                }
                b.push_back(k);
            }
            sort(b.begin(), b.end(), greater<int>());
            for(int num: b) {
                nd -= num; op++;
                if(nd <= 0) break;
            }
            if(nd <= 0) cout << op << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}