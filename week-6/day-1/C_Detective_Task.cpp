// Problem Link: https://codeforces.com/problemset/problem/1675/C

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
        string s; cin >> s; 
        int n = s.size();

        int one = -1, zero = -1;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') one = i;
            else if(s[i] == '0') {
                zero = i; break;
            }
        }

        int suspect = n;

        if(one != -1) suspect -= one;
        if(zero != -1) suspect -= (n-zero-1);

        cout << suspect << endl;
    }
    return 0;
}