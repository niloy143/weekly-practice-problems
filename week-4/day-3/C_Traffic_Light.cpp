// Problem Link: https://codeforces.com/problemset/problem/1744/C

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
        int n; char c; string s;
        cin >> n >> c >> s;

        if(c == 'g') {
            cout << 0 << endl; continue;
        }

        s += s; n *= 2;
        stack<pair<char,int>> st;
        int d = 0;

        for(int i=0; i<n; i++) {
            if(s[i] != 'g' && s[i] != c) continue;

            if(!st.empty() && st.top().first == c) {
                if(s[i] == 'g')
                    d = max(d, i - st.top().second);
                else if(s[i] == c) continue;
            }

            st.push({s[i], i});
        }

        cout << d << endl;
    }
    return 0;
}