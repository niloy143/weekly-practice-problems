// Problem Link: https://codeforces.com/problemset/problem/1790/A

#include <bits/stdc++.h>
using namespace std;
string pi = "3141592653589793238462643383279502884197";

int main()
{
    int t; cin >> t; while(t--) {
        string s; cin >> s;
        int i=0; int cnt = 0;
        while(s[i] == pi[i]) {
            cnt++; i++;
        }
        cout << cnt << endl;
    }
    return 0;
}