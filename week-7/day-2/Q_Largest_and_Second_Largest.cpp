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
        priority_queue<int> pq;
        for(int i=0; i<n; i++) {
            int x; cin >> x; pq.push(x);
        }
        int sum = pq.top();
        while(!pq.empty()) {
            pq.pop();
            if(sum == pq.top()) continue;
            sum += pq.top(); break;
        }
        cout << sum << endl;
    }
    return 0;
}