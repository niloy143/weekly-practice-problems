// Problem Link: https://codeforces.com/problemset/problem/1843/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define si set<int>
#define vsi vector<si>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())

ll n;
vvi a;
vi visited;
vi leafs;
vi mat;

ll dfs(ll u) {
    visited[u] = true;

    if(leafs[u])
        mat[u]++;

    for(ll v: a[u]) {
        if(!visited[v]) {
            ll vx = dfs(v);
            mat[u] += vx;
        }
    }

    return mat[u];
}

int main()
{
    ll t; cin >> t; while(t--) {
        cin >> n; a = vvi(n+1);
        
        for(ll i=1; i<n; i++) {
            ll u,v; cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }

        leafs = vi(n+1, false);
        for(ll i=2; i<=n; i++) {
            if(a[i].size() == 1) leafs[i] = true;
        }
        
        visited = vi(n+1, false);
        mat = vi(n+1, 0);
        dfs(1);

        ll q; cin >> q; while(q--) {
            ll x,y; cin >> x >> y;
            cout << mat[x] * mat[y] << endl;
        }
    }
    return 0;
}