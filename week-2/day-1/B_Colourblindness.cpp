// Problem Link: https://codeforces.com/problemset/problem/1722/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        replace(s1.begin(), s1.end(), 'G', 'B');
        replace(s2.begin(), s2.end(), 'G', 'B');
        if(s1 == s2) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}