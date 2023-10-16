#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; vi a(n); cinArr(a,n);

        vi evens, odds;
        for(int i=0; i<n; i++) {
            if(a[i]%2) odds.push_back(a[i]);
            else evens.push_back(a[i]);
        }
        srt(evens); srt(odds);

        if(evens.size() == 0 || odds.size() == 0) {
            cout << "YES" << endl; continue;
        }

        if(evens[0] < odds[0]) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}