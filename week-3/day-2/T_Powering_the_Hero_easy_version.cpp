// Problem Link: https://codeforces.com/problemset/problem/1800/C1

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; priority_queue<int> pq;
        ll cnt = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(x == 0 && !pq.empty()) {
                cnt += pq.top();
                pq.pop();
            } else if(x > 0) {
                pq.push(x);
            }
        }
        
        cout << cnt << endl;
    }
    return 0;
}