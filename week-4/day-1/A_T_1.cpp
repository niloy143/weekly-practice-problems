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

vi a; int n;
bool fn(int i, int p) {
    if(i >= n) return p%360 == 0;

    bool x = fn(i+1, (p+a[i])%360);
    bool y = fn(i+1, (p-a[i])%360);

    return x || y;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) {
        int x; cin >> x; a.push_back(x);
    }
    if(fn(0,0)) cout << "YES";
    else cout << "NO";
    return 0;
}