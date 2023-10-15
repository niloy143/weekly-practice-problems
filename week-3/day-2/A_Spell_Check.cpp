// Problem Link: https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;

bool isSame(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main()
{
    string timur = "Timur";
    int t; cin >> t; while(t--) {
        int n; string s; cin >> n >> s;
        if(isSame(timur, s)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}