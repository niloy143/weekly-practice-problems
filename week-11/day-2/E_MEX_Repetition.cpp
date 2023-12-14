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
        int n,k; cin >> n >> k;
        deque<int> a(n); cinArr(a,n);
        vi frq(n+1, false);
        for(int i=0; i<n; i++) frq[a[i]] = true;
        int missing = -1;
        for(int i=0; i<=n; i++) {
            if(frq[i]) continue;
            missing = i; break;
        }
        k %= (n+1);
        while(k--) {
            a.push_front(missing);
            missing = a.back();
            a.pop_back();
        }
        coutArr(a,n);
        cout << endl;
    }
    return 0;
}