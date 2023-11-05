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
        int n; string s; cin >> n >> s;
        bool al = true; int alice = 0, bob = 0;
        for(char c: s) {
            if(c=='A') {
                if(al) alice++;
                else al = true;
            } else {
                if(al) al = false;
                else bob++;
            }
        }
        cout << alice << " " << bob << endl;
    }
    return 0;
}