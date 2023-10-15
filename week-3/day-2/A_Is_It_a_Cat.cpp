// Problem Link: https://codeforces.com/problemset/problem/1800/A

#include <bits/stdc++.h>
using namespace std;

vector<int> meow = {'m'-'a', 'e'-'a', 'o'-'a', 'w'-'a'};

int main()
{
    int t; cin >> t; while(t--) {
        int n; string s; cin >> n >> s;
        vector<bool> bl(4, 0);

        int i=0;
        for(char c: s) {
            int x;
            if(c>'A' && c<'Z') x = c - 'A';
            else x = c - 'a';

            if(meow[i] == x) bl[i] = true;
            else {
                if(i >= 3) {
                    bl[3] = false; break;
                } else if(meow[i+1] == x) {
                    bl[i+1] = true; i++;
                } else {
                    bl[3] = false; break;
                }
            }
        }

        bool ok = true;

        for(bool b: bl) if(!b) ok = false;

        if(ok) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    return 0;
}