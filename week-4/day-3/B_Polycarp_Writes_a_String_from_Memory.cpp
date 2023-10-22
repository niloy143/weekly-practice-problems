// Problem Link: https://codeforces.com/problemset/problem/1702/B

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
        string s; cin >> s; 
        int n = s.size(), cnt = 1;

        set<char> st;

        for(int i=0; i<n; i++) {
            st.insert(s[i]);
            if(st.size() > 3) {
                cnt++; st.clear();
                st.insert(s[i]);
            }
        }

        cout << cnt << endl;
    }
    return 0;
}