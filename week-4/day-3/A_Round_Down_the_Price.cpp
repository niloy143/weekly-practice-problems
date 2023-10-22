// Problem Link: https://codeforces.com/problemset/problem/1702/A

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
        int num; cin >> num;
        int tn = num; int rn = 1;
        while(tn > 9) {
            rn *= 10;
            tn /= 10;
        }
        cout << num - rn << endl;
    }
    return 0;
}