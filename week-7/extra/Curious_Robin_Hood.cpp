#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define vvi vector<vi>
#define pii pair<ll,ll>
#define cinArr(a,n) for(ll i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(ll i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl

int m = 3e5;
ll n; vi a, tree(m,0);

void tree_init(ll i, ll l, ll r) {
    if(l==r) {
        tree[i] = a[l]; return;
    }
    ll left = i*2, right = left+1, mid = (l+r)/2;
    tree_init(left, l, mid);
    tree_init(right, mid+1, r);
    tree[i] = tree[left]+tree[right];
}

void upd(ll i, ll l, ll r, ll xi, ll x) {
    if(l>xi || r<xi) return;
    if(l==xi && l==r) {
        tree[i] = x; return;
    }
    ll left = i*2, right = left+1, mid = (l+r)/2;
    upd(left, l, mid, xi, x);
    upd(right, mid+1, r, xi, x);
    tree[i] = tree[left]+tree[right];
}

ll rngMstFrq(ll i, ll l, ll r, ll rl, ll rr) {
    if(l>rr || r<rl) return 0;
    if(rl<=l && rr>=r) return tree[i];
    ll left=i*2, right=left+1, mid=(l+r)/2;
    return rngMstFrq(left,l,mid,rl,rr) + rngMstFrq(right,mid+1,r,rl,rr);
}

int main()
{
    ll tn; cin >> tn; 
    for(ll t=1; t<=tn; t++) {
        ll q; cin >> n >> q;
        a = vi(n); cinArr(a,n);

        tree_init(1,0,n-1);
        
        cout << "Case " << t << ":" << endl;
        while(q--) {
            ll cm; cin >> cm;
            if(cm==1) {
                ll i; cin >> i;
                cout << rngMstFrq(1,0,n-1,i,i) << endl;
                upd(1,0,n-1,i,0);
            } else if(cm==3) {
                ll i,j; cin >> i >> j;
                cout << rngMstFrq(1,0,n-1,i,j) << endl;
            } else {
                ll i,v; cin >> i >> v;
                upd(1,0,n-1,i,rngMstFrq(1,0,n-1,i,i) + v);
            }
        }
    }
    return 0;
}