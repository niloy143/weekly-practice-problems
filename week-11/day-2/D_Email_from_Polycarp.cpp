#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define cinArr(a,n) for(int i=0; i<n; i++) cin >> a[i]
#define coutArr(a,n) for(int i=0; i<n; i++) cout << a[i] << " "
#define srt(a) sort(a.begin(),a.end())
#define rvs(a) reverse(a.begin(),a.end())
#define yesNo(c) if(c) cout<<"YES"<<endl; else cout<<"NO"<<endl
#define lng(n) static_cast<ll>(n)

int main()
{
    int t; cin >> t; while(t--) {
        string s1, s2; cin >> s1 >> s2;
        if(s1[0] != s2[0]) cout << "NO" << endl;
        else {
            bool ok = true;
            int i,j;
            for(i=1,j=1; i<s1.size() && j<s2.size();) {
                if(s1[i]==s2[j]) {
                    i++; j++;
                } else if(s1[i-1]==s2[j]) j++;
                else {
                    ok = false; break;
                }
            }
            ok = ok && i==s1.size();
            while(ok && j<s2.size()) {
                if(s1[i-1]==s2[j]) j++;
                else ok = false;
            }
            yesNo(ok);
        }
    }
    return 0;
}