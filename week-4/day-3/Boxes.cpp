// Problem Link: https://www.codechef.com/problems/BOX95

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())

int main()
{
    ll t; cin >> t; while(t--) {
        ll n; cin >> n; vi a(n); cinArr(a,n);
        srt(a); rvs(a);

        priority_queue<ll> pq;
        pq.push(a[0]);


        for(ll i=1; i<n; i++) {
            ll x = a[i];
            ll y = pq.top();
            if(x <= y) {
                pq.pop(); pq.push((x^y));
            } else pq.push(x);
        }

        cout << pq.size() << endl;
    }
    return 0;
}