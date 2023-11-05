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
        ll n,k; cin >> n >> k;
        if(n/k < 2) cout << "NO";
        else {
            int odd = n/2 + (n%2 == 1);
            odd -= k;
            if(odd%2) cout << "NO";
            else cout << "YES";
        }
        cout << endl;
    }
    return 0;
}