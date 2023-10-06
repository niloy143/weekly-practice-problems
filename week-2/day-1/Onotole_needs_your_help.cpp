// Problem Link: https://www.spoj.com/problems/OLOLO/en/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    int n; cin >> n; vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i=0; i<n; i++)
        if(mp[a[i]] == 1) {
            cout << a[i]; break;
        }
    return 0;
}