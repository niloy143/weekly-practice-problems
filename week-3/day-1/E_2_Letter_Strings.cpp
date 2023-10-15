// Problem Link: https://codeforces.com/problemset/problem/1669/E

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin >> n; vector<string> a(n);
        vvi mat(11, vi(11, 0));

        for(int i=0; i<n; i++) {
            cin >> a[i];
            mat[a[i][0]-'a'][a[i][1]-'a']++;
        }
        ll cnt = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<11; j++) {
                if(a[i][1]-'a' == j) continue;
                cnt += mat[a[i][0]-'a'][j];
            }
            for(int j=0; j<11; j++) {
                if(a[i][0]-'a' == j) continue;
                cnt += mat[j][a[i][1]-'a'];
            }
        }

        cout << cnt/2 << endl;
    }
    return 0;
}