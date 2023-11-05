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
        int a,b,c; cin >> a >> b >> c;
        int cnt = 0;
        cnt += (a==0);
        cnt += (b==0);
        cnt += (c==0);
        if(cnt >= 2) cout << "Water filling time";
        else cout << "Not now";
        cout << endl;
    }
    return 0;
}