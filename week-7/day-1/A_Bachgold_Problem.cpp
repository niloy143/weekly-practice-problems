// Problem Link: https://codeforces.com/problemset/problem/749/A

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
    int n; cin >> n;
    vi a;
    while(n >= 2) {
        a.push_back(2);
        n -= 2;
    }
    if(n>0) {
        a.pop_back();
        a.push_back(3);
    }
    cout << a.size() << endl;
    for(int x: a) cout << x << " ";
    return 0;
}