// Problem Link: https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string timur = "Timur"; sort(timur.begin(), timur.end());
    int t; cin >> t; while(t--) {
        int n; string s; cin >> n >> s;
        if(n != 5) cout << "NO";
        else {
            sort(s.begin(), s.end());
            if(s == timur) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
    return 0;
}