// Problem Link: https://codeforces.com/problemset/problem/1759/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int l,r,x,a,b; cin >>l>>r>>x>>a>>b;
        
        if(a==b) { cout << 0 << endl; continue; }
        if(abs(a-l)<x && abs(a-r)<x) { cout << -1 << endl; continue; }
        if(abs(a-b)>=x) { cout << 1 << endl; continue; }
        
        if(abs(b-l) > abs(b-r)) {
            if(abs(a-l) >= x) a = l;
            else a = r;
        } else {
            if(abs(a-r) >= x) a = r;
            else a = l;
        }
        if(abs(a-b)>=x) { cout << 2 << endl; continue; }

        if(abs(b-l) > abs(b-r)) {
            if(abs(a-l) >= x) a = l;
            else a = r;
        } else {
            if(abs(a-r) >= x) a = r;
            else a = l;
        }
        if(abs(a-b)>=x) { cout << 3 << endl; continue; }

        cout << -1 << endl;
    }
    return 0;
}