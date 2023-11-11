// Problem Link: https://codeforces.com/problemset/problem/1881/D

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
        
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
            for(int x=2; x*x<=a[i]; x++) {
                while(a[i]%x==0) {
                    mp[x]++;
                    a[i] /= x;
                }
            }
            if(a[i]>1) mp[a[i]]++;
        }
        bool ok = true;
        for(auto x: mp) {
            if(x.second%n) {
                ok = false; break;
            }
        }
        yesNo(ok || n<2);
    }
    return 0;
}