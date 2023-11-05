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

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n;

        vi a(n); cinArr(a,n);
        int x=a[0]; rvs(a); a.push_back(x);
        x=a[0]; rvs(a); a.push_back(x);
        n += 2;

        priority_queue<int, vi, greater<int>> pq;
        for(int i=1; i<n-1; i++) {
            pq.push(max(abs(a[i-1]-a[i]), abs(a[i]-a[i+1])));
        }

        cout << pq.top() << endl;
    }
    return 0;
}