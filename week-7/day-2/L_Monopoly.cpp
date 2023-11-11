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
        priority_queue<int> pq;
        for(int i=0; i<4; i++) {
            int x; cin >> x; pq.push(x);
        }
        int mx = pq.top();
        pq.pop(); int sum = 0;
        while(!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        yesNo(mx>sum);
    }
    return 0;
}