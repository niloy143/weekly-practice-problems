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
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl
#define lng(n) static_cast<ll>(n)

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        vi a(n); cinArr(a,n);

        int mx = -1;
        for(int x=2; x<=100; x++) {
            int cnt = 0;
            vi visited(n, false);
            for(int i=0; i<n; i++) {
                if(visited[i]) continue;
                visited[i] = true;
                for(int j=i+1; j<n; j++) {
                    if(visited[j]) continue;
                    if(a[i]+a[j] == x) {
                        visited[j] = true;
                        cnt++; break;
                    }
                }
            }
            mx = max(cnt, mx);
        }

        cout << mx << endl;
    }
    return 0;
}