#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t; while(t--) {
        int n; cin>> n; vector<string> a(n);
        map<string,bool> mp;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]] = true;
        }

        string ans = "";

        for(int i=0; i<n; i++) {
            bool ok = false;

            int sz = a[i].size();
            for(int j=0; j<sz-1; j++) {
                string s1 = a[i].substr(0, j+1);
                string s2 = a[i].substr(j+1, sz);
                if(mp[s1] && mp[s2]) {
                    ok = true; break;
                }
            }

            ans += ok ? "1" : "0";
        }

        cout << ans << endl;
    }
    return 0;
}