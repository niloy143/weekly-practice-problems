// Problem Link: https://codeforces.com/problemset/problem/1692/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; 
        vector<int> ua(1e5, true); 
        vector<int> a;
        for(int i=0; i<n; i++) {
            int x; cin >> x; 
            if(ua[x]) {
                ua[x] = false;
                a.push_back(x);
            }
        }
        if(n%2 == a.size()%2) cout << a.size() << endl;
        else cout << a.size() - 1 << endl;
    }
    return 0;
}