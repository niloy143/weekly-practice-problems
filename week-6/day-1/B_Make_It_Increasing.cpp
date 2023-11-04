// Problem Link: https://codeforces.com/problemset/problem/1675/B

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
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; 
        vi a(n); cinArr(a,n);

        int op = 0;
        for(int i=n-2; i>=0; i--) {
            while(a[i]>0 && a[i] >= a[i+1]) {
                a[i] /= 2; op++;
            }
            if(a[i]>=a[i+1]) {
                op = -1; break;
            }
        }
        
        cout << op << endl;
    }
    return 0;
}