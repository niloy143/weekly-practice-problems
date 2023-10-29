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

int main()
{
    int t; cin >> t; while(t--) {
        int n; string s; cin >> n >> s;
        vector<string> a;
        for(int i=0; i<n; i++) {
            string ts = ""; ts += s[i];

            if(s[i] == '0' && a.size() >= 2 && !(i+1 < n && s[i+1] == '0')) {
                ts = "";
                ts += a[a.size()-2];
                ts += a[a.size()-1];

                a.pop_back();
                a.pop_back();
            }

            a.push_back(ts);
        }

        string t = "";

        for(auto str : a) {
            int x = 0;
            for(char c: str) {
                x = x*10 + (c-'0');
            }
            char c = 'a'+x-1;
            t += c;
        }

        cout << t << endl;
    }
    return 0;
}