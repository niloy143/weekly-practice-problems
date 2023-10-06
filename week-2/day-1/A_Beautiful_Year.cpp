// Problem Link: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

bool is_unique(int n) {
    string s = to_string(n); sort(s.begin(), s.end());
    for(int i=1; i<s.size(); i++) if(s[i] == s[i-1]) return false;
    return true;
}

int main()
{
    int y; cin >> y; y++;
    while(!is_unique(y)) y++;
    cout << y;
    return 0;
}