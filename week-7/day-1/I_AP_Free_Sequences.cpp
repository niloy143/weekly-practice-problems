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
#define yesNo(c) if(c) cout<<"Yes"<<endl; else cout<<"No"<<endl

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        vi a(n); cinArr(a,n);
        bool ok=true;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                for(int k=j+1; k<n; k++)
                    if((a[j]-a[i])==(a[k]-a[j])) {
                        ok = false; break;
                    }
        yesNo(ok);
    }
    return 0;
}