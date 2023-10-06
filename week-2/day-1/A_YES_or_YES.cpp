// Problem Link: https://codeforces.com/problemset/problem/1703/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        char y,e,s; cin>>y>>e>>s;

        if(y >= 'A' && y <= 'Z') y = y-'A'+'a';
        if(e >= 'A' && e <= 'Z') e = e-'A'+'a';
        if(s >= 'A' && s <= 'Z') s = s-'A'+'a';

        if(y=='y' && e=='e' && s=='s') cout << "YES";
        else cout << "NO";
        
        cout << endl;
    }
    return 0;
}