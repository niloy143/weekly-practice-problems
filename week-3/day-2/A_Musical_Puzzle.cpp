// Problem Link: https://codeforces.com/problemset/problem/1833/A

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>

int main()
{
    int t; cin >> t; while(t--) {
        int n; string s; cin >> n >> s;
        set<string> st;
        for(int i=0; i<n-1; i++) {
            string ts = ""; ts += s[i]; ts += s[i+1];
            st.insert(ts);
        }
        cout << st.size() << endl;
    }
    return 0;
}