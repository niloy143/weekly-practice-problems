// Problem Link: https://codeforces.com/problemset/problem/1582/C

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

int main()
{
    int t; cin >> t; while(t--) {
        int n; string s;
        cin >> n >> s;

        vector<char> a;
        for(int i=0,j=n-1; i<=j; i++,j--) {
            if(s[i]!=s[j]) {
                a = {s[i], s[j]}; break;
            }
        }

        if(a.empty()) cout << 0;
        else {
            vi op = {0,0};
            for(int i=0,j=n-1; i<=j;) {
                if(s[i]!=s[j]) {
                    if(s[i]==a[0]) {
                        i++; op[0]++;
                    }
                    else if(s[j]==a[0]) {
                        j--; op[0]++;
                    }
                    else {
                        op[0] = 0; break;
                    }
                } else {
                    i++; j--;
                }
            }

            for(int i=0,j=n-1; i<=j;) {
                if(s[i]!=s[j]) {
                    if(s[i]==a[1]) {
                        i++; op[1]++;
                    }
                    else if(s[j]==a[1]) {
                        j--; op[1]++;
                    }
                    else {
                        op[1] = 0; break;
                    }
                } else {
                    i++; j--;
                }
            }

            if(op[0]==0 && op[1]==0) cout << -1;
            else if(op[0]==0) cout << op[1];
            else if(op[1]==0) cout << op[0];
            else cout << min(op[0], op[1]);
        }

        cout << endl;
    }
    return 0;
}