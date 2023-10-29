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

int main()
{
    int t; cin >> t; while(t--) {
        int a,b,c; cin >> a >> b >> c;
        int x = a-1, y = (c-1)+abs(b-c);

        if(x > y) cout << 2;
        else if(y > x) cout << 1;
        else cout << 3;

        cout << endl;
    }
    return 0;
}